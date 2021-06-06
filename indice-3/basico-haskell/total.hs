total a = sum(map(\x -> 1)(a))

main = do
    a <- readLn :: IO [Int]
    print $ total a

