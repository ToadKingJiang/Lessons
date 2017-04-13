// ClassEx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
//struct stu
//{
//	char sno[10];
//	char name[8];
//};

class stuInfo
{

	char *sno;
	char name[8];
	int score;
	char contact[12];
public:
	inline void setdata(char *s,char *n,int Score,char *con);
	
	void print()
	{
		cout<<" 学号"<<sno<<" 姓名"<<name<<" 成绩"
			<<score<<" 联系方式"<<contact<<endl;
	}
};

void stuInfo::setdata(char *s,char *n,int Score,char *con)
	{
		sno = new char[10];
		strcpy(sno,s);
		strcpy(name,n);
		score = Score;
		strcpy(contact,con);
	}
int _tmain(int argc, _TCHAR* argv[])
{
	
	//stuInfo st;//object
	stuInfo  *s;
	//s= &st;
	s = new stuInfo;
	//strcpy(st.sno,"8163215");
	//st.setdata("8163215","赵留柱", 65,"15299492802");
	//st.print();

	s->setdata("8163215","赵留柱", 65,"15299492802");
	s->print();
	//cout<<st.sno<<endl;
	return 0;
}

