line a = [soma (a - 1) + 1.. soma a] --Primeiro elemento (1..a-1) + 1
soma x = sum [1..x]

main = do
    a <- readLn :: IO Int
    print $ line a

