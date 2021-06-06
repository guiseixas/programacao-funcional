somaImpares b = sum (filter(\x -> x `mod` 2 /= 0) (b))

main = do
    a <- readLn :: IO [Int]
    print $ somaImpares a

