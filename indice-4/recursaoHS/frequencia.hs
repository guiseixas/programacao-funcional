frequencia y [] = 0
frequencia y (x:xs) = c + frequencia y xs
    where c = if x == y then 1 else 0

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ frequencia a b

