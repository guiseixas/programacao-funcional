unico a xs  
    | soma == a = True
    | otherwise = False
    where    
        soma = sum(filter(\x -> x == a)(xs))

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ unico a b

