def f1(a, L=0):
  if L == 0:
    L = []
  L.append(a)
  return L
print("---------")
print(f1(5))
print(f1(6))
print(f1(7))
print(f1(1,[0]))
print(f1(8))
