import collections
texto=input()
counter = collections.Counter(texto.split())
for palabra, cont in counter.most_common():
    print(f"'{palabra}' aparece {cont} {'veces' if cont > 1 else 'vez'}.")
