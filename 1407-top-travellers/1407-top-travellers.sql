# Write your MySQL query statement below

SELECT u.name, 
       COALESCE(SUM(r.distance), 0) AS travelled_distance
FROM Users u
LEFT JOIN Rides r 
ON u.id = r.user_id
GROUP BY u.id
ORDER BY travelled_distance DESC, u.name ASC;


#The COALESCE function in SQL is used to return the first non-null value from a list of expressions. It is commonly used to handle NULL values by replacing them with a default value.
