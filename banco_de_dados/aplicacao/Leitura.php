<?php

require_once 'conexao.php';

/*** PREPARAÇÃO E CONSULTA NO BANCO DE DADOS ***/
$instrucaoSQL = "SELECT id_cliente, nome_cliente, cpf_cliente, email_cliente, data_nascimento_cliente FROM cliente";

try {
    // Execução da consulta
    $resultSet = $dsn->query($instrucaoSQL);
    echo "Consulta realizada com sucesso!<br>";

    // Exibindo os resultados da consulta
    foreach ($resultSet as $row) {
        $cpfFormatado = preg_replace("/(\d{3})(\d{3})(\d{3})(\d{2})/", '$1.$2.$3-$4', $row['cpf_cliente']);

        //  echo "ID: {$row['id_cliente']} | Nome: {$row['nome_cliente']} | CPF: {$row['cpf_cliente']} | Email: {$row['email_cliente']}<br>";
        echo "ID: {$row['id_cliente']} | Nome: {$row['nome_cliente']} | CPF: {$cpfFormatado} | Email: {$row['email_cliente']}<br>";
    }
} catch (PDOException $e) {
    // Tratamento de erros na execução da consulta
    echo "Erro ao executar a consulta: " . $e->getMessage();
}
?>