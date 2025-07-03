create database litshelf;
show databases;
use litshelf;
create table books(book_id int auto_increment primary key not null,title varchar(100) not null,genre varchar(100) not null);
describe books;
insert into books (title,genre) values('The Great Gatsby','Fiction'),('Python Programming','Tech'),('Pride and Prejudice','Fiction'),('Data Science for Beginners','Tech'),('The Hobbit','Fantasy'),('1984','Fiction');
select * from books;
alter table books add price varchar(10) not null;
select * from books;
update books set price='15.99' where book_id=1;
update books set price='45.50' where book_id=2;
update books set price='12.99' where book_id=3;
update books set price='39.99' where book_id=4;
update books set price='18.50' where book_id=5;
update books set price='14.99' where book_id=6;
select * from books;
insert into books (title,genre,price) values ('The Catcher in the Rye','Fiction','13.99');
select * from books;
update books set price='49.99' where book_id=2;
select * from books;
select * from books where genre='Fiction';
select distinct title from books;
select * from books where price='10.00' and '20.00';
select * from books where genre='Fiction' or price='13.99';
select * from books order by title asc;
select * from books order by title desc;
select max(price) from books;
select min(price) from books;
select count(*) from books;
select sum(price) from books;
select avg(price) from books;
select genre,count(*) from books group by genre having count(*)>1;








