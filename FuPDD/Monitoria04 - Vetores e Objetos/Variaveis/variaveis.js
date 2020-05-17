var nome = prompt("Digite seu nome:")
var idade = prompt("Digite sua idade")
idade = Number(idade)
var txt = `Olá ${nome}! Tudo bem? </br> O ano que vc nasceu foi ${2020-idade}`


document.write(txt)
document.write(`<br> Seu nome tem ${nome.length} letras!`)

data = prompt("Digite sua data de aniversario:")
data = data.split("/")

document.write(`<br>Você Nasceu no dia ${data[0]} no mês ${data[1]} e no ano ${data[2]}`)

