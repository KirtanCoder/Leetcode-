/* Write your PL/SQL query statement below */

select e.unique_id, t.name from Employees t
left join EmployeeUNI e
on t.id = e.id;