final a b = 
    drop a b -- Pega os ultimos a partir do numero.

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ final a b
