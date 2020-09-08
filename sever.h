#ifndef __CLIENT_H__
#define __CLIENT_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <strings.h>

typedef struct {
	int id;  		 //编号（帐号4位）
	char name[20]; 	 //名字
	char passwd[20]; //密码
	char sex[10];  	 //性别
	int age;  		 //年龄
	int phone; 		 //电话
	char addr; 		 //地址

	int salary 		 //薪水

}staff;

struct sockaddr_in seraddr,client; 		//定义了两个结构体变量
seraddr.sin_family = AF_INET; 			//采用的协议族类型
seraddr.port = htons(6060); 			//端口号
seraddr.sin_addr.s_addr = inet_addr();  //网络ip地址的设置

void do_register(); //注册用户
void do_login(); 	//登录用户
void do_delete();   //删除用户
void do_update_password(); //修改密码
























#endif
