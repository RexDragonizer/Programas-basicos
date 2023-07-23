<!--Pagina HTML y php para hacer la consulta de empleados/--> 

<!DOCTYPE html>
<?php
include ("basededatos.php");
$conexionbd = conectar_bd();
$query = "SELECT id, nombre, edad FROM `empleado`;";
$resultado = mysqli_query( $conexionbd, $query );
mysqli_close( $conexionbd );

?>
<html>
    <head>
        <title>Lista Empleados</title>
        <meta charset="utf-8">
    </head>
    <body>

     <h1>Lista de Empleados</h1>
     <ol>
        <?php
        // echo "<a href='".$registrotabla['nombredecampo']."'>".$registrotabla['nombredecampo']."</a>";
            while( $registro = mysqli_fetch_assoc( $resultado ) )
            {
                echo "<li>".$registro['nombre']." (".$registro['edad'] ." años)";
                echo "<a href =".'"modificarempleado.php?empleadoid='.$registro['id'].'"> Modificar </a>';        
                echo "<a href =".'"eliminarempleado.php?empleadoid=' .$registro['id'].'"> Eliminar </a></li>';
            }
        ?>
     </ol> 

    </body>
</html>
