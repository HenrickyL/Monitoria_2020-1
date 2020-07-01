# Recursão 

## Casos:

Em recursão temos alguns casos especiais, como:

* **Função com retorno:**
Neste caso, temos que usar o return e acabamos fazendo uma incrementação dos resultados.
~~~cpp
// exemplo fatorial
~~~
* **Função sem retorno (void):**

~~~cpp
//exemplo
~~~
*  **Recursão que imita um While:**
Em alguns casos a recursão é bem semelhante ao while, como
~~~cpp 
void  printaAnteriores(int  n){ // n = 5 -> 5 4 3 2 10
	if(n ==0){//caso base : caso de parada
		cout << n <<  "\n";
	}
	else{//chamada da recursão

			cout << n <<  " ";
			printaAnteriores(n -1);
	}
}
~~~

* **Ordem de chamada da Recursão** 
