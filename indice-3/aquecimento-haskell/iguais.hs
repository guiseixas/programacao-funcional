iguais a b c 
    | a == b && b == c = 3
    | a == b && b /= c = 2
    | a == c && c /= b = 2
    | b == c && c /= a = 2
    | b == a && a /= c = 2
    | c == a && a /= b = 2
    | c == b && b /= a = 2
    | a /= b && b /= c = 0

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    print $ iguais a b c

