# Write your MySQL query statement below
select visits.customer_id,count(*) as count_no_trans
from Visits
left join transactions
on visits.visit_id = transactions.visit_id
where transactions.transaction_id is null
group by customer_id