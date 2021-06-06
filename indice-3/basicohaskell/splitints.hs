splitints a = (b, c)
  where 
    b = [b | b <- a, odd b]
    c = [c | c <- a, even c]

main = do
    a <- readLn :: IO [Int]
    print $ splitints a
