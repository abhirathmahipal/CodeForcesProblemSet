-- I've copied this solution
-- saw this direct formula online
-- if n is 1, already at Rabbit's house. No need to travel
-- If rabit's house is not the minimum distance
-- to go owl or eeyore and keep shuffling between the house
-- of two friends
solution (n:a:b:c:_)
            |n > 1 = min a b + (n - 2) * (min a $ min b c)
            |otherwise = 0

main = interact$show.solution.map (\x -> read x :: Integer).lines
