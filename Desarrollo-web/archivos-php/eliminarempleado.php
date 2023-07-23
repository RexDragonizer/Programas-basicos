<!--Pagina PHP para eliminar empleados en la base de datos basededatos.php /--> 

<?php
include("basededatos.php");
if( !empty( $_GET['empleadoid']) )
{
    $conexionBD = conectar_bd();
//  $id = $_GET['empleadoid'];
    

    $query = "DELETE FROM empleado WHERE id =" .$_GET['empleadoid'];
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