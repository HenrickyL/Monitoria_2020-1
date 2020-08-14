# Exercício de Recursão


**1.** Faça um algoritmo que retorna o fatorial de um numero **n** passado.

~~~cpp
int fat(int n){
	// code
}
~~~

<hr>
<br>

**2.** Faça um algoritmo que retorna o menor elemento de um vetor **v** de tamanho **n**.

~~~cpp
//duas formas
//1
int min(int* v, int n);
//2
void min(int *v, int n, int* m); // m é uma variável externa
~~~

<hr>
<br>

**3.** Faça um algoritmo que recebe um vetor **v** de tamanho **n** e retorne a quantidade de elementos impares.

~~~cpp
int odd(int* v, int n);
~~~
~~~cpp
//teste
odd([1,1,2,7,3], 5);  -> 4
odd([3,4,5,6,7, 8, 9,10,11], 19);  -> 5
odd([2,4,6,8], 4);  -> 0
~~~

<hr>
<br>

**4.** Faça um algoritmo que multiplique os elementos do vetor **v** de tamanho **n** por uma constante **x**.

~~~cpp
void mutiply(int* v, int n, int x);
~~~

~~~cpp
/exemplo
int* v; [3, 7, 4, 8,-1]
multiply(v,5, 3); -> [9,21, 12, 24,-3]
~~~


<hr>
<br>

**5.** Faça um algoritmo que recebe um elemento **n** e retorna um vetor com o n primeiros elementos da sequencia de fibonacci.

~~~cpp
int* fibVet(int n);
~~~

~~~cpp
//teste
fibVet(0) - > []
fibVet(1) - > [0]
fibVet(2) - > [0,1] 
fibVet(6) - > [0,1,1,2,3,5]
~~~

<hr>
<br>

**6.** **[extra]** Faça um algoritmo recursivo que retorne a soma dos fatoriais dos elementos do vetor  **v** de tamanho **n**.

~~~cpp
int sumFat(int v, int n);
~~~

~~~cpp
//exemplo
sumFat([4, 3, 5] , 3) - > 150
//
[4, 3, 5] - > 4! + 3! + 5! = 24 + 6 + 120 = 150
~~~
