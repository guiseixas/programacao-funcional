add x y = x + y -- Função soma dois valores.

main = do

    a <- readLn :: IO Int
    b <- readLn :: IO Int
    print $ add a b