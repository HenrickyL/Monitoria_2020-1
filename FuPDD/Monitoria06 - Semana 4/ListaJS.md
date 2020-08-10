# Lista de Exercício JavaScript

<span style="margin-left:70vw;">By: [Henricky Lima](https://www.linkedin.com/in/henrickyl/)</span>

1. Escreva uma função *quadTriple* que recebe um numero **n** e *retorna* o quadrado do triplo de **n**.

~~~javascript
function quadTriple( n ){
    let resultado
    /*
        Seu codigo
    */
    return resultado
}
~~~
~~~
----Exemplos----
Escreva um inteiro: -> 5
O quadrado do triplo de 5 é 255 ( (5*3)**2 )
~~~

2. Escreva um script que recebe uma quantidade de **horas** e imprima a traduçaõ dessas horas em **dias**. Utilize uma função no formato abaixo.
~~~javascript
function converteHoras( horas){
    let d
    /*
        Seu codigo
    */
    console.log( `${horas} correspondem a ${d} dias.` )
}
~~~

~~~
----Exemplo----
Escreva as horas para saber a quantos dias corresponde.
Horas -> 45678
45678 horas correspondem a 1903.25 dias.
 ~~~

<hr style="page-break-after: always;">

 3. Escreva um programa que pede ao utilizador que lhe forneça um número correspondente ao raio de um círculo e que escreve a área do círculo. A área de um círculo de raio **r** é dada pela fórmula **πr2**. Use o valor 3.14 para a constante π. O seu programa deve gerar uma interação como a seguinte:
 ~~~
Escreva o raio do circulo para eu calcular a area.
Raio -> 7
Um circulo de raio 7 tem area de 153.86.
 ~~~
 Utilize uma função para isso:
 ~~~javascript
function areaCirculo( raio ){
    let area, pi = 3.14
    /*
        Seu código
    */
    return area
}
 ~~~

 4. Utilizando a função **areaCirculo** do exercício anterior, escreva uma função com o nome **areaCoroa** que recebe dois argumentos, **rEx** e **rIn**, e tem como valor de retorno a área de uma coroa circular de raio interior *rIn* e raio exterior *rEx*. A sua função deverá gerar um erro de valor (ValueError) se o valor de r1 for maior que o valor de r2. 
 $$A_{coroa} = A_{exterior} - A_{interior}$$

~~~javascript
function areaCoroa(rEx, rIn){
    //seu codigo
}
A_coroa = areaCoroa(10, 3)  // resultado 285.74
// A_coroa = (Area do circulo de raio 10) - (Area do circulo de raio 3)
// A_coroa = 314 - 28.26

~~~

5. Faça uma função que recebe, respectivamente, *raio_externo_1*, *raio_interno_1*, *raio_externo_2*, *raio_interno_2* e imprima qual das duas coroas é maior. Utilize as funções *areaCirculo* e *areaCoroa* das questões anteriores.
~~~javascript
function  MaiorArea( RE1, RI1, RE2, RI2 ){
    //seu codigo
}
~~~
~~~javascript
//--- Exemplo ---
"Raio externo da coroa 1:"  10
"Raio interno da coroa 1:"  3

"Raio externo da coroa 2:" 30
"Raio interno da coroa 2:" 25

"A coroa " 2 "Tem raio maior"
~~~

6. Faça uma função que receba a sigla(minuscula com 3 letras) de mês e retorne quantos dias este mês tem. Tome como base a tabela abaixo.

<center>

Mês   | nº Dias
:---------: | :------:
jan, mar, mai, jul, ago, out, dez | 31
abr, jun, set, nov  | 30
fev | 28

</center>

7. Faça uma função que recebe as opções de 2 jogadores no *Pedra papel Tesoura* e retorne qual jogador ganhou ou se deu empate.
<center>
<img style="width:30vw; margin:0 auto;" src="https://gamersensato.com.br/wp-content/uploads/2017/07/jokenpo.jpg">
</center>

~~~javascript
function PPT(jog1, jog2){
    //seu codigo
}

PPT('papel', 'pedra')   // jogador1
PPT('papel', 'tesoura') // jogador2
PPT('pedra', 'pedra')   // empate
PPT('pedra', 'papel')   // jogador2
~~~









### [Referência](https://docplayer.com.br/16494710-Exercicios-para-fundamentos-da-programacao.html)