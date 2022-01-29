Create database Logg
go
use Logg
go 
create table Logins 
(
ID int PRIMARY KEY IDENTITY,
FirstName varchar(50),
LastName varchar(50),
Email varchar(50),
UserLogin varchar(70),
UserPassword varchar(50),
StatusName varchar(20)
)
go 

Select *from Logins

insert into Logins(FirstName ,LastName,Email, UserLogin,UserPassword, StatusName)
Values('Дулоглу','Алексей','alex.duloglu@mail.ru','Alex14','123789', 'admin');
insert into Logins(FirstName ,LastName,Email, UserLogin,UserPassword, StatusName)
Values('Яковлев','Никита','nic.iacovlev@mail.ru','moldham','987654', 'user');

drop table Logins