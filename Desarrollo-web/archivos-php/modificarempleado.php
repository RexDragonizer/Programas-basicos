<!--Pagina PHP para modificar empleados en la base de datos basededatos.php /--> 

<?php
include("basededatos.php");
$conexionbd = conectar_bd();
$query = "SELECT id, nombre, edad FROM empleado WHERE id =".$_GET['empleadoid'];
$resultado = mysqli_query( $conexionbd, $query );
mysqli_close($conexionbd);

$registro = mysqli_fetch_assoc($resultado);

?>
<!DOCTYPE html>
<html>
    <head>
        <title>Empleadp</title>
        <meta charset="utf-8">
    </head>
    <body>
     <form action = "actualizarempleado.php" method = "post" name = "nuevoEmpleado"> 
        <input type = "text" name = "empleado_nombre" value = "<?php echo $registro['nombre'] ?>">
        <br>
        Edad: <input type = "number" name = "empleado_edad" value = "<?php echo $registro['edad'] ?>">
        <br> 
        <input type = "hidden" name = "empleado_id" value = "<?php echo $registro['id'] ?>" >
        <input type = "submit" name = "Actualizar empleado">
     </form>
    </body>
</html>
