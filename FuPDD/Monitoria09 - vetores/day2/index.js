var fs = require("fs"); //biblioteca padrao do NODE
let __lines = fs.readFileSync(0).toString().split("\n");
let getline = () => __lines.shift(); //so copiar essas 3 linhas

// let x = Number(getline());
// let y = getline();

// console.log("------------")
// console.log(x)
// console.log(y)
// console.log(typeof(x))

let v = []
let aux = null

while(aux!=''){
    aux = getline()
    if(aux != '')
        v.push(Number(aux))
}
console.log(v)
