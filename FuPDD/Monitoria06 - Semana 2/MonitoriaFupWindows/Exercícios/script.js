// receber os segundos
//var tempo = Number(prompt("Digite a quantidade de segundos:"))
var tempo = Number(getline())
    // conversão horas minutos segundos
var H, M, S

//calcular
M = Number.parseInt(tempo / 60) // pego a parte inteira

H = Number.parseInt(M / 60) // quantas horas tem nessa quantidade de minutos

M = M % 60 // resto de minutos depois de saber quantas horas são

S = tempo % 60 // resto dos segundos

//console.log(H + ":" + M + ":" + S)
console.log(`${H}:${M}:${S}`)