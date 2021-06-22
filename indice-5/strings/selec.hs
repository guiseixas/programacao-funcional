selec " " _ = " " --Se a string for vazia.
selec a xs = [a !! x | x <- xs]

main = do
    a <- getLine
    b <- readLn :: IO [Int]
    print $ selec a b