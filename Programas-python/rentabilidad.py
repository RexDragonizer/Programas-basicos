import sqlite3
import pandas as pd
import matplotlib.pyplot as plt

#obteniendo los 10 productos mas rentables
conn = sqlite3.connect("Northwind.db")
query = '''
    SELECT ProductName, SUM(Price * Quantity) as Revenue
    FROM OrderDetails od
    JOIN Products p on p.ProductID = od.ProductID
    GROUP BY od.ProductID
    ORDER BY Revenue DESC
    LIMIT 10
''' 

top_products = pd.read_sql_query(query,conn)    

top_products.plot(x='ProductName', y='Revenue', kind='bar', figsize=(10,5), legend=False)

plt.title('10 Productos mas rentables')
plt.xlabel('Productos')
plt.ylabel('Revenue')
plt.xticks(rotation=90)
plt.show()

#obteniendo los 10 empleados mas efectivos
query2 ='''
    SELECT FirstName || " " || LastName as Employee, COUNT(*) as Total
    FROM Orders o
    JOIN Employees e
    ON e.EmployeeID = o.EmployeeID
    GROUP BY o.EmployeeID
    ORDER BY Total ASC
    Limit 3
'''

top_employee = pd.read_sql_query(query2,conn)
top_employee.plot(x='Employee',y='Total',kind='bar',figsize=(10,5),legend=False)

plt.title('10 Empleados mas efectivos')
plt.xlabel('Empleados')
plt.ylabel('Total Ventas')
plt.xticks(rotation=45)

plt.show()