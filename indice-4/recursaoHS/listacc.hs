listacc [] = []
listacc a = (listacc (init a)) ++ [sum(a)]
--Acumulando e removendo o ultimo da lista

main = do
    a <- readLn :: IO [Int]
    print $ listacc a

