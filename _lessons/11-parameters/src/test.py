def div(dividend, divisor):
  r = dividend / divisor
  print( "Result = ", r)

div(5,1)
div(1,5)
div(dividend=1,divisor=5)
div(divisor=1,dividend=5)

def f(a, L=[]):
  L.append(a)
  return L

print("---------")
print(f(5))
print(f(6))
print(f(7))
print(f(1,[0]))
print(f(8))

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

def foo(a, b):
  return a and b

print("---------")
# expressions are evaluated lazily
print(False and 1/0 == 0)
# passed parameters are evaluated eagerly
# print(foo(False, 1/0 == 0))

# print("---------")

# def test (x, i):
#   x[0] = 6;
#   i = 1;
#   x[i] += 3;

# def test1(x):
#   global e
#   e=1
#   x += 3;

# a=[1,2]
# e=0
# test(a, e)
# print(a[0], " ", a[1], " ", e)


# a=[1,2]
# e=0
# test1(a[e])
# print(a[0], " ", a[1], " ", e)
