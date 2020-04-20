//Q4
document.write("Q4<br>")

var s = Number(prompt("digite seu salário:"))
var newS
document.write("salário:", s)

//condição
if(s <= 1000){ // 0-1000
    newS = s*1.2 // s(1+20/100) // s+ s*20/100
}else if(s <= 1500){ //1001-1500
    newS = s*1.15
}else if(s <= 2000){ // 1501-2000
    newS = s*1.1
}else{
    newS = s*1.05
}
document.write("<br>Novo salário:",newS)