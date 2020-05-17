//questão do teste Q6

//recebo o numero do usuario
var N = Number(prompt("N:"))
//repetição
var i, soma=0
document.write("S("+N+") = ")

for(i= N ; i>0 ; i--){
    soma += i
    document.write(i,"+")
}
document.write(" = "+soma)
document.write("<br>n(n+1)/2 = "+ (N*(N+1)/2))
