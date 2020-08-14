# Fazer um mini-game
A ideia consiste em fazer um joguinho como o apresentado no vídeo **game.mkv**, onde o objetivo é treinar os conceitos de cabeçalho, ponteiros e estruturas.

Você pode testar o código pronto executando o arquivo **exe**.

~~~sh
//no terminal do linux
./exe 
~~~


## Ideia base:

Usando uma matriz de inteiros formadas por 0's e 1's.
~~~
0 0 0 0 0
0 0 1 0 0
0 0 0 0 0
~~~
E uma matriz de caracteres formada por ' '(espaços) e '@'.
~~~
_____
__1__
_____ 
~~~
Temos que fazer as modificações necessárias na matriz de números, alterar a posição dos 1, e conver as alterações para a mariz de caracteres e printar-la na tela.

## Como um jogo funciona:
Um jogo é um loop infinito que tem 2 métodos principais: **update**  e **draw**.
* **update** é nele que fazemos as alterações do sistema, como movimentar um personagem e calcular pontos. (Equivalente ao Backend de uma aplicação web).
* * **draw** é nela que limpamos a tela e desenhamos tudo em suas devidas posições.

Um jogo pode ter a seguinte main:
~~~cpp
int main(){
	//variaveis:
	bool run = true;
	//criação de objetos
		//criar a tela,
		//personagens, ...
	// game-loop
	while(run){
		update();
		draw();
	}
	return 0;
}
~~~ 

## O que fazer?

Usando o cabeçalho **core.h** faça os seus primeiros rabiscos das funções nele definidas, criando um arquivo **core.cpp**.

1. inicialmente quero que você tente cria a matriz numérica. Você pode fazer uma função que cria uma matriz de zeros de dimensões passada como parâmetro.
2.  crie uma função que converta a mesma em uma matriz de caracteres
3. crie uma função que *injete* um 1 em uma posição da matriz numérica;
4. tente desenhar na tela e brincar com essas matrizes.

## Dica:
1. use a função system abaixo para limpar o console.
~~~cpp
system("clear");
~~~
