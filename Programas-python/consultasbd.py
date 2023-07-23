import sqlite3

# Conectar a la base de datos (si no existe, se creará automáticamente)
conn = sqlite3.connect('database.db')

# Crear un cursor para ejecutar comandos SQL
cursor = conn.cursor()

# Crear una tabla si no existe
cursor.execute('''CREATE TABLE IF NOT EXISTS empleados
                  (id INTEGER PRIMARY KEY AUTOINCREMENT,
                  nombre TEXT,
                  edad INTEGER,
                  salario REAL)''')

# Insertar un nuevo empleado
cursor.execute("INSERT INTO empleados (nombre, edad, salario) VALUES (?, ?, ?)", ("Juan", 30, 2500.0))
conn.commit()

# Consultar todos los empleados
cursor.execute("SELECT * FROM empleados")
rows = cursor.fetchall()
for row in rows:
    print(row)

# Actualizar el salario de un empleado
cursor.execute("UPDATE empleados SET salario = ? WHERE nombre = ?", (3000.0, "Juan"))
conn.commit()

# Consultar empleados con salarios superiores a 2000.0
cursor.execute("SELECT * FROM empleados WHERE salario > ?", (2000.0,))
rows = cursor.fetchall()
for row in rows:
    print(row)

# Cerrar la conexión con la base de datos
conn.close()
