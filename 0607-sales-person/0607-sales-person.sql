# Write your MySQL query statement below

#first join the Company table and Order table to find orders related to RED and then with not in salesperson table
with priyam as(
    select sales_id
    from Orders as o
    left join company as c
    on c.com_id =o.com_id 
    where c.name like 'RED'
)

select name
from salesperson
where sales_id not in(select
                        distinct sales_id 
                        from priyam)