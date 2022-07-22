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


#cria uma nova lista com os valores maiores que a media
maiorQueMedia = [i for i in data if not (i['valor'] <= media)]

#adpta a media para duas casas decimais
format_float = "{:.2f}".format(media)

print("Media de faturamento(excluindo fim de semanas e feriados): " + str(format_float))
print("Estes foram os dias em que o faturamento ultrapassou a media --> "+ str(maiorQueMedia))