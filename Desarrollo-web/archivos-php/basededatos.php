<!--Pagina PHP para conectar base de datos basededatos.php /--> 

<?php
function conectar_bd()
{
    $servidor = "localhost:3307";
    $nombrebd = "empresa";
    $usuario = "root";
    $contrasena = "3YIE9D4HQrizAs1/";
    
    $link = mysqli_connect($servidor, $usuario, $contrasena);

    mysqli_select_db($link, $nombrebd);
    
    return $link;

}

?>