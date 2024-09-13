Insert into tabel1
(id,name,addrss,dept,salary,email,phone,DOB)
values(101,'Sanjay','Baramati Dist. Pune','Sales',45000,'sanjay@hotmail.com','9193939399','19881223');

INSERT INTO tabel1 (id, name, addrss, dept, salary, email, phone)
VALUES
    (1, 'Rohan Deshmukh', '123 Main Street', 'HR', 50000, 'rohan.deshmukh@example.com', '123-456-7890'),
    (2, 'Aditi Patil', '456 Elm Avenue', 'Finance', 60000, 'aditi.patil@example.com', '987-654-3210'),
    (3, 'Avinash Jadhav', '789 Oak Lane', 'IT', 75000, 'avinash.jadhav@example.com', '456-789-0123'),
    (4, 'Manisha Pawar', '101 Pine Road', 'Sales', 55000, 'manisha.pawar@example.com', '789-123-4567'),
    (5, 'Vikram Kulkarni', '222 Cedar Drive', 'Marketing', 65000, 'vikram.kulkarni@example.com', '234-567-8901'),
    (6, 'Neha Sharma', '333 Birch Street', 'Finance', 62000, 'neha.sharma@example.com', '345-678-9012'),
    (7, 'Amit Chavan', '444 Maple Avenue', 'IT', 72000, 'amit.chavan@example.com', '567-890-1234'),
    (8, 'Anjali More', '555 Pine Lane', 'HR', 51000, 'anjali.more@example.com', '678-901-2345');



select * from tabel1;

update tabel1 
set id=9 
where id=101
update tabel1
set DOB='1985-08-20'
where id=2;
update tabel1
set DOB='1985-08-20'
where id=3;
update tabel1
set DOB='1993-02-10'
where id=4;
update tabel1
set DOB='1980-12-05'
where id=5;
update tabel1
set DOB='1988-06-30'
where id=6;
update tabel1
set DOB='1995-04-25'
where id=7;
update tabel1
set DOB='1982-09-12'
where id=8;
update tabel1
set DOB='1991-03-18'
where id=9;


Delete from tabel1
where id=9

select * from tabel1


SELECT id, email,phone
from tabel1

Grant select on dbo.tabel1 to public

revoke select on dbo.tabel1 from public


select * from tabel1
where salary=60000
rollback;

SAVEPOINT s1;
select * from tabel1;
rollback to s1;
select id from tabel1;
commit;


alter table tabel1
add unique (id);

alter table tabel1
add check(salary >= 1000)

alter table tabel1
alter column dept set default 'sales'


truncate table tabel1




drop table tabel1


select * from tabel1



