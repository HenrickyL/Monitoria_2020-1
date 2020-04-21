
var N = Number(prompt("Digite N:"))
var M = Number(prompt("Digite M:"))
if(N<M){
    document.write("N: ",N)
    document.write("<br>M: ",M, "<br>")
    var i = N
    if(i%2!=0) i+=1
    while(i < M){
        document.write(i,",")
        i+=2
    }

}else{
    document.write("Error N>M")
}
