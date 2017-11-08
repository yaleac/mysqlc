#include "mysqlc.hpp"


const char* c_char(char* c) {
	const char* c_c = c ;
	return c_c;
}

mysqlc::mysqlc() {
	this->driver = sql::mysql::get_mysql_driver_instance();
}


mysqlc::~mysqlc() {}

bool mysqlc::connect(connectinfo* info) {
	// std::cout << *(info)->url();
	con = driver->connect(c_char(*(info)->url()), c_char(*(info)->user), c_char(*(info)->password));
}

bool mysqlc::connect() {
	connectinfo* info = connectinfo();
	return this->connect(info) ;
}


char* query(char* sql){
	return nullptr ;
}
char* execute(char* sql) {
	return nullptr ;
}
