# Write your MySQL query statement below

# we will divide this in two subquestion and then take the union of both

select employee_id 
from Employees
where employee_id not in(select employee_id  from Salaries)

union

select employee_id 
from Salaries
where employee_id  not in( select employee_id  from employees)

order by employee_id
