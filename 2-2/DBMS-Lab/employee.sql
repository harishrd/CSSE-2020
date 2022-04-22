create table Employee (
EID	int	PRIMARY KEY,
EName	varchar(40)	NOT NULL,
DID	int	NOT NULL,
Salary	money	NOT NULL,
Gender	char(1)	NOT NULL,
City	varchar(30)	NULL,	
Mobile varchar(10)	NULL,
FOREIGN KEY	DID	references Department(DID) );