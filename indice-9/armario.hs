import qualified Data.Map as Map
import Data.Either
import Data.Map
data Estado = Alugado | Livre deriving (Show, Eq)
type Codigo = String
type Armario = (Estado, Codigo)
type Armarios = Map.Map Int (Estado, Codigo)

consulta :: Int -> Armarios -> Maybe Estado
consulta indice armarios = case Data.Map.lookup indice armarios of 
    Nothing -> Nothing
    Just (estado, codigo) -> if estado /= Livre
        then Just Alugado
        else Just Livre

pegarArmario :: Int -> Armarios -> Either String Armario
pegarArmario indice armarios = case Map.lookup indice armarios of 
    Nothing -> Left $ "Armario " ++ show indice ++ " nao existe"
    Just (estado, codigo) -> if consulta indice armarios /= Nothing
                                then Right (estado, codigo) 
                                else Left $ "Armario " ++ show indice ++ " nao existe"

pegarCodigo :: Int -> Armarios -> Either String Codigo
pegarCodigo indice armarios = case pegarArmario indice armarios of
    Left auxiliar -> Left $ auxiliar
    Right (estado, codigo) -> if estado == Alugado
                                then Left $ "Armario " ++ show indice ++ " ja esta ocupado"
                                else Right codigo

aluguel :: Int -> Armarios -> Either String Armarios
aluguel indice armarios = case pegarCodigo indice armarios of 
    Left auxiliar -> Left $ auxiliar
    Right codigo -> Right (Map.insert indice (Alugado, codigo) armarios)

devolucao :: Int -> Codigo -> Armarios -> Either String Armarios
devolucao indice codigo armarios = case pegarArmario indice armarios of
    Left auxiliar -> Left $ auxiliar
    Right (estado, codigoauxiliar) -> if codigo == codigoauxiliar
                                        then if estado /= Livre then Right (Map.insert indice (Livre, codigoauxiliar) armarios) else Left "Armario nao esta alugado"
                                        else Left "Codigo incorreto"
                                
lockers :: Armarios
lockers = Map.fromList
    [(100,(Alugado,"ZD39I"))
    ,(101,(Livre,"JAH3I"))
    ,(103,(Livre,"IQSA9"))
    ,(105,(Livre,"QOTSA"))
    ,(109,(Alugado,"893JJ"))
    ,(110,(Alugado,"99292"))
    ]

main :: IO ()
main = do
    let armarios = lockers
    print $ armarios
    print $ consulta 100 armarios
    print $ consulta 101 armarios
    print $ consulta 200 armarios
    print $ pegarCodigo 100 armarios
    print $ pegarCodigo 101 armarios
    print $ pegarCodigo 200 armarios
    print $ aluguel 100 armarios
    print $ consulta 101 armarios
    let armarios1 = fromRight armarios $ aluguel 101 armarios
    print $ consulta 101 armarios1
    print $ fromLeft "" $ devolucao 103 "IQSA9" armarios1
    print $ fromLeft "" $ devolucao 101 "ZD39I" armarios1
    let armarios2 = fromRight armarios1 $ devolucao 110 "99292" armarios1
    print $ consulta 110 armarios2
    print $ armarios2
