divide a b = splitAt b a

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO Int
    print $ divide a b

