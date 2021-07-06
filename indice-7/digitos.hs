import Data.List
digitos x = reverse $ unfoldr y x
    where
    y 0 = Nothing 
    y value = Just (value `mod` 10, value `div` 10)
