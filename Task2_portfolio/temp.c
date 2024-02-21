use avishkar;

CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    GPA DECIMAL(3, 2)
);

INSERT INTO Students (StudentID, FirstName, LastName, Age, GPA)
VALUES
    (1, 'Vijay', 'Kumar', 22, 3.5),
    (2, 'Akshay', 'Bhola', 20, 3.8),
    (3, 'Tiger', 'Shroff', 21, 3.2),
    (4, 'Amir', 'Khan', 23, 3.9),
    (5, 'Salman', 'Khan', 24, 3.7);


SELECT * FROM Students;
SELECT * FROM Students WHERE Age > 21;
SELECT FirstName, LastName FROM Students;
SELECT * FROM Students WHERE GPA = 3.5;
SELECT * FROM Students ORDER BY GPA DESC;
SELECT * FROM Students WHERE FirstName LIKE 'J%';
SELECT COUNT(*) FROM Students WHERE Age = 22;
SELECT MAX(GPA) FROM Students;
SELECT MIN(GPA) FROM Students;
SELECT MIN(GPA) FROM Students;
SELECT * FROM Students WHERE GPA BETWEEN 3.0 AND 3.5;
SELECT AVG(Age) FROM Students;
SELECT * FROM Students WHERE LastName IN ('Vijay', 'Ravi');
SELECT * FROM Students WHERE GPA = (SELECT MAX(GPA) FROM Students);
SELECT * FROM Students WHERE Age <= 20;
SELECT COUNT(*) FROM Students WHERE GPA > 3.0;
SELECT COUNT(*) FROM Students WHERE GPA > 3.0;
SELECT AVG(GPA) FROM Students WHERE Age < 23;
SELECT * FROM Students WHERE FirstName <> 'Vijay';
SELECT * FROM Students WHERE GPA = (SELECT MIN(GPA) FROM Students);
SELECT * FROM Students WHERE GPA > (SELECT AVG(GPA) FROM Students);
SELECT * FROM Students WHERE LastName LIKE '%o%';
SELECT * FROM Students WHERE Age = 21 AND GPA >= 3.5;
SELECT COUNT(DISTINCT LastName) FROM Students;
SELECT SUM(Age) FROM Students;
SELECT MAX(GPA) FROM Students;
SELECT MIN(GPA) FROM Students;
SELECT * FROM Students WHERE LastName IN ('Vijay', 'Ravi');
SELECT * FROM Students WHERE GPA = (SELECT MIN(GPA) FROM Students);
SELECT * FROM Students WHERE GPA > (SELECT AVG(GPA) FROM Students);
SELECT * FROM Students WHERE LastName LIKE '%o%';
SELECT * FROM Students WHERE Age = 21 AND GPA >= 3.5;
SELECT COUNT(DISTINCT LastName) FROM Students;
SELECT * FROM Students WHERE Age IN (22, 23);
SELECT * FROM Students WHERE LastName LIKE '%o%';
SELECT * FROM Students WHERE Age > 22 AND GPA BETWEEN 3.0 AND 3.5;
SELECT COUNT(*) AS TotalStudents FROM Students;
SELECT * FROM Students WHERE GPA = (SELECT MAX(GPA) FROM Students WHERE GPA < (SELECT MAX(GPA) FROM Students));
SELECT LastName, COUNT(*) AS Count FROM Students GROUP BY LastName HAVING COUNT(*) > 1;
SELECT MAX(Age) - MIN(Age) AS AgeDifference FROM Students;














SET SQL_SAFE_UPDATES = 0;

select * from Students;
Update Students set age=50 where FirstName="Akshay";














