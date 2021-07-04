<?php
      // cria a conexao mysql
      $conexao = mysqli_connect('www.phpmyadmin.co', 'sql10.freemysqlhosting.net', 'sql10422696', 'c81SexNTlP', 'sql10422696');
      
      // charset
      mysqli_set_charset($conexao, 'utf8');
      
      // verifica a conexao
      if ($conexao-> connect_error) {
      die ("Falha ao realizar a conexao" . $conexao->connect_error);
      }
?>
