<?php
    /*** LEITURA DO BD - REFERENTE A MOD2-NP4 e com banco de dados test_02 ***/
    require_once 'conexao.php';

    //Realizando uma consulta no BD por meio do login e senha recebidos por POST
    $login = $_POST['login'];
    $pswd = $_POST['pswd'];
    $instrucaoSQL = "Select * From cliente Where login = '$login' And senha = '$pswd'";

    try {
        // Execução da consulta
        $resultSet = $dsn->query($instrucaoSQL);
        echo "Consulta realizada com sucesso!<br>";

        // Exibindo os resultados da consulta
        foreach ($resultSet as $row) {
            echo "ID: {$row['id_cliente']} | Nome: {$row['nome_cliente']} | CPF: {$row['cpf_cliente']}";
        }
    } catch (PDOException $e) {
        // Tratamento de erros na execução da consulta
        echo "Erro ao executar a consulta: " . $e->getMessage();
    }
?>