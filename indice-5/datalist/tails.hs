tails [] = [[]]
tails (x:xs) = [x:xs] ++ tails(xs) --Pega o proprio vetor e vai tirando o primeiro elemento (xs) e concatenando. 

main = do
    a <- readLn :: IO [Int]
    print $ tails a
