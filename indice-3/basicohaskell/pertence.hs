pertence a b
    | a `elem` b = True
    | otherwise = False

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ pertence a b

