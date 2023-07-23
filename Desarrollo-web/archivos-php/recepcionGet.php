<!--Pagina PHP ara recibir datos por metodo get /--> 

<?php
$usuario = $_GET['user'];

$password = $_GET['pwd'];

echo "Usuario: ".$usuario ."<br>";
echo "Password: ".$password ."<br>";

?>