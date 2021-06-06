fatorial b 
    | b <= 1 = 1
    | otherwise = b * fatorial(b-1)

main = do
    a <- readLn :: IO Int
    print $ fatorial a

