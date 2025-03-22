# Write your MySQL query statement below

SELECT p.product_id, p.product_name  
FROM Product p  
WHERE p.product_id IN (   
    SELECT product_id FROM Sales  
    WHERE sale_date BETWEEN '2019-01-01' AND '2019-03-31'  
)  
AND p.product_id NOT IN (   
    SELECT product_id FROM Sales  
    WHERE sale_date < '2019-01-01' OR sale_date > '2019-03-31'  
);
# two queries which was sold in the 2019 annd outside 2019
