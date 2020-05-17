//Q6
document.write("Q6<br>")

var j1 = Number(prompt("J1:"))
var j2 = Number(prompt("J2:"))
var j3 = Number(prompt("J3:"))
document.write(">> ",j1,", ",j2,", ", j3,", <br>")

//condição -  ver todos os casos
if( j1 != j2 && j1 != j3 /*&& j2 == j3 && j1 != j3*/){ // j1 ganhou
    document.write("Jog1")
}else if( j2 != j1 && j2 != j3 ){ //j2 ganhou
    document.write("Jog2")
}else if( j3 != j2 && j3 != j1 ){ // j3  ganhou
    document.write("Jog3")
}else{ // empate
    document.write("*")
}
