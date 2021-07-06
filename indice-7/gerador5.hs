import Data.List
gerador5 x = unfoldr (\y -> if y == 0 then Nothing else Just(y, y `div` 2)) x