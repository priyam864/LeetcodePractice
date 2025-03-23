# Write your MySQL query statement below
select u.name , 
sum(t.amount)  as balance
from users as u
left join Transactions as t
on u.account=t.account
group by u.account,u.name
having balance >10000

