concatmap fn xs = foldl (++) [] (map fn xs)

main = do
    print $ concatmap (\x -> [x,x]) [1,2,3,4]
    print $ concatmap (enumFromTo 1) [1,3,5]
    print $ concatmap (\x -> [(x,x+2,x/2)]) [1,3,5]
