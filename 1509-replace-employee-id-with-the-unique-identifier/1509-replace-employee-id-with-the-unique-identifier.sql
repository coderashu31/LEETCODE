# Write your MySQL query statement below
SELECT eu.unique_id,e.name
from employees e
LEFT JOIN employeeUNI eu on 
e.id = eu.id