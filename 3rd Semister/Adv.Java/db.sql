create database student;
use student;
create table students (
	id INT(3) NOT NULL,
    firstName VARCHAR(20) DEFAULT NULL,
    lastName VARCHAR(20) DEFAULT NULL,
    username VARCHAR(20) DEFAULT NULL,
    password VARCHAR(20) DEFAULT NULL,
    address VARCHAR(20) DEFAULT NULL,
    contact VARCHAR(20) DEFAULT NULL,
    PRIMARY KEY(id)
);