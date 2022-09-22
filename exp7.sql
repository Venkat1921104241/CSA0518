mysql> select*from list where m1=(select max(m1) from list);
+------------+------+------+-------+-------+
| coursename | name | m1   | semno | regno |
+------------+------+------+-------+-------+
| chem       | sai  |   95 |     3 |     1 |
| dbms       | sai  |   95 |     6 |     1 |
+------------+------+------+-------+-------+
mysql> select*from list where semno>2;
+------------+------+------+-------+
| coursename | name | m1   | semno | 
+------------+------+------+-------+
| bio        | sai  |   92 |     5 |     
| chem       | sai  |   95 |     3 |     
| dbms       | sai  |   95 |     6 |     
+------------+------+------+-------+
mysql> select FacNo,FacName,Doj,gender from faculty order by Doj desc limit 1;
+-------+---------+------+--------+
| FacNo | FacName | Doj  | gender |
+-------+---------+------+--------+
|   104 | Ram     | 2018 | M      |
+-------+---------+------+--------+
mysql>  select course,score,max(score)  from sam;
+--------+-------+------------+
| course | score | max(score) |
+--------+-------+------------+
| python |    78 |         85 |
+--------+-------+------------+