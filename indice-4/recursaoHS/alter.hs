alter 1 = [1,-1]
alter 0 = []
alter x = alter(x-1) ++ [x, -x]

main = do
    a <- readLn :: IO Int
    print $ alter a

