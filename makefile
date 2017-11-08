mysqlc:main.o mysqlc.o
	g++ -g -std=gnu++0x -L/usr/local/lib -L/usr/local/mysql/lib -L/usr/lib64/mysql -L/usr/lib -lmysqlcppconn -o mysqlc main.o mysqlc.o
main.o:main.cpp
	g++ -g -std=gnu++0x -c -L/usr/local/lib -L/usr/local/mysql/lib -L/usr/lib64/mysql -L/usr/lib -lmysqlcppconn -o main.o main.cpp
mysqlc.o:mysqlc.cpp mysqlc.hpp
	g++ -g -std=gnu++0x -c -L/usr/local/lib -L/usr/local/mysql/lib -L/usr/lib64/mysql -L/usr/lib -lmysqlcppconn -o mysqlc.o mysqlc.cpp
clean:
	rm -rf *.o mysqlc
