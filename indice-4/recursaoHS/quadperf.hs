quadperf x = quadradoperfeito 1 x
quadradoperfeito i x
    | x == i * i = True
    | x < i * i = False
    | otherwise = quadradoperfeito(i + 1) x

main = do
    a <- readLn :: IO Int
    print $ quadperf a

