swap a b c = let 
    eB = a !! b
    eC = a !! c
    antes = take b a
    meio = take (c - b - 1) (drop (b + 1) a)
    depois = drop (c + 1) a
    in  antes ++ [eC] ++ meio ++ [eB] ++ depois

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    print $ swap a b c

