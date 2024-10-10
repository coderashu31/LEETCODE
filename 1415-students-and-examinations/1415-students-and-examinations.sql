# Write your MySQL query statement below
SELECT  St.student_id , St.student_name , Sub.subject_name , count(E.subject_name) AS attended_exams 
FROM Students St 
CROSS JOIN Subjects Sub
LEFT OUTER JOIN examinations E
ON Sub.subject_name = E. subject_name AND St.student_id = E.student_id
GROUP BY St.student_id , St.student_name , Sub.subject_name 
ORDER BY St.student_id, sub.subject_name