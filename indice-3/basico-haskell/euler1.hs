euler1 a = sum(filter(\x -> (x `mod` 3 == 0 || x `mod` 5 == 0))[1..a-1])
main = do
    a <- readLn :: IO Int
    print $ euler1 a

