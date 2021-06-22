lower a = if a >= 'A' && a <= 'Z' then toEnum (fromEnum a + 32) else a

upper a = head [snd y | y <- m a, (fst y) == a]
  where m x = zip ['a'..'z'] ['A'..'Z'] ++ [(x, x)]

process (x:[]) = []
process (x:xs) = (if x == ' ' then upper aux else lower aux) : process (xs)
  where aux = head xs

--Basicamente usar as funcoes Upper e Lower e fazer uma estrutura de if e else
titulo xs = process (' ':xs)

main = do
  a <- getLine
  print $ titulo a