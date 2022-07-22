import json

#Abre o arquivo JSON
with open("dados.json","r") as f:
    data = json.load(f)

#Pega o maior e o menor valor da lista
maxPricedItem = max(data, key=lambda x:x['valor'])

#cria uma nova lista sem os valores igual a zero
res = [i for i in data if not (i['valor'] == 0)]

#pega o menor valor da lista criada
minPricedItem = min(res, key=lambda x:x['valor'])

print("O menor preço do mes foi: " + str(minPricedItem))    #printa menor valor.
print("O maior preço do mes foi: " + str(maxPricedItem))    #printa maior valor

#calculo da media
media = sum([item['valor']for item in data])/len(res)

#adpta o valor da media para 2 casas decimais
format_float = "{:.2f}".format(media)

print("Media com todos os valores sem zero: " + str(format_float))