<!--Pagina PHP para crear nuevos empleados en la base de datos basededatos.php /--> 

<!DOCTYPE html>
<html>
    <head>
        <title>Nuevo Empleado</title>
        <meta charset="utf-8">
    </head>
    <body>
     <form action = "agregarEmpleado.php" method = "post" name = "nuevoEmpleado"> 
        Nombre: <input type = "text" name = "empleado_nombre" >
        <br>
        Edad: <input type = "number" name = "empleado_edad" >
        <br> 
        <input type = "submit" name = "Agregar empleado">
     </form>
    </body>
</html>
