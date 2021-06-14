rotDir 0 b = b
rotDir a b = rotDir (a-1) ([head (reverse b)]++(init b))

main = do
    a <- readLn :: IO Int
    b <- getLine
    print $ rotDir a b


