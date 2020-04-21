//HTML
var I1 = Number(prompt("Digite a idade da 1a pessoa:"))
var I2 = Number(prompt("Digite a idade da 2a pessoa:"))
var I3 = Number(prompt("Digite a idade da 3a pessoa:"))

//condição

if(  I1 > I2 && I1 > I3  ){ //primeira pessoa ser mais velha
    alert("A primeira é mais velha!")
    document.write("A primeira é mais velha!")
}
else if( I2 > I1 && I2 > I3 ){//segunda ser a mais velha
    alert("A 2a é mais velha!")
    document.write("A 2a é mais velha!")
}else if( I3 > I1 && I3 > I2 ){//terceira ser a mais velha
    alert("A 3a é mais velha!")
    document.write("A 3a é mais velha!")
}else{ // algum deles ser igual ou todos serem iguais
     alert("Idades iguais")
}