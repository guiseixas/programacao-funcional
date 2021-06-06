uniao a b = a ++ filter(\x -> x `notElem` a)(b)

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ uniao a b

