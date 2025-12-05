<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Teste de Injeção de SQL</title>
    </head>
    <body>
        <h1>Login</h1>
        <form action="InjecaoSQL.php" method="POST">
            <label for="login">Login:</label>
            <input type="text" id="login" name="login" required>
            <br><br>

            <label for="pswd">Senha:</label>
            <input type="password" id="pswd" name="pswd" required>
            <br><br>

            <button type="submit">Entrar</button>
        </form>
    </body>
</html>