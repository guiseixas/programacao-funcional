fib a
    | a == 0 = 0
    | a < 3 = 1
    | otherwise = fib(a-2) + fib(a-1)

main = do
    a <- readLn :: IO Int
    print $ fib a
