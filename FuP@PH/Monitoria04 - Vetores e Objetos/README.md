# Variáveis e Tratamento de dados - JS

## Variáveis
As variáveis são dados que estão ou poderão estar armazenado em uma posição da memória. Estes dados são de um tipo e podem se operados ou relacionado de alguma forma ou até convertidos.

### Tipos primitivos principais:

Todo dado é de um tipo específico, no JavaScript temos 3 tipos principais:
- **Number:**
    Trabalha com os tipos numéricos, seja ele um numero inteiro ou quebrado.
       - **Int**eger (Nº Inteiro)
            - ... -2, -1, 0, 1 ,2, ...
       - **Float** (Nº Real)
            - ...-1.2, -1, -0.5, -0.51 ,0, 0.5, 0.51, 1, 1.2 ...
       - Engloba valores numéricos N (vou definir assim), NaN(Not a Number) e Infinity.

- **String:**
    Trabalha com textos.
    - **Char** (Caractere)
        São caracteres individuáis.
        - 'a', 'A', 'b','1', ' ', '&',...
    - **String** (Texto)
        São formados pela combinação de caracteres, esta combinação podemos chamar de *vetor de caracteres* ou *string*. Estes vertores sempre tem associado a ideia de tamanho(toda palavra tem uma quantidade de letras) e indice.
        - "abacaxi", "laranja", "Carlos",...
- **Boolean:**
    Tudo que os computadores processam são **0**s e **1**s, logo, **verdadeiro** e **falso**, o **Haver** ou **não** corrente no circuito. Assim como, toda relação lógica envolve o conceito de verdadeiro ou falso, logo uma linguagem tem que trabalhar com esses dados.
    - True e False

<br>
Podemos Verificar o tipo de uma variável pela função **typeof**.

### Operadores:
Os operadores são so simbolos reservados pelo sistema a fim de operar ou relacionar variáveis. Existem 3 tipos:
- **Aritméticos:**
São operadores que operam os dados de forma matemática, ou seja, operam sobre números e retorna um valor do mesmo tipo 

~~~javascript
/*
 +            Adição(Nº) ou Concatenação(Txt)
 -            Subtração 
 *            Multiplicação
 /            Divisão
 %            Resto da divisão
-------------------------------
 Number + Number = Number
 Int + Int = Int
 Float + Int = Float
 String + String = String
*/
~~~

- **Relacionais:**
São operadores que operam variáveis a fim de retornar um valor verdade, ou seja, verificam sentenças, igualdade, diferença, maioridade ou menoridade.

~~~javascript
/*
 ==             Igualdade ( O simbolo "=" é reservado para atribuição)
 >              Maior que
 >=             Maior ou igual
 <              Menor que
 <=             Menor ou igual
 !=             Não igual (Diferente)
 ---------------------------------------
 5 > 3              Verdade
 5 < 5              Falso
 "azul" == "lilaz"  Falso
 10 < 100           Verdade 
  
*/
~~~

- **Lógicos**
São operadores que operam sobre valores verdade (T ou F), ou seja, combinar relações/verificações.

~~~javascript
/*
 &&             E
 ||             Ou
 !              Não
 -------------------------
 True && True                       True
 True && True && True && False      False
 True || True                       True
 True || False || False || False    True
 True                               True
 !True                              False
 --------------------------
 Meu presente tem que ser Azul && Grande && Caro
 Vou a praia se estiver Ensolarado || se estiver com Onda
*/        
~~~ 


## Tratamento de Dados

### Atribuidores:
Existem simbolos reservados que tem a função de guardar valores em variáveis, ou seja, armazenar dados na memória.

~~~javascript
/*   Atribuidores:
 =          Atribui >(tuda que está a Direita) na variável a < (Esquerda)
 +=         Incrementar : Atribui o que está salvo na variável < somado com o que está a >
 -=         Decrementar : subtraido com o da > com o que estava na < 
 *=         Multiplicado o > com o que estava na <
 /=         Divide o que estava a < pelo que esta a >
 %=         Resto da divisão do que estava < pelo que está a >
-------------------------------------------------
*/
var N = 5   //Atribuindo 0 a variável N
N += 1      5+1 = 6
N += 3      6+3 = 9

N = 3       //Atribuindo o valor 3 a variável N
N -= 2      3-2 = 1
N -= 5+3    1-(5+3) = -7      
~~~

### Concatenação:
Concatenação é a operação de juntar duas strings, ou, juntar duas palavras.

~~~javascript
/* Concatenação:
  String + String   = String
  String + Number   = String
  String + Boolean  = String
*/
//ex1
A = "Azul"
B = "Marinho"
A+B             "AzulMarinho"
//ex2
Nome    = "Luiz"
Idade   = 15
Nota    = 7.5
Txt     = Nome + " tem " + idade + " anos e tirou " +Nota+ " na média!"
//resultado    
"Luiz tem 15 anos e tirou 7.5 na média!" 
~~~

### Conversão de tipo:
Variáveis podem ser convertidas, ou seja, transformar de um tipo para outro. Normalmente se pensa em converter um tipo Number para String ou vice-versas
- **Number:**
    Podemos converter o tipo **String** para **Number** utilizando as funções:
    - **Number(X)**: Converte X para Number.

~~~javascript
/*  Pode Retornar
 Numero Inteiro
 Numero Real
 NaN     - Not a Number
 Infinity - Infinito 
 ---------------------------
*/    
 Number("5")        5
 Number("8.75")     8.75
 Number("Azul")     NaN

~~~
    - **Number.parseInt(X)**: Converte X para um numero inteiro.

~~~javascript
/* Retorna 
 Number.Int
 NaN
 ------------
*/
 Number.parseInt("42")      42
 Number.parseInt("7.15")    7
 Number.parseInt(1.75)      1.75     
~~~
    - **Number.parseFloat(X)**: Converte X para um número real.

~~~javascript
/* Retorna
 Number.Float
 NaN
 Infinity
 ------------------------
*/
Number.parseFloat("5")      5.0
Number.parseFloat("2.7")    2.7
Number.parseFloat("Lemore") NaN
Number.parseFloat(5/0)      Infinity
~~~

- **String**
    - **String(X)**: Converte X para texto.
    - **X.toString()**: Converte X para string

        ~~~javascript
        X = 17.5
        String(X)           "17.5"
        X.toString(X)       "17.5" 
        ~~~

### Formatando String - ${}:
    Visando facilitar a vida de quem está aprendendo a programar, existe esta técnica chamada **Template Strings** que permite a concatenação de strings de uma forma mais robusta.

~~~javascript
// TemplateString - entre crases utilize ${variável}
Txt = `${Nome} tem ${idade} anos e tirou ${Nota} na média! `  
//concatenação antiga
Txt = Nome + " tem " + idade + " anos e tirou " +Nota+ " na média!"
~~~

### Conhecendo a variável String
JavaScript trabalha com objetos, ou seja, elementos que carregam atributos e métodos padrões - Esses conceitos estão relacionados a **Orientação a Objetos**. Estas variáveis e Funções que este objeto tras podem ser acessadas utilizando **.**. Algumas destas funcionalidades:

~~~javascript
S = "Ninho de Mafagafos"
//Obter o tamanho de uma String
S.length            18                      // atributo - Sem parenteses
//Tudo Maiusculo
S.toUpperCase()     "NINHO DE MAFAGAFOS"    //Método - com parenteses
//tudo Minusculo
S.toLowerCase()     "ninho de mafagafos"
~~~



