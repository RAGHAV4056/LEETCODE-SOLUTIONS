# Write your MySQL query statement below
SELECT email from person group by email having count(email)>1;