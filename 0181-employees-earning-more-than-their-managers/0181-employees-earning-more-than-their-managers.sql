# Write your MySQL query statement below
select e1.name as Employee
from Employee as e1
join Employee e2
on e1.Managerid=e2.id
where e1.salary >e2.salary