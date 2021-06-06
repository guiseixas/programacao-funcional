min2 x y
    | x >= y = y
    | y >= x = x

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    print $ min2 a b