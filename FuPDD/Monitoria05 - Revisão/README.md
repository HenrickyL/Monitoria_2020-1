# Monitoria FuP DD prof PH



<div style="margin-left:70vh;">
by:<a href="https://www.linkedin.com/in/henrickyl/" > Henricky Lima</a>
</div>

## Requisitos
- [Visual Studio Code](https://code.visualstudio.com/download)
- [NodeJS](https://nodejs.org/en/download/)

## Conteúdo
- [**Conhecendo JavaScript**](##JavaScript) 
- [**O que é Algoritmo?**](##Algoritmo) 
- [**Pseudo-Código**](##Pseudo-Código)
- [**Tipos de Dados**](##Tipos-de-Dados)
- [**Conversão de Dados**](##Conversão-de-Dados)
- [**Concatenação**](#Concatenação:)
- [**Formatando String**](##Formatando-String)
- [**Operadores:**](##Operadores)
    - Aritmético
    - Relacionais
    - Logicos
- [**Lógica**](##logica)
    - [ ] Tabela verdade
- [**Comandos JS**](##Comandos-JS)
    - [ ] Comentários
    - [ ] Entrada e saída de dados
    - [ ] Estrutura de decisão
    - [ ] Repeticão 
    - [ ] Listas, vetores e Objetos
    - [ ] Funções
    - [ ] ...
- [**Referência**](##Referência)

<hr style = "page-break-before: always;">

## JavaScript
<div style="align-items:center;"><img src="https://4.bp.blogspot.com/-pYn2LAUvMNQ/WtWXBIT2IRI/AAAAAAAACK8/n9pH7ikTpo4xqIl8odqkJ7kfnbfpcsbxACLcBGAs/s1600/typescript.png" alt = "Comparação JavaScript, EcmaScript e TypeScript"></div>

* **Linguagem de programação**

Uma linguagem de programação é um método padronizado, formado por um conjunto de regras sintáticas e semânticas, de **implementação** de um **código fonte** - que pode ser **compilado** e transformado em um **programa de computador**, ou usado como **script interpretado** - que informará **instruções** de processamento ao computador.

* **Utilizada:** FrontEnd Web (sites)
* **Também utilizada:**
    - BackEnd com Node.js (banco de dados, dinâmismo e interatividade)
    - Aplicações Desktop (Electron)
    - Aplicações Mobile (React Native)
* É uma das principais liguagens atualmente
* Em web temos 3 ramos principais, e por trás deles as seguintes linguagens:
    - **Conteúdo:** HTML
    - **Estilo ou Aparência:** CSS
    - **Interatividade:** JavaScript

<hr>

## Algoritmo
Conjunto de passos **Finitos** e **Organizados** que, quando executados, resolvem um determinado **Problema**.

<hr>

## **Pseudo-Código**


~~~c++
VARIAVEIS//declaração de variaveis
n1, n2, resultado: Integer;
INICIO
    //atribuição de valores
    n1 := 0;
    n2 := 0;
    resultado := 0;
    // saída de dados (mostrar na tela)
    ESCREVA("Digite o primeiro número:");
    LER(n1); //entrada de dados
    ESCREVA("Digite o segundo número:");
    LER(n2);
    //atribuição
    resultado := n1+n2;
    ESCREVA("A soma dos dois números é:",resultado);
FIM
~~~

<hr>

## **Tipos de Dados**

<img src="https://www.c-sharpcorner.com/article/datatypes-in-javascript/Images/Presentation20.jpg">

<table border = 1px style="margin:auto;" >
        <tr style = "background-color:#777777;">
                <th>Tipo de Dados</th> <th>Exemplos</th>
        </tr>
        <tr > 
                <th>Number</th> <td> 1, -3, 8.56</td>
        </tr>
        <tr>
                <th>String</th> <td> "3,14", "Frases", "Palavras", 'c'</td>
        </tr>
        <tr>
                <th>Boolean</th> <td> true, false</td>
        </tr>
        <tr>
                <th>Undefined</th> <td> undefined(ausência de valor)</td>
        </tr>
        <tr>
                <th>Null</th> <td> null (explicito)</td>
        </tr>
        <tr>
                <th>Symbol</th> <td style="text-align:center;color:blue;">-- não abordado</td>
        </tr>
        <tr>
                <th>Object</th> <td> [1,2,5], [6, "sete", true], {id:2, nome: "João"}</td>
        </tr>
        <tr>
                <th>function</th> <td style="text-align:center;color:red;">* </td>
        </tr>
</table>

<hr>

## **Conversão de Dados**
Variáveis podem ser convertidas, ou seja, transformar de um tipo para outro. Normalmente se pensa em converter um tipo Number para String ou vice-versas.
### **Number:**
Podemos converter o tipo **String** para **Number** utilizando as funções:

* **Number(X)**: Converte X para Number.
~~~javascript
/*  Pode Retornar
 Numero Inteiro
 Numero Real
 NaN     - Not a Number
 Infinity - Infinito 
 ---------------------------*/
 Number("5")        5
 Number("8.75")     8.75
 Number("Azul")     NaN
~~~

<div style = "page-break-before: always;"> </div>

* **Number.parseInt(X)**: Converte X para um numero inteiro.

~~~javascript
/* Retorna 
 Number.Int
 NaN
 ------------*/
 Number.parseInt("42")      42
 Number.parseInt("7.15")    7
 Number.parseInt(1.75)      1.75     
~~~
* **Number.parseFloat(X)**: Converte X para um número real.

~~~javascript
/* Retorna
 Number.Float
 NaN
 Infinity
 ------------------------*/
Number.parseFloat("5")      5.0
Number.parseFloat("2.7")    2.7
Number.parseFloat("Lemore") NaN
Number.parseFloat(5/0)      Infinity
~~~

### **String**
- **String(X)**: Converte X para texto.
- **X.toString()**: Converte X para string

~~~javascript
X = 17.5
String(X)           "17.5"
X.toString(X)       "17.5" 
~~~
<hr>

## **Concatenação:**
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

<hr style = "page-break-before: always;">

## **Formatando String** - ${}:

Visando facilitar a vida de quem está aprendendo a programar, existe esta técnica chamada **Template Strings** que permite a concatenação de strings de uma forma mais robusta.

~~~javascript
// TemplateString - entre crases utilize ${variável}
Txt = `${Nome} tem ${idade} anos e tirou ${Nota} na média! `  
//concatenação antiga
Txt = Nome + " tem " + idade + " anos e tirou " +Nota+ " na média!"
~~~

### **Alguns Métodos da variável String**
JavaScript trabalha com objetos, ou seja, elementos que carregam atributos e métodos padrões - Este conceito está relacionado com o conceito de **Orientação a Objetos**. Estas variáveis(atributos) e Funções(métodos),  que um objeto trás podem ser acessadas utilizando ponto(**.**). Alguns exemplos desta funcionalidade:

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

<hr>



## **Operadores**

<table border="2px" >
        <tr><th>Operadores Aritmeticos</th></tr>
        <tr style="font-weight: bold;">
                <th style = "background-color:#777777;">Operador</th>
                <td>Atribuição</td> 
                <td>Soma</td>
                <td>Subtração</td>
                <td>Multiplicação</td>
                <td>Divisão</td>
                <td>Exponencial</td>
                <td>Resto da Divisão</td>
                <td>incremento</td>
                <td>Decremento</td>
                <td>Atribuição com operação</td>
        </tr>
        <tr style="text-align:center;"> 
                <th style = "background-color:#777777;">Simbolo</th>
                <td>=</td> 
                <td>+</td>
                <td>-</td>
                <td>*</td>
                <td>/</td>
                <td>**</td>
                <td>%</td>
                <td>++</td>
                <td>--</td>
                <td>+= -= *= /= %=</td>
        </tr>
</table>

~~~javascript
//Operadores Artitmeticos
var res = x + y                      //x mais y
var res = x - y                      //x menos y
var res = x * y                      //x vezes y
var res = x / y                      //x dividido por y
var res = x % y                      //x resto da divisão por y
~~~

<table border="2px" >
        <tr><th>Operadores Relacionais</th></tr>
        <tr style="font-weight: bold;">
                <th style = "background-color:#777777;">Operador</th>
                <td>Igualdade forte</td> 
                <td>Igualdade fraca</td>
                <td>Diferença</td>
                <td>Maior</td>
                <td>Menor</td>
                <td>Maior ou igual</td>
                <td>Menor ou igual</td>
        </tr>
        <tr style="text-align:center;"> 
                <th style = "background-color:#777777;">Simbolo</th>
                <td> === </td> 
                <td> == </td>
                <td> != </td>
                <td> > </td>
                <td> < </td>
                <td> >= </td>
                <td> <= </td>
        </tr>
</table>

~~~javascript
//Operadores de comparação/Relacionais
// x == y                      x igual y  (Erro Comum: x=y)
// x != y                      x não igual y
// x > y                       x Maior que y
// x < y                       x Menor que y
// x >= y                      x Maior ou igual y
// x <= y                      x Menor ou igual y
~~~
<div style = "page-break-before: always;"></div>

<table border="2px"  >
        <tr><th>Operadores Lógicos</th></tr>
        <tr style="font-weight: bold;">
                <th style = "background-color:#777777;">Operador</th>
                <td> E </td> 
                <td> Ou </td>
                <td> Não </td>
        </tr>
        <tr style="text-align:center;"> 
                <th style = "background-color:#777777;">Simbolo</th>
                <td>&&</td> 
                <td>||</td>
                <td>!</td>
        </tr>
</table>

~~~javascript
//Operadores de combinação e negação -  Valores lógicos P e Q
// P && Q                      P e Q
// P || Q                      P uu Q
// ! P                         Não P 
~~~
<hr>

## **Lógica**
* **Tabela verdade**
<img src="https://www.startertutorials.com/blog/wp-content/uploads/2016/08/cpp-logicalops-truth-tables.png">

<hr style = "page-break-before: always;">

## **Comandos JS**

### **Comentário:**
~~~javascript
//isto é um comentário
var l = "Isto é uma comando"
/*
Isto é 
     um comentário
                em bloco! 
*/
~~~

### **Entrada e saída:**
~~~javascript
//(Output) Console
console.log("Hello world!") // printa na tala

//(Output) Document
document.write("Hello World!")
alert("Olá mundo!") //na forma de box
~~~

~~~javascript
//(input) Document
var nome = prompt("Digite seu nome:") //na forma de box
~~~

### **Condicional:**

* Condição simples

~~~javascript
// If / Se
if( condição1 ){
        //Bloco de código
}else if( condição2){
        //bloco de código 
}else{
        //bloco de código
}
//exemplo
if( x > y ){ 
    console.log("x é maior")
}else if( x < y ){
    console.log("y é maior")
}else{
    console.log("São iguais")
}
~~~
* Switch
~~~javascript
//switch case
switch(variavel){
        case comparação1: //variavel == comparação1
                //bloco de codigo
                break;
        case comparação2: 
                //bloco de código
                break;
        default: //caso contrário
                //bloco de código 
}
~~~
<div style = "page-break-before: always;">
* Operador Ternário

~~~javascript
//Ternário
variable = condition ? op_if_yes : op_if_not
//exemplo
var a=5,b=7;
var res = (a>b):"maior": "menor";
~~~
<hr>

### **Repetição**

* Enquanto (while)

~~~javascript
//while
while(condição){
    //Bloco de código
}
//exemplo
var n = 0, x = 0
while (n < 3) {
    n++ //n = n+1
    x += n
}
~~~



* for_statement

Um laço for é repetido até que a condição especificada seja falsa

~~~javascript
// for_statement padrão
for([atribição] ; [condição] ; [incremento]){
        //bloco de código
}
//exemplo - andar 5 passos para sul
for(let i=0;i<5; i++){
    cosole.log("passo ao sul!")
}
~~~
- for_in

A declaração for...in executa iterações a partir de uma variável específica, percorrendo todas as propriedades de um objeto.

~~~javascript
//for_in
for(index in object){
    //bloco de código
}
//exemplo
var arr = [3, 5, 7];
for (let i in arr) {
    console.log(i +" - "+ arr[i]) // 0 - 3, 1 - 5, 3 - 7
}

~~~

* for_of

A declaração for...of cria uma laço com objetos interativos executando uma iteração para o valor de cada objeto.

~~~javascript
// for_of
for(valor_objeto of objeto){
    //bloco de código
}
//exemplo
var Nomes = ["caio", "yusuke", "Henricky", "Pedro", "Alfredo"]
for( let nome of Nomes ){
    console.log( nome + " tem " + nome.length + " letras")
}
~~~
<hr style = "page-break-before: always;">

### **Listas, Vetores e Objetos:**

* **Vetores:**

Vetores são objetos que armazenam uma quantidade finita de valores do mesmo tipo. Eles tendem a ter um tamanho **n** e cada elemento é referenciado por um indice **i**.
~~~javascript
//vetor
var v = [10, 15, 6, 8] // length: 4
//v[i]
v[0]            10
v[1]            15
v[3]            8
~~~
* **Lista:**

Lista são, basicamente, vetores que armazenam valores de tipo diferentes. Assim como vetor elas tem indice e tamanho.
~~~javascript
//lista
var list  = ["baleia", 42, "toalha", true, false]
~~~

* **Objeto:**
~~~javascript
var pessoa = {nome: "Luiz", idade: 23, cidade:"Quixadá", casado:true}
~~~

<div style="margin-left:100vw;">
<strong>Em Construção...</strong>
</div>


<hr style = "page-break-before: always;">

 ## **Referência**

* [Laços e iterações](https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Guide/Lacos_e_iteracoes#for_statement) 