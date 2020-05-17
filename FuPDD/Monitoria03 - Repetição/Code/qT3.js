//questao do teste de nivel Q3
var soma=0, media=0
//recebo do usuário a qtd
var n = Number(prompt("Digite a quantidade de numeros:"))
var i, aux
for( i=1 ; i <= n ; i++ ){
    //recebo o elemento
    aux = Number(prompt("Digite o "+(i)+"º numero:"))
    document.write("<br>n"+i+": "+aux)
    //somar
    soma+=aux
}
media = soma / n
document.write("<br>Media: "+media)