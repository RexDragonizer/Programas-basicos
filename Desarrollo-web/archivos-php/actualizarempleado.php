<!--Pagina PHP para actualizar empleados en la base de datos basededatos.php /--> 

<?php
include("basededatos.php");
if( !empty( $_POST['empleado_nombre'] ) && !empty( $_POST['empleado_edad'] ) && !empty( $_POST['empleado_id'] ) )
{
    $conexionBD = conectar_bd();
    $nombre = $_POST['empleado_nombre'];
    $edad = $_POST['empleado_edad'];
    $id = $_POST['empleado_id'];

    //$query = "UPDATE empleado SET nombre ='".$_POST['empleado_nombre']."',edad ='".$_POST['empleado_edad']."'WHERE id =".$_POST['id'];  
    $query = "UPDATE empleado SET nombre = '$nombre', edad = '$edad' WHERE `id` = '$id'";
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