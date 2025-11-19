@echo off
echo Organizando arquivos...

rem Criar pastas
mkdir condicionais
mkdir repeticoes
mkdir vetores
mkdir matrizes
mkdir funcoes
mkdir strings
mkdir projetos
mkdir bin

rem Mover executáveis
move *.exe bin\

rem -------------------------
rem CONDICIONAIS
rem -------------------------
move aritmeticos.c condicionais\
move operadoreslogicos.c condicionais\
move operador_ternario.c condicionais\
move modificadores.c condicionais\
move men_interativo.c condicionais\

rem -------------------------
rem REPETIÇÕES
rem -------------------------
move while.c repeticoes\
move loops_avançados.c repeticoes\
move aninhadas.c repeticoes\
move aninhada+encadeada.c repeticoes\
move incrementoc.c repeticoes\
move repeticao.c repeticoes\

rem -------------------------
rem VETORES
rem -------------------------
move vetor.c vetores\
move vetores_e_matrizes.c vetores\
move 1.c vetores\

rem -------------------------
rem MATRIZES
rem -------------------------
move vetores_e_matrizes.c matrizes\

rem -------------------------
rem FUNÇÕES
rem -------------------------
move nivel_aventureiro.c funcoes\
move incremento.c funcoes\

rem -------------------------
rem STRINGS
rem -------------------------
move olamundo.c strings\

rem -------------------------
rem PROJETOS
rem -------------------------
move encadeadasnotas.c projetos\
move encadeadas.c projetos\
move registroalunos.c projetos\
move recursividade.c projetos\

echo.
echo Concluido!
pause
