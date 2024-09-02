-- Create the database
CREATE DATABASE ASSIGNMENT;

-- Use the database
USE ASSIGNMENT;

-- Create the Student table
CREATE TABLE Student (
    Rollno INT PRIMARY KEY,
    Name VARCHAR(50),
    Branch VARCHAR(50)
);

-- Create the Exam table
CREATE TABLE Exam (
    Rollno INT,
    S_code VARCHAR(10),
    Marks INT,
    P_code VARCHAR(10)
);

-- Insert data into the Student table
INSERT INTO Student (Rollno, Name, Branch) VALUES
(1, 'Jay', 'Computer Science'),
(2, 'Suhani', 'Electronic and Com'),
(3, 'Kriti', 'Electronic and Com');

select * from Student;

-- Insert data into the Exam table
INSERT INTO Exam (Rollno, S_code, Marks, P_code) VALUES
(1, 'CS11', 50, 'CS'),
(1, 'CS12', 60, 'CS'),
(2, 'EC101', 66, 'EC'),
(2, 'EC102', 70, 'EC'),
(3, 'EC101', 45, 'EC'),
(3, 'EC102', 50, 'EC');

select * from Exam;
