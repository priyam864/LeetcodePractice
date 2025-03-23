# Write your MySQL query statement below

select d.name as Department,
e.name as Employee ,e.salary
from employee as e
join department as d
on e.departmentId=d.id
WHERE e.salary = (
    SELECT MAX(salary)
    FROM Employee
    WHERE departmentId = e.departmentId
);