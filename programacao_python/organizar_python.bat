@echo off
echo Organizando arquivos Python...

rem Criar pastas
mkdir poo
mkdir funcoes
mkdir estrutura_dados
mkdir matematica
mkdir tkinter_gui
mkdir projetos
mkdir outros

rem -----------------------------------------
rem POO (Programação Orientada a Objetos)
rem -----------------------------------------
move "atributos_classe.py" poo\
move "atributos_privados.py" poo\
move "Banco.py" poo\
move "burlando_atr_privados.py" poo\
move "Circulo.py" poo\
move "Circulo2.py" poo\
move "classe.py" poo\
move "classe_semconstrutor.py" poo\
move "Cliente.py" poo\
move "comparacao.py" poo\
move "comunicacaoEntreObjetos.py" poo\
move "Conta.py" poo\
move "ContaCliente.py" poo\
move "ContaClienteExtrato.py" poo\
move "ContaComum.py" poo\
move "Contadec.py" poo\
move "ContaEspecial.py" poo\
move "ContaRemunerada.py" poo\
move "ContaRemuneradaPoupanca.py" poo\
move "heranca.py" poo\
move "heranca_multipla.py" poo\
move "heranca&polimorfismo.py" poo\
move "instanciando_objeto.py" poo\
move "metodo_estatico.py" poo\
move "metodo_privado.py" poo\
move "metodo_sacar.py" poo\
move "metodos_classe.py" poo\
move "metodos_comRetorno.py" poo\
move "metodos_deClasses.py" poo\
move "metododecorado.py" poo\
move "polimorfismo.py" poo\
move "Poupanca.py" poo\
move "transEntreContas.py" poo\
move "transfEntreContas.py" poo\
move "usandometododecorado.py" poo\
move "validarcpf.py" poo\

rem -----------------------------------------
rem FUNÇÕES E ESTRUTURA DA LINGUAGEM
rem -----------------------------------------
move "docstring.py" funcoes\
move "elif.py" funcoes\
move "else&finally.py" funcoes\
move "for.py" funcoes\
move "funcao.py" funcoes\
move "if.py" funcoes\
move "if-else.py" funcoes\
move "init&self.py" funcoes\
move "recursiva.py" funcoes\
move "recursiva_fatorial.py" funcoes\

rem -----------------------------------------
rem ESTRUTURA DE DADOS
rem -----------------------------------------
move "listas.py" estrutura_dados\
move "strings.py" estrutura_dados\
move "modulo_time.py" estrutura_dados\
move "modulos.py" estrutura_dados\

rem -----------------------------------------
rem MATEMÁTICA / BIBLIOTECAS
rem -----------------------------------------
move "ex_math.py" matematica\
move "ex_numpy.py" matematica\
move "ex_numpy&matplotlib.py" matematica\
move "ex_matplotlib.py" matematica\

rem -----------------------------------------
rem TKINTER / GUI
rem -----------------------------------------
move "ex_tkinter.py" tkinter_gui\
move "ex_tkinter2.py" tkinter_gui\
move "ex_tkinter3.py" tkinter_gui\
move "captura_clique.py" tkinter_gui\
move "captura_clique2.py" tkinter_gui\
move "coordenadas_mouse.py" tkinter_gui\
move "televisao.py" tkinter_gui\
move "taximetro.py" tkinter_gui\

rem -----------------------------------------
rem PROJETOS / EXERCÍCIOS GRANDES
rem -----------------------------------------
move "atividade_biblioteca.py" projetos\
move "atividade1.py" projetos\
move "atividade2.py" projetos\
move "atividade3.py" projetos\
move "calculadora_de_soma.py" projetos\
move "calculo.py" projetos\
move "Extrato.py" projetos\
move "primeiro_programa.py" projetos\
move "pratica_biblioteca.py" projetos\
move "pratica_maioridade.py" projetos\
move "teste.py" projetos\
move "testecontas.py" projetos\
move "testecontas2.py" projetos\
move "torres_de_hanoi.py" projetos\

rem -----------------------------------------
rem OUTROS
rem -----------------------------------------
move "captura_clique.py" outros\

echo.
echo ORGANIZAÇÃO CONCLUÍDA COM SUCESSO!
pause
