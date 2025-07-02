create table bank (
 branch_id int primary key,
 branch_name varchar(100),
 branch_city varchar(100)
);

create table account (
 account_id int primary key,
 account_no int unique,
 name varchar(100),
 city varchar(100),
 contact varchar(15),
 created_date date,
 status varchar(20),
 type varchar(50),
 balance decimal(10,2)
);

create table loan (
 loan_id int primary key,
 branch_id int,
 account_id int,
 amount decimal(10,2),
 loan_type varchar(50),
 foreign key (branch_id) references bank(branch_id),
 foreign key (account_id) references account(account_id)
);

insert into bank values
(1, 'sbi kalol', 'kalol'),
(2, 'hdfc ahmedabad', 'ahmedabad'),
(3, 'icici vadodara', 'vadodara'),
(4, 'bob rajkot', 'rajkot');

insert into account values
(101, 101, 'ravi patel', 'ahmedabad', '9876543210', '2024-03-20', 'active', 'savings', 15000.00),
(102, 102, 'sneha shah', 'ahmedabad', '9823456789', '2024-03-21', 'active', 'current', 8000.00),
(103, 103, 'mehul joshi', 'rajkot', '9012345678', '2024-03-12', 'active', 'savings', 12000.00),
(104, 104, 'disha mehta', 'kalol', '9988776655', '2024-03-16', 'terminated', 'current', 5000.00),
(105, 105, 'nirav desai', 'vadodara', '9123456789', '2024-03-17', 'active', 'savings', 9500.00);

insert into loan values
(201, 2, 101, 50000.00, 'home'),
(202, 4, 103, 30000.00, 'car'),
(203, 1, 104, 45000.00, 'education');

start transaction;

update account set balance = balance - 100 where account_no = 101;
update account set balance = balance + 100 where account_no = 102;

commit;

select a1.account_id, a1.name, a1.city
from account a1
join account a2 on a1.city = a2.city and a1.account_id <> a2.account_id;

select account_no, name
from account
where day(created_date) > 15;

select branch_city as city, count(*) as count_branch
from bank
group by branch_city;

select a.account_id, a.name, l.branch_id, l.amount
from loan l
join account a on l.account_id = a.account_id;
