<!--Pagina PHP para agregar empleados en la base de datos basededatos.php /--> 

<?php
include("basededatos.php");
if( !empty( $_POST['empleado_nombre'] ) && !empty( $_POST['empleado_edad']) )
{
    $conexionBD = conectar_bd();
    $nombre = $_POST['empleado_nombre'];
    $edad = $_POST['empleado_edad'];

    $query = "INSERT INTO empleado (nombre, edad) VALUES (
        '$nombre',
        '$edad')";
    $exito = mysqli_query( $conexionBD, $query );
    
    if( $exito )
    {
        header('Location:listaempleados.php');
    }
    else
    {
        header('Location:nuevoempleado.php');
    }

}
else 
{
    header('Location:nuevoempleado.php');
}
?>