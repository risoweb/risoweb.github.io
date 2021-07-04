<?php

include 'conecta_mysql.inc';

$cliente          =     $_POST["cliente"];
$produto          =     $_POST["produto"];
$cor              =     $_POST["cor"];
$pagamento        =     $_POST["pagamento"];
$obs              =     $_POST["obs"];
$entrega          =     $_POST["entrega"];

$sql = "INSERT INTO geral VALUES"
$sql = "('$cliente', '$produto', '$cor', '$pagamento', '$obs', '$entrega')";

if ($conexao->query($sql) === TRUE) {
  echo "Usuario ok";
} else {
  echo "Erro: " . $sql . "<br>" . $conexao-> error;
}
$conexao->close();

?>
