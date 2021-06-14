line a = [soma (a - 1) + 1.. soma a] --Primeiro elemento (1..a-1) + 1
soma x = sum [1..x]

triangle a = [line (x) | x <- [1..a]] --Para cada linha começa em 1 e termina na quantidade passada pelo parametro.

main = do
    a <- readLn :: IO Int
    print $ triangle a
