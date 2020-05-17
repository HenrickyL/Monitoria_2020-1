# Variáveis e Tratamento de dados - JS


[//]: <> (falar de Variáveis local e global)
[//]: <> (tipagem dinâmica, )


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
*/
 5 > 3              true
 5 < 5              false
 "azul" == "lilaz"  false
 10 < 100           true 
~~~

- **Lógicos**
São operadores que operam sobre valores verdade (T ou F), ou seja, combinar relações/verificações.

~~~javascript
/*
 &&             E
 ||             Ou
 !              Não
--------------------------
 Meu presente tem que ser Azul && Grande && Caro
 Vou a praia se estiver Ensolarado || se estiver com Onda 
*/ 
 True && True                       true
 True && True && True && False      false
 True || True                       true
 True || False || False || False    true
 True                               true
 !True                              false        
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

### Alguns Métodos da variável String
JavaScript trabalha com objetos, ou seja, elementos que carregam atributos e métodos padrões - Esses conceitos estão relacionados a **Orientação a Objetos**. Estas variáveis e Funções que este objeto trás podem ser acessadas utilizando **.**. Algumas destas funcionalidades:

~~~javascript
S = "Ninho de Mafagafos"
//Obter o tamanho de uma String
S.length            18                      // atributo - Sem parenteses
//Tudo Maiusculo
S.toUpperCase()     "NINHO DE MAFAGAFOS"    //Método - com parenteses
//tudo Minusculo
S.toLowerCase()     "ninho de mafagafos"

//dividir uma string apartir de um separador
data = "12/05/2020"
data.split('/')     [ '12', '05', '2020' ]
~~~

### Definindo Tarefas a variáveis
Em programação podemos utilizar o nome que quisermos para uma variável e assim como o nome podemos definir uma função/Tarefa simbólica, ou seja, definir o papel desta variável para o seu código ou bloco de código.

* **Iterador**:
    * **definição**: *É a ação de repetir algo. a repetição de um conjunto de instruções por uma quantidade finita de vezes ou então, enquanto uma condição seja aceita.* **Ou seja,**Quando trabalhamos com repetição atribuimos uma variável a tarefa de permitir a repetição sobre uma determinada condição.
    * **Tarefa**:
Geralmente a variavel iteradora é inicializada quando atribuimos um valor inicial e depois usamos de uma incrementação ou decrementaçaõ para que ela chege no objetivo que definimos.


* **Incrementar**
    * **Motivação:** Quando queremos contar as pessoas de uma sala temos que fazer a massante tarefa de contar uma a uma e para fazer isso acabos reservando um lugar na nossa cabeça para guardar essa informação, geralmente não criamos mais de um lugar, pensamos no numero atual e descartamos o anterior.
    * **Tarefa:** Aproveitamos uma variável para definir a posição na iteração(repetição), utilizamos dela mesma para salvar os valores. Não precisamos de mais de uma, pois o próximo número é o que eu tinha antes mais 1,  ou seja, utilizamos o conceito de **Adição**.
~~~javascript
//Em uma repetição
i=0 //nosso iterador
N = 10 // nosso objetivo
//definimos uma condição: Enquanto i < N(10)
while(i<N){
    console.log(i) // printar o valor de i
    i =  i+1 // a magia está aqui
    /*  lembrando que o simbolo "=" tem funçaõ de atribuição,
        logo tudo que está a direita é colocado à esqueda
        assim,
        o valor antigo de i é incrementado(adiciodanado) em um valor     
    */
}
//resultado
0,1,2,3,4,5,6,7,8,9
//se Usassemos i<=N
0,1,2,3,4,5,6,7,8,9
//Perceba que utilizamos apen
~~~
* **Decrementar**
Tem o mesmo conceito do Incrementar, porém com a ideia de **subtração**.
    * **Motivação:** Quando temos na cabeça a quantidade de cochinhas que você pode comer em uma cento de salgados que está dividindo com os amigos, você guarda na cabeça a quantidade total de salgados e vai diminuindo enquanto vai comendo.
    * **Tarefa**: Pegar uma valor inicial e ir reduzindo o valor do mesmo até chegar a um certo objetivo/condição. Desta forma, acabamos utilizamos o valor anterior **subtraido** de 1 ou mais.
~~~javascript
N=10 // quantidade de cochinhas que posso comer
i=N  // iterador é o i e vamos decrementar até 0
while(i > 0){ // enquanto i for maior que 0 eu posso comer
    i = i - 1 // vou decrementando 1 a 1
}
~~~
* **Acumulador**
    * **Objetivo:** tem o mesmo objetivo que o nome sujere acumular alguma coisa, ou seja, começar com um objeto, depois outro e outro até alcançar um objetivo ou sua casa não sobrar espaço para você. Como a quantidade de monstros que você matou no seu jogo favorito.
    * **Tarefa:** Uma variável acumuladora pode ir guardando valores até atender uma condição ou ao final de uma tarefa.
~~~javascript
//no exemplo da média das alturas dos alunos de uma sala
N = 30 quantidade de pessoas
soma = 0 // variável acumuladora
i = 0 // variável iteradora
x = 0 // variável que vai receber as alturas individuais 
//loop
for(i=0; i<N ;i++){ // vou recebendo as alturas e acumulando em soma
    x = Number(prompt())
    soma = soma + x
}
media = soma / N //calculo da média
~~~

### Alguns Métodos da variável Number
Assim como as Strings as variáveis do tipo Number trazem consigo algumas funções interessantes, como:

* **.toExponential(n)**:
Esta função/método retorna o valor do número elevado a n;
~~~javascript
var x = 3
var x2 = x.toExponential(2) //x elevado a 2 
//resultado
x2              9
~~~
* **.toFixed(n)**:
Este método retorna uma string com n casas decimais;
~~~javascript
var x = 154.78659
x.toFixed(3) // apenas 3 casas decimais
"154.786"

var y = 7
y.toFixed(2)
"7.00"
~~~
* **.toPrecision(n)**:
retorna uma string com o número com tamanho **n**, ou seja, basicamente o mesmo do toFixed, porém ele arredonda os valores para caber no tamanho


~~~javascript
var x = 7.876
x.toPrecision(2)    //2 números
'7.9'
x.toPrecision(3)    //2 números
'7.88'
x.toPrecision(5)
'7.8760'
// e se o tamanho for menor que o quantidade de casas decimais?
x = 1768.8246
x.toPrecision(1)
'2e+3' // retorna a forma compacta, em notação cientifica, onde e = 10^
x.toPrecision(2)
'1.8e+3'
x.toPrecision(5)
'1768.8'
~~~
* conversão de tipos que ja vimos;
* **Number.MAX_VALUE**
É um atributo(variável) que retorma o maior número que o javascript pode processar;
~~~javascript
Number.MAX_VALUE
1.7976931348623157e+308
//um numero muito grande
x.toPrecision(2)
'1.8e+308' // algo em torno 2*10^308
~~~
* Exemplo especial:
toLocaleString passamos o parametro da localização do tipo que estamos tratando, currency(monetário), no exemplo.
~~~javascript
var salario = 500
salario.toLocaleString("pr-BR",{style:'currency', currency:"BRL"})
'R$ 500,00'
//retornou a variavel salário na forma pr-BR e na forma monetaria BRL brasileira
salario.toLocaleString("pr-BR",{style:'currency', currency:"USD"})
salario.toLocaleString("pr-BR",{style:'currency', currency:"EUR"})
'€ 500,00'
//retornou a variavel salário na forma pr-BR e na forma monetaria EUR Europeia
~~~






 


