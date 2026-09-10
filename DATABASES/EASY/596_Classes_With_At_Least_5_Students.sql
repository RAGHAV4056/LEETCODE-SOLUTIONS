# Write your MySQL query statement below
SELECT class from Courses group by class having Count(class)>=5;