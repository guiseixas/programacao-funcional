indices a b = [second | (first, second) <- filter(\z -> fst z == a) (zip b [0..length b - 1])]

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ indices a b
