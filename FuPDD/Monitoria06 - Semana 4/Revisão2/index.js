let x = Number(getline())
let y = Number(getline())

function divisiveis35( a , b ){
    if( (a%3===0 && b%3===0) || (a%5===0 && b%5===0) )
        return 'sim'
    else
        return 'não'
}

process.stdout.write( divisiveis35(x,y) )