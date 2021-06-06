maior [x] = x   
maior (x:a) 
    | (maior a) > x = maior a
    | otherwise = x

main = do
    a <- readLn :: IO [Int]
    print $ maior a
