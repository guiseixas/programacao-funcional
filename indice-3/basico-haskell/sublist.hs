sublist a b c = drop inicio' (take fim' c)
    where 
        size = length c
        inicio' = if a < 0 then a + size else a
        fim' = if b < 0 then b + size else b
main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO [Int]
    print $ sublist a b c

