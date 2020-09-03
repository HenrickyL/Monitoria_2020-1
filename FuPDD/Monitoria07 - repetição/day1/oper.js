console.log(`
    Operações
    ------------
    Soma
    subtração
    multiplicaão
    sair
`)


run = true
while(run){
    let op = prompt("digite a operação que vc quer:")
    switch (op) {
        case 'soma':
            console.log('Operação de soma')
            break;
        case 'subtração':
            console.log('Operação de subtração')
            break;
        case 'sair':
            run = false;
            break;
    }

}