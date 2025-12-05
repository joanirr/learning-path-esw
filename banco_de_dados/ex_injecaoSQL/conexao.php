<?php
    /*** CONEXÃO COM O BD - REFERENTE A MOD1 NP5 ***/
    // Parâmetros utilizados na conexão:
    define('HOST', 'localhost');
    define('PORT', '5432');
    define('DBNAME', 'test_02');
    define('USER', 'postgres');    // EX DIDÁTICO
    define('PASSSWORD', '1234');   // EX DIDÁTICO

    try {
        // Estalecimento da conexão:
        $dsn = new PDO("pgsql:host=" . HOST . ";port" . PORT . ";dbname=" . DBNAME, USER, PASSWORD);
        // Mensagem de sucesso
        echo "Conexão com o banco de dados foi estabelecida com sucesso!<br>";
    } catch (PDOException $e) {
        // Captura e exibe o erro em caso de falha
        echo "A conexão falhou e retornou a seguinte mensagem de erro: " . $e->getMessage();
        exit; // Interrompe o script caso a conexão falhe
    }
?>
