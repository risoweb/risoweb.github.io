<?php
      // cria a conexao mysql
      $conexao = mysqli_connect('remotemysql.com', 'FKEREniIkm', 'ohfiqc851X', 'FKEREniIkm');
      
      // charset
      mysqli_set_charset($conexao, 'utf8');
      
      // verifica a conexao
      if ($conexao-> connect_error) {
      die ("Falha ao realizar a conexao" . $conexao->connect_error);
      }
?>
