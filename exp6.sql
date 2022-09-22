mysql> select*from student where courseno=101;
+-------+-----------+--------+------+----------+-------+----------+
| Regno | Name      | gender | Dob  | MobileNo | City  | courseno |
+-------+-----------+--------+------+----------+-------+----------+
|  1101 | kiran     | M      |   12 |   123645 | vizag |      101 |
|  1501 | kumarn    | M      |   12 |  1235645 | vizag |      101 |
| 11261 | Saianvesh | M      |   18 |   149345 | vizag |      101 |
+-------+-----------+--------+------+----------+-------+----------+
mysql> select cname,noofcourses from cor;
+---------+-------------+
| cname   | noofcourses |
+---------+-------------+
| vasu    |          24 |
| sinchan |          34 |
| pokemon |           6 |
| jerry   |          78 |
+---------+-------------+
mysql> select regno,name,gender,mobileno from student  order by regno asc;
+-------+-----------+--------+----------+
| regno | name      | gender | mobileno |
+-------+-----------+--------+----------+
|     0 | NULL      | NULL   |     NULL |
|   101 | geethika  | F      |   185945 |
|   102 | Anvesh    | M      |        9 |
|   121 | srujana   | F      |  1956945 |
|   123 | raju      | M      |    12345 |
|   221 | vamsi     | M      |    19565 |
|  1101 | kiran     | M      |   123645 |
|  1501 | kumarn    | M      |  1235645 |
| 11261 | Saianvesh | M      |   149345 |
+-------+-----------+--------+----------+
mysql> select FacNo,FacName,Doj,gender from faculty order by Doj asc;
+-------+---------+------+--------+
| FacNo | FacName | Doj  | gender |
+-------+---------+------+--------+
|   102 | Ravi    |    9 | M      |
|   103 | Raju    | 2016 | M      |
|   104 | Ram     | 2018 | M      |
+-------+---------+------+--------+