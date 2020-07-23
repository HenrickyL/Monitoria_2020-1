// var a = prompt("Digite um numero:")
// var b = prompt("Digite outro numero:")
// a = Number(a)
// b = Number(b)

// // document.write("A soma é: "+ (a+b))




//Condicional


//1) verificar a idade de uma pessoa e dizer se ela é maior de idade ou não

// var idade = Number(prompt("Digite sua idade:"))
//     //veficação
// if(idade >= 18){
//     document.write("Você é maior de idade!<br>Pode ser preso cuidado!")
// }else{
//     document.write("Você é menor de idade!")
// }




//2) Pergunte 3 notas faça a média e diga se a pessoa está de reprovou, AF ou passou

    //quais variaveis vou utilizar?
// var n1,n2,n3
// n1 = Number(prompt("Digite a 1ª nota:"))
// n2 = Number(prompt("Digite a 2ª nota:"))
// n3 = Number(prompt("Digite a 3ª nota:"))
//     //faço o calculo da média
// var media = (n1+n2+n3)/3
//     // verificação com base na resposta
//     // < 4 reprova / 4 ..6.9999 AF / 7 > passa
// if(media < 4){ //0 .. 3.9999
//     document.write("Reprovou!")
// }
// else if( (media >= 4)  && (media <7) ){ //4 .. 6.99999
//     document.write("AF!")
// }else{
//     document.write("Passou!")
// }

//3) Recebe um numero do mes e imprima na tela o mês por extenso

var mes = Number(prompt("Digite o numero do mês:"))

// if(mes === 1){
//     document.write("Janeiro")
// }else if(mes === 2){
//     document.write("Fevereiro")
// }else if(mes === 3){
//     document.write("Março")
// }else if(mes === 4){
//     document.write("Abril")
// }else if(mes  === 5){
//     document.write("Maio")
// }else if(mes === 6){
//     document.write("Junho")
// }else if(mes === 7){
//     document.write("Julho")
// }else if(mes === 8){
//     document.write("Agosto")
// }else if(mes === 9){
//     document.write("Setembro")
// }else if(mes === 10){
//     document.write("Outubro")
// }else if(mes === 11){
//     document.write("Novembro")
// }else if(mes === 12){
//     document.write("Dezembro")
// }else{ // se nenhum foi verdade faz isso
//     document.write("Mês invalido")
// }


switch(mes){
    case 1:
        document.write("Janeiro")
        break
    case 2:
        document.write("Fevereiro")
        break        
    case 3:
        document.write("Março")
        break
    case 4:
        document.write("Abril")
        break
    case 5:
        document.write("Maio")
        break
    case 6:
        document.write("Junho")
        break
    case 7:
        document.write("Julho")
        break
    case 8:
        document.write("Agosto")
        break
    case 9:
        document.write("Setembro")
        break
    case 10:
        document.write("Outubro")
        break
    case 11:
        document.write("Novembro")
        break
    case 12:
        document.write("Dezembro")
        break
    default:
        document.write("Mês invalido!")
}