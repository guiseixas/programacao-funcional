isPalind [] = True 
isPalind a
  | a == reverse a = True
  | otherwise = False

main = do
    a <- getLine
    print $ isPalind a
