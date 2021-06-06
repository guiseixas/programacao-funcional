max3 a b c
    | (a >= b) && (b >= c) = a
    | (b >= a) && (a >= c) = b
    | (a >= c) && (c >= b) = a
    | (c >= a) && (a >= b) = c
    | (b >= c) && (c >= a) = b
    | (c >= b) && (b >= a) = c

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    print $ max3 a b c