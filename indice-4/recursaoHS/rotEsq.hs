rotEsq 0 b = b
rotEsq a b = rotEsq (a-1) ((tail b)++[head b])
-- Diminui uma vez e chama recursao

main = do
    a <- readLn :: IO Int
    b <- getLine
    print $ rotEsq a b