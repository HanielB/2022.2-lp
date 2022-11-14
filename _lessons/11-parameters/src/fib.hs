-- infinite list
fib m n = m : (fib n (m+n))

getIt [] _ = 0
getIt (x:xs) 1 = x
getIt (x:xs) n = getIt xs (n-1)

-- since n is a number and getIt trivially terminates, fib only needs
-- to be computed up to the extent it is needed by getIt
getN n = getIt (fib 0 1) n

getIt (fib 0 1) 4
getIt (0 : fib 1 1) 4

getIt (fib 1 1) 3
getIt (1 : fib 1 2) 3

getIt (fib 1 2) 2
getIt (1 : fib 2 3) 2

getIt (fib 2 3) 1
getIt (2 : fib 3 5) 1 = 2
