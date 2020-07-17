//calcular a média de 3 notas

//declarei as variaveis
var n1, n2, n3, res

//receber essas notas
n1 = prompt("Digite a primeira nota:")
n1 = Number(n1)
n2 = Number(prompt("Digite a segunda nota:"))
n3 = Number(prompt("Digite a terceira nota:"))

// soma as notas e divido pela quantidade
res = (n1+n2+n3)/3

// mostrar na tela
document.write("A media das 3 notas é: "+ res)