sequencia 0 b = []
sequencia n m = m:(sequencia (n-1) (m+1))

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    print $ sequencia a b

