a = None

def read_integer():
  try:
    # read for Python 2.x
    return int(raw_input())
  except NameError:
    # read for Python 3.x
    return int(input())


a = read_integer()
if a == 61:
  print("Brasilia")
elif a == 71:
  print("Salvador")
elif a == 11:
  print("Sao Paulo")
elif a == 21:
  print("Rio de Janeiro")
elif a == 32:
  print("Juiz de Fora")
elif a == 19:
  print("Campinas")
elif a == 27:
  print("Vitoria")
elif a == 31:
  print("Belo Horizonte")
else:
  print("DDD nao cadastrado")