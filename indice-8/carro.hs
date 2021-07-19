import Debug.Trace ( trace )
import Data.Function ( (&) )

data Car = Car  { pass :: Int
                , maxPass :: Int
                , gas :: Int
                , maxGas :: Int
                , km :: Int
                } deriving (Eq, Show, Read)

data Op = Op { name :: String
             , result :: Bool
             } deriving (Eq, Show, Read)

data Info = Info { car :: Car
                 , op  :: Op
                 } deriving (Eq, Show, Read)

toString (Info (Car pass maxPass gas maxGas km) (Op name result)) =
                "Car pass: " ++ show pass ++ "/" ++ show maxPass
                 ++ " gas: " ++ show gas  ++ "/" ++ show maxGas
                 ++  " km: " ++ show km
                 ++ " Operation: " ++ name ++ " Result: " ++ show result

resume :: Info -> Info
resume info = trace (toString info) info

createCar :: Int -> Int -> Info
createCar maxPass maxGas = Info (Car 0 maxPass 0 maxGas 0) (Op "create" True)

fuel :: Int -> Info -> Info
fuel gasoline (Info (Car pass maxPass gas maxGas km) _) = (Info(Car pass maxPass gasQtd maxGas km) (Op "fuel" condicao))
    where
     condicao = gas < maxGas
     gasolina = if condicao then gas + gasoline else gas
     gasQtd = if gasolina > maxGas then maxGas else gasolina
    
embark :: Info -> Info 
embark (Info(Car pass maxPass gas maxGas km) _) = (Info(Car passageiro maxPass gas maxGas km) (Op "embark" condicao))
    where
     condicao = pass < maxPass
     passageiro = if condicao then pass + 1 else pass

disembark :: Info -> Info
disembark (Info(Car pass maxPass gas maxGas km) _) = (Info(Car passageiro maxPass gas maxGas km) (Op "disembark" condicao))
    where
     condicao = pass > 0
     passageiro = if condicao then pass - 1 else pass

drive :: Int -> Info -> Info
drive kmR (Info(Car pass maxPass gas maxGas km) _) = Info(Car pass maxPass nGas maxGas nKm) (Op "drive" condicao)
    where
     cond = (pass >= 1 && gas > 0)
     condicao = cond && gas > kmR
     dif = gas - kmR
     nKm = if (condicao) then (km + kmR) else (km + kmR + dif)
     nGas = if (condicao) then dif else 0
    
main = do 
    let res = createCar 2 50 
            & resume & embark
            & resume & disembark
            & resume & disembark
            & resume & drive 10
            & resume & embark
            & resume & embark
            & resume & embark
            & resume & drive 10
            & resume & fuel 30
            & resume & fuel 30
            & resume & fuel 30
            & resume & drive 30
            & resume & drive 30
            & resume
    print res 

--Teste funcionou =)
{-
Car pass: 0/2 gas: 0/50 km: 0 Operation: create Result: True
Car pass: 1/2 gas: 0/50 km: 0 Operation: embark Result: True
Car pass: 0/2 gas: 0/50 km: 0 Operation: disembark Result: True
Car pass: 0/2 gas: 0/50 km: 0 Operation: disembark Result: False
Car pass: 0/2 gas: 0/50 km: 0 Operation: drive Result: False
Car pass: 1/2 gas: 0/50 km: 0 Operation: embark Result: True
Car pass: 2/2 gas: 0/50 km: 0 Operation: embark Result: True
Car pass: 2/2 gas: 0/50 km: 0 Operation: embark Result: False
Car pass: 2/2 gas: 0/50 km: 0 Operation: drive Result: False
Car pass: 2/2 gas: 30/50 km: 0 Operation: fuel Result: True
Car pass: 2/2 gas: 50/50 km: 0 Operation: fuel Result: True
Car pass: 2/2 gas: 50/50 km: 0 Operation: fuel Result: False
Car pass: 2/2 gas: 20/50 km: 30 Operation: drive Result: True
Car pass: 2/2 gas: 0/50 km: 50 Operation: drive Result: False
Info {car = Car {pass = 2, maxPass = 2, gas = 0, maxGas = 50, km = 50}, op = Op {name = "drive", result = False}}
-}
