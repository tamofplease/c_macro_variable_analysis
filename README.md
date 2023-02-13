# c_maco_variable_analysis

Analysis project of c macro variable.

## run mysql server

docker run --name mysql-server -e MYSQL_ROOT_PASSWORD="password" -d -p 53306:3306 mysql

## login to mysql database with mysql client

mysql -uroot -ppassword -h 127.0.0.1 -P 53306

## create project table

DATABASE c_macro_variable_analysis;
