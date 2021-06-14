reverso [] = []
reverso (x:xs) = reverso xs ++ [x]

main = do
    a <- readLn :: IO [Int]
    print $ reverso a
