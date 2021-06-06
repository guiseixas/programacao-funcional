intersec a b = filter(\x -> (x `elem` a && x `elem` b))(a)

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ intersec a b

