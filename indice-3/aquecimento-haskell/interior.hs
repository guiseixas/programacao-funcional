interior a =
    reverse((tail (reverse(tail a))))

main = do
    a <- readLn :: IO [Int]
    print $ interior a

