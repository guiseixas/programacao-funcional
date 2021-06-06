elemento a b 
    | a < 0 = b !! negativos
    | otherwise = b !! normal
    where
        negativos = a + length(b)
        normal = a

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ elemento a b

