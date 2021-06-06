paridade a 
    | ((length(filter(\x -> x == True) (a))) `mod` 2 /= 0) = True
    | otherwise = False
    
main = do
    a <- readLn :: IO [Bool]
    print $ paridade a
