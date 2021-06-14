menores a b  = if a > length b then b else [x | x <- b , x <= a]

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ menores a b