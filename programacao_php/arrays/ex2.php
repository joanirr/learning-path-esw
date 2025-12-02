<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Segundo exemplo de Arrays</title>
    </head>
    <body>
        <?php
            //Primeira forma
            $carros = array (
                'vw'        => "Fusca",
                'chevrolet' => "Monza",
                'fiat'      => "Tempra"
            );

            //Segunda forma
            $carros = [
                'vw'        => "Fusca",
                'chevrolet' => "Monza",
                'fiat'      => "Tempra"
            ];

            //Terceira forma
            $carros['vw']        = "Fusca";
            $carros['chevrolet'] = "Monza";
            $carros['fiat']      = "Tempra";
        ?>
    </body>
</html>