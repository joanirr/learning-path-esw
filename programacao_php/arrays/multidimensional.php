<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Array Multidimensional</title>
    </head>
    <body>
        <?php
            $alunos = array (
                array("João", 8.7, 9.5),
                array("Maria", 9.2, 8.8),
                array("Luiz", 4.5, 5.5),
                array("Fernanda", 8, 7.5)
            );

            echo $alunos[0][0].": Prova 1: ".$alunos[0][1].", Prova 2: ".$alunos[0][2]."<br>";
            echo $alunos[1][0].": Prova 1: ".$alunos[1][1].", Prova 2: ".$alunos[1][2]."<br>";
            echo $alunos[2][0].": Prova 1: ".$alunos[2][1].", Prova 2: ".$alunos[2][2]."<br>";
            echo $alunos[3][0].": Prova 1: ".$alunos[3][1].", Prova 2: ".$alunos[3][2]."<br>";
        ?>
    </body>
</html>