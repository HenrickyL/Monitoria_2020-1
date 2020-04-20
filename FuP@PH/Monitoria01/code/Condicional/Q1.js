// condicional
/*
var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas
*/

//Q1
    // interpretador
//console.log("Digite sua nota: ") // recebendo a nota
//var nota =Number(getline())
    //html
document.write("Executando")
var nota = Number(prompt("Digite sua nota: "))
// condição
if( nota >= 0 && nota < 25){ // F 0-24
    alert("F")
    //console.log("F")
}else if( nota >= 25 && nota < 45 ){ //E 25 - 44
    //console.log("E")
    alert("E")
}else if(nota >= 45 && nota < 50){ // D 45 - 49
    //console.log("D")
    alert("D")
}else if(nota >= 50 && nota < 60){ // C 50 - 59
    //console.log("C")
    alert("C")
}else if (nota >= 60 && nota < 80){ // B 60 - 80
    //console.log("B")    
    alert("B")
}else if(nota >= 80 && nota <= 100){ // A 80-100
    //console.log("A")
    alert("A")
}else{
    alert("Nota inválida")
}

