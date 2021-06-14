concatena [] xs = xs
concatena ys [] = ys 
concatena (x:xs) ys = x: concatena xs ys 

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ concatena a b
