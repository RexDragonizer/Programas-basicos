<?php
   $edad [ 0 ] = 14;
   $edad [ 1 ] = 16;
   $edad [ 2 ] = 18;
   $edad [ 3 ] = 24;
   echo "Tu edad 1 es:". $edad[ 0 ]. "<br>";
   echo "Tu edad 2 es:". $edad[ 1 ]. "<br>";
   echo "Tu edad 3 es:". $edad[ 2 ]. "<br>";
   echo "Tu edad 4 es:". $edad[ 3 ]. "<br>";

for ( $i = 0; $i <= 3; $i++ ) {
      if ( $edad [ $i ] >= 18 ) {
         echo "La persona ";
         echo $i + 1;
         echo " puede ser registrada <br>";
      }
      else if ( $edad [ $i ] >= 15 ) {
         echo "La persona ";
         echo $i + 1;
         echo " puede recibir noticias <br>";
      }
      else {
         echo "La persona ";
         echo $i + 1;
         echo " no puede ser registrada <br>";
         }
   }

?>