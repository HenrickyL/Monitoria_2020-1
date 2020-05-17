//Acumuladores

//soma  - elemento neutro 0

soma = 0

while(soma < 100){
    document.write(soma+", ")
    soma+=1
}


//multiplicação - elemento neutro 1
N= Number(prompt("Digite um numero:"))
fatorial = 1 // 6! =  6*5*4*3*2*1
document.write(`<br><br> ${N}! = `)
for(var i=1; i<=N ; i++){
    fatorial = fatorial * i
    document.write(fatorial+ " * ")
}