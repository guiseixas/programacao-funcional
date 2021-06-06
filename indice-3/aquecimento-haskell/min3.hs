min3 a b c
    | (a >= b) && (b >= c) = c
    | (b >= a) && (a >= c) = c
    | (a >= c) && (c >= b) = b
    | (c >= a) && (a >= b) = b
    | (b >= c) && (c >= a) = a
    | (c >= b) && (b >= a) = a

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    print $ min3 a b c