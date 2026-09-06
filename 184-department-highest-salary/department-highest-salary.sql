# Write your MySQL query statement below
select 
d.name as Department,
e.name as Employee,
e.salary as Salary

from employee e,department d
where e.departmentId = d.id
and e.salary = (
    select max(e2.salary)
    from employee e2
    where e.departmentId = e2.departmentId
);