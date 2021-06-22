produtoEscalar xs ys = sum ([x * y | (x, y) <- zip xs ys])

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ produtoEscalar a b

