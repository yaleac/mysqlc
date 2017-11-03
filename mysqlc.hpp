// 1. 连接
// 2. 查询 query execute set
// 3. 返回结果


struct connectinfo
{
	char* user ;
	char* password ;
	char* host ;
	char* port ;
};

class mysqlc
{
public:
	mysqlc();
	~mysqlc();
	
public:
	bool connect(connectinfo* info) ;
	bool connect() ;

public:
	char* query(char* sql) ;
	char* execute(char* sql) ;
};