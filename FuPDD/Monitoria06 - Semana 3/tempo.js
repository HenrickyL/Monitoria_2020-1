console.clear()


var m, s , h

//crio uma função que passo a qtd de segundo
// e retorna a string no formato h:m:s
function tempo(segundos) {
    // qtd de min em "segundos"
    m = Number.parseInt(segundos/60)
    // o resto dos segundo
    s = segundos%60
    //qtd de horas em 'm'
    h = Number.parseInt(m/60)
    // console.log(m)
    //os minutos que restaram
    m = m%60
    //retorna a string
    return `${h}:${m}:${s}`  
}



var seg = Number(getline()) //segundos
let resposta=tempo(seg)
console.log(resposta)