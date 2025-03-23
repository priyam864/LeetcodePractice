# Write your MySQL query statement below

select id, visit_date, people
from (
    select id, visit_date, people, 
           count(case when people >= 100 then 1 end) 
           over (order by id rows between 2 preceding and current row) as cnt1,
           count(case when people >= 100 then 1 end) 
           over (order by id rows between 1 preceding and 1 following) as cnt2,
           count(case when people >= 100 then 1 end) 
           over (order by id rows between current row and 2 following) as cnt3
    from stadium
) temp
where cnt1 >= 3 or cnt2 >= 3 or cnt3 >= 3
order by visit_date;
