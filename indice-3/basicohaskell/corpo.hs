corpo a = reverse(tail(reverse(a)))

main = do
    a <- readLn :: IO [Int]
    print $ corpo a

