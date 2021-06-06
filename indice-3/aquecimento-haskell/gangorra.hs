gangorra a b c d
    | (a * b) == (c * d) = 0
    | (a * b) > (c * d) = -1
    | otherwise = 1

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    d <- readLn :: IO Int
    print $ gangorra a b c d