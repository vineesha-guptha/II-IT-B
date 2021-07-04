DROP DATABASE IF EXISTS 19WH1A1285;
CREATE SCHEMA 19WH1A1285;
USE 19WH1A1285;
CREATE TABLE passenger(pid INT, name VARCHAR(50) ,age INT,gender CHAR,address VARCHAR(20));
INSERT INTO passenger VALUES(5682, 'Rah', 43, 'M', 'Hyderabad');
INSERT INTO passenger VALUES(5789, 'Sami', 28, 'M', 'Hyderabad');
INSERT INTO passenger VALUES(5674, 'Alice', 21, 'F', 'Tirupathi');
INSERT INTO passenger VALUES(5098, 'Ravi', 36, 'M', 'Vijayawada');
SELECT * FROM passenger;

CREATE TABLE bus(bus_no VARCHAR(20), route VARCHAR(20), bcolor VARCHAR(20));
INSERT INTO bus VALUES('TS123', 'Hyderabad', 'blue');
INSERT INTO bus VALUES('TS124', 'Hyderabad', 'red');
INSERT INTO bus VALUES('TS125', 'Tirupathi', 'red');
INSERT INTO bus VALUES('TS126', 'Vijayawada', 'blue');
SELECT * FROM bus;

CREATE TABLE reservation(tno INT, pid INT, journeydate VARCHAR(20), seat_no INT, price INT);
INSERT INTO reservation VALUES(1256, 5682, '20-07-2021', 12, 456);
INSERT INTO reservation VALUES(1278, 5789, '16-07-2021', 3, 252);
INSERT INTO reservation VALUES(1293, 5674,'14-07-2021', 4, 478);
INSERT INTO reservation VALUES(1248, 5098, '21-07-2021', 7, 348);
INSERT INTO reservation VALUES(1240, 5578, '27-07-2021', 8, 462);
DELETE FROM reservation  WHERE tno = 1240;
SELECT * FROM reservation;
UPDATE reservation  r SET r.tno = r.tno+1 WHERE r.tno = 1256;
SELECT * FROM reservation;

SELECT DISTINCT p.pid FROM passenger p;
SELECT p.name FROM passenger p WHERE p.gender = 'M';
SELECT r.tno, p.name FROM reservation r , passenger p WHERE p.pid = r.pid;
SELECT r.tno FROM reservation r, passenger p WHERE p.pname LIKE 'R%h' AND p.pid = r.pid;
SELECT p.name FROM passenger p WHERE  p.age >= 30 AND  p.age <= 45;
SELECT p.name FROM passenger p WHERE p.name LIKE 'A%';
 SELECT p.name FROM passenger p ORDER BY p.name ASC;

