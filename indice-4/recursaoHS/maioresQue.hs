maioresQue a xs = filter(\x -> x > a)(xs)

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ maioresQue a b

