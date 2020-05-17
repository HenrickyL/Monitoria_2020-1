// HTML

var n1 = Number(prompt("digite o 1º Numero:"))
var n2 = Number(prompt("digite o 2º Numero:"))
var n3 = Number(prompt("digite o 3º Numero:"))

//condição  // pensar em todos os casos

//ter 3 pares, 2 serem pares, 1 ser par e  nenhum ser par
if( n1%2==0 && n2%2==0 && n3%2 ==0  ){ // 3 pares
    document.write("3 pares")
}else if( 
        (n1%2==0 && n2%2==0 )|| 
        (n2%2==0 && n3%2==0) ||
        (n1%2==0 && n3%2==0) 
    ){ // 2 pares
    document.write("2 pares")
}else if(n1%2==0 || n2%2==0 || n3%2==0 ){ // 1 par  
    document.write("1 pares")  
}else{
    document.write("0 pares")
}