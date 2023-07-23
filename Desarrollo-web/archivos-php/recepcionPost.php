<!--Pagina PHP ara recibir datos por metodo get /--> 

<?php
$usuario = $_POST['user'];

$password = $_POST['pwd'];

$resultado = verificaDatos( $usuario, $password );

if ( $resultado ){
    echo "Bienvenido";
}
else {
    echo "Datos incorrectos";
}

function verificaDatos ( $Usuario, $Contrasena ){
    if ( $Usuario == "Administrador" && $Contrasena == "admin1234" ){
        return true;
    }
    else {
        return false;
    } 
}
?>