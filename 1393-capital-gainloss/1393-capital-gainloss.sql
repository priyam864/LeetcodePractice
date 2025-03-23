# Write your MySQL query statement below
select stock_name,

sum(if(operation ='sell',price,0))-sum(if(operation ='buy',price,0))   as capital_gain_loss 

from Stocks 
group by stock_name    