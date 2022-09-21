Database changed
mysql> desc student;
+----------+----------+------+-----+---------+-------+
| Field    | Type     | Null | Key | Default | Extra |
+----------+----------+------+-----+---------+-------+
| Regno    | int(10)  | NO   | PRI | 0       |       |
| Name     | char(20) | YES  |     | NULL    |       |
| gender   | char(1)  | YES  |     | NULL    |       |
| Dob      | int(10)  | YES  |     | NULL    |       |
| mobileno | int(10)  | YES  |     | NULL    |       |
| city     | char(10) | YES  |     | NULL    |       |
+----------+----------+------+-----+---------+-------+
6 rows in set (0.01 sec)

mysql> insert into student values(15469,'vasu','M',2004-05-06,956477,'vizag');
Query OK, 1 row affected (0.00 sec)

mysql> select*from student;
+-------+------+--------+------+----------+-------+
| Regno | Name | gender | Dob  | mobileno | city  |
+-------+------+--------+------+----------+-------+
| 15469 | vasu | M      | 1993 |   956477 | vizag |
+-------+------+--------+------+----------+-------+
1 row in set (0.00 sec)

mysql> insert into student values(112569,'sai','M',2004,9589477,'vizag');
Query OK, 1 row affected (0.00 sec)

mysql> select *from student;
+--------+------+--------+------+----------+-------+
| Regno  | Name | gender | Dob  | mobileno | city  |
+--------+------+--------+------+----------+-------+
|  15469 | vasu | M      | 1993 |   956477 | vizag |
| 112569 | sai  | M      | 2004 |  9589477 | vizag |
+--------+------+--------+------+----------+-------+
2 rows in set (0.00 sec)

mysql> insert into student values(1546239,'varshi','f',2005,94556477,'vizag');
Query OK, 1 row affected (0.00 sec)

mysql> select  *from student;
+---------+--------+--------+------+----------+-------+
| Regno   | Name   | gender | Dob  | mobileno | city  |
+---------+--------+--------+------+----------+-------+
|   15469 | vasu   | M      | 1993 |   956477 | vizag |
|  112569 | sai    | M      | 2004 |  9589477 | vizag |
| 1546239 | varshi | f      | 2005 | 94556477 | vizag |
+---------+--------+--------+------+----------+-------+
3 rows in set (0.00 sec)

mysql> insert into student values(154623459,'mahi,'m',2005,94556477,'vizag');
    '>
    '> dyh)(
    '> uasw(34)
    '> use student()
    '>
    '> insert select'
    -> ;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near 'm',2005,94556477,'vizag');

dyh)(
uasw(34)
use student()

insert select'' at line 1
mysql> use faculty;
Database changed
mysql> desc faculty;
+----------+----------+------+-----+---------+-------+
| Field    | Type     | Null | Key | Default | Extra |
+----------+----------+------+-----+---------+-------+
| Facno    | int(10)  | NO   | PRI | 0       |       |
| Facname  | char(15) | YES  |     | NULL    |       |
| gender   | char(1)  | YES  |     | NULL    |       |
| Dob      | int(10)  | YES  |     | NULL    |       |
| Mobileno | int(10)  | YES  |     | NULL    |       |
| Doj      | int(10)  | YES  |     | NULL    |       |
| dapt     | char(10) | YES  |     | NULL    |       |
+----------+----------+------+-----+---------+-------+
7 rows in set (0.01 sec)

mysql> insert into faculty values(1,'raja''m',2003,123456,22,'cse');
ERROR 1136 (21S01): Column count doesn't match value count at row 1
mysql> insert into faculty values(19211,'raja''m',2003,123456,2022,'cse');
ERROR 1136 (21S01): Column count doesn't match value count at row 1
mysql> insert into faculty values(101,'raja','m',2003,123456,2022,'cse');
Query OK, 1 row affected (0.03 sec)

mysql> select*from faculty;
+-------+---------+--------+------+----------+------+------+
| Facno | Facname | gender | Dob  | Mobileno | Doj  | dapt |
+-------+---------+--------+------+----------+------+------+
|   101 | raja    | m      | 2003 |   123456 | 2022 | cse  |
+-------+---------+--------+------+----------+------+------+
1 row in set (0.00 sec)

mysql> insert into faculty values(102,'raji','f',2006,1234564,2023,);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near ')' at line 1
mysql> insert into faculty values(102,'raji','f',2006,1234564,2023,'ece');
Query OK, 1 row affected (0.00 sec)

mysql> select *from faculty;
+-------+---------+--------+------+----------+------+------+
| Facno | Facname | gender | Dob  | Mobileno | Doj  | dapt |
+-------+---------+--------+------+----------+------+------+
|   101 | raja    | m      | 2003 |   123456 | 2022 | cse  |
|   102 | raji    | f      | 2006 |  1234564 | 2023 | ece  |
+-------+---------+--------+------+----------+------+------+
2 rows in set (0.00 sec)

mysql> use department;
Database changed
mysql> desc department;
+---------+----------+------+-----+---------+-------+
| Field   | Type     | Null | Key | Default | Extra |
+---------+----------+------+-----+---------+-------+
| Depno   | int(10)  | NO   | PRI | 0       |       |
| DepName | char(20) | YES  |     | NULL    |       |
| DepHead | char(20) | YES  |     | NULL    |       |
+---------+----------+------+-----+---------+-------+
3 rows in set (0.00 sec)

mysql> insert into department values(101,'cse','rab babu');
Query OK, 1 row affected (0.01 sec)

mysql> select*from department;
+-------+---------+----------+
| Depno | DepName | DepHead  |
+-------+---------+----------+
|   101 | cse     | rab babu |
+-------+---------+----------+
1 row in set (0.00 sec)

mysql> insert into department values(108,'ece','subbu');
Query OK, 1 row affected (0.00 sec)

mysql> select *from department;
+-------+---------+----------+
| Depno | DepName | DepHead  |
+-------+---------+----------+
|   101 | cse     | rab babu |
|   108 | ece     | subbu    |
+-------+---------+----------+
2 rows in set (0.00 sec)

mysql> use course;
Database changed
mysql> desc course;
+------------+----------+------+-----+---------+-------+
| Field      | Type     | Null | Key | Default | Extra |
+------------+----------+------+-----+---------+-------+
| courseno   | int(10)  | NO   | PRI | 0       |       |
| coursedesc | char(20) | YES  |     | NULL    |       |
| coursetype | char(1)  | YES  |     | NULL    |       |
| semno      | int(10)  | YES  |     | NULL    |       |
| hallno     | int(10)  | YES  |     | NULL    |       |
| facno      | int(10)  | YES  |     | NULL    |       |
+------------+----------+------+-----+---------+-------+
6 rows in set (0.00 sec)

mysql> insert into course values(101,'cse','p',2,66,16522);
Query OK, 1 row affected (0.00 sec)

mysql> select*from course;
+----------+------------+------------+-------+--------+-------+
| courseno | coursedesc | coursetype | semno | hallno | facno |
+----------+------------+------------+-------+--------+-------+
|      101 | cse        | p          |     2 |     66 | 16522 |
+----------+------------+------------+-------+--------+-------+
1 row in set (0.00 sec)

mysql>