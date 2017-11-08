// 1. 连接
// 2. 查询 query execute set
// 3. 返回结果
#include "mysql_connection.h"
#include "mysql_driver.h"
#include <stdio.h>
#include <string.h>

struct connectinfo
{
	char* user ;
	char* password ;
	char* host ;
	char* port ;
	connectinfo() {
		this->user = "root";
                this->password = "root" ;
                this->host = host ;
                this->port = port ;
	}
	connectinfo(char* user,char* password,char* host, char* port) {
		this->user = user ;
		this->password = password ;
		this->host = host ;
		this->port = port ;
	}
	char* url() {
		if( this->host == nullptr ) {
			this->host = "127.0.0.1";
		}
		if( this->port == nullptr ) {
			this->port = "3306" ;
		}
		char * result=(char *)malloc((strlen(this->host)+strlen(this->port)+7)*sizeof(char));
		sprintf(result,"tcp://%s:%s",this->host,this->port) ;
		return result ;
	}
}

class mysqlc
{
public:
	mysqlc(connectinfo* info);
	mysqlc() ;
	~mysqlc();
	
public:
	bool connect(connectinfo* info) ;
	bool connect() ;

public:
	char* query(char* sql) ;
	char* execute(char* sql) ;
	sql::mysql::MySQL_Driver *driver;
	sql::Connection *con;
};
