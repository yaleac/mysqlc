mysqlc:main.o mysqlc.o
	g++ -g -o mysqlc main.o mysqlc.o
main.o:main.cpp
	g++ -g -c -o main.o main.cpp
mysqlc.o:mysqlc.cpp mysqlc.hpp
	g++ -g -c -o mysqlc.o mysqlc.cpp
clean:
	rm -rf *.o mysqlc
