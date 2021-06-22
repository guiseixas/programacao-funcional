upperChar ' ' = ' ' --Caso base.
upperChar x
    | num x == [] = head [g | (p,g) <- tup, p == x || g == x]
    | otherwise = x
    where
      numeros = ['0'..'9']
      tup = zip ['a'..'z']['A'..'Z']
      num n = [b | b <- numeros, n == b]
      
upper a = map upperChar a

main = do
    a <- getLine
    print $ upper a