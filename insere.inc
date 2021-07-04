<?php
  //cria a conexao
  $conexao = mysqli_connect('sql10.freemysqlhosting.net', 'sql10422696', 'sql10422696', 'c81SexNTlP');
  
  // charset
  mysqli_set_charset($conexao, 'utf8');
  
  //verifica a conexao
  if ($conexao->connect_error){
  die("falha ao realizar" . $conexao->connect_error);
  }
  ?>
