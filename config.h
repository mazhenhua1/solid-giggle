#ifndef CONFIG_H
#define CONFIG_H


//服务器IP
#define IPADDR "192.168.1.144"
//端口号
#define PORT 6060

//注册标志位
#define ACCOUNT_OK 0x1
#define PASSWORD_OK 0x2
#define APASSWORD_OK 0x4
#define NAME_OK 0x8
#define AGE_OK 0x10
#define SEX_OK 0x20
#define PHONE_OK 0x40
#define ADDRESS_OK 0x80

//权限
#define USER 0
#define ROOT 1

//命令
typedef enum{
    Register = 1,   //注册
    Query,      //查询
    Land,       //登陆
    Insert      //插入
}cmd_e;

//消息结构体
typedef struct {
   cmd_e cmd;           //命令类型
   int id;             //编号（帐号4位）
   char permission;		//权限
   char name[20];       //名字
   char passwd[20];     //密码
   char sex[10];        //性别
   char age;            //年龄
   int phone;           //电话
   char addr[10];       //地址
   int salary;          //薪水
}staff_t;

#endif // CONFIG_H
