<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Estruturas de decisão e repetição</title>
    </head>
    <body>
        <?php
            $notas=[6.6, 8.4, 8.9, 6.7, 9.8, 10, 8.5, 7.5, 9, 8.2];
            $soma = 0;

            foreach ($notas as $i) {
                $soma += $i;
            }
            $media = $soma / 10;

            if ($media < 6.0) {
                echo "Média da turma = " .$media. ". Estude mais!";
            }
            elseif ($media == 6.0) {
                echo "Média da turma = " .$media. ". Na média!";
            }
            else {
                echo "Média da turma = " .$media. ". Acima da média!";
            }
        ?>
    </body>
</html>