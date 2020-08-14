let consumo = Number(prompt("consumo: "))

function gasto(valor){
    let total = 0


    let v = valor-101 // quanto a mais
    if( v>0 ){ // 150 -101 = 49 > 0
        total = total+ 5*v + 5
    }
    
    valor = valor - v // 150 -49 = 101
    v= valor -31 // 101 - 31 = 70 
    if( (valor-30)>0) total = total +2*v 

    valor = valor -v  // 101 - 70 = 31
    v = valor - 11 // 31 - 11 = 20
    if( v > 0 )   total = total +1*v


    valor = valor -v  // 100 - 69 = 31
    v = valor - 11 // 31 - 11  = 20
    if (v> 10) total = total + v
    

    valor = valor -v  // 31 - 20 == 11
    v = valor - 10 // 11 - 10 = 1
    
    if(v>0) total = total + 7

    return total

}

console.log(gasto(consumo))