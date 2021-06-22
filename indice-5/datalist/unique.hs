unique [a] = [a]
unique [] = []
unique (x:xs) = x: unique (filter(\z -> z /= x)(xs))

main = do
    a <- readLn :: IO [Int]
    print $ unique a

