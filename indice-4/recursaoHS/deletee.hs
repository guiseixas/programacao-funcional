deletee a [] = []
deletee a (x:xs) = if a==x then xs else x:(deletee a xs)

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ deletee a b

