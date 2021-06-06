countNeg a = 
  length (filter(\x -> x < 0) a)

main = do
    a <- readLn :: IO [Int]
    print $ countNeg a
  