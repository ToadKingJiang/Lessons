// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include"ConsoleApplication1.h"
#include<time.h>

//using namespace std;
class CStatistic 
{
	int Nums;
	float AveChinese,AveMaths,AveEnglish;
	CStudent *StuArray;
public:
	CStatistic(){}
	CStatistic(int number);
	void display()
	{
		for (int i=0;i<Nums;i++)
			{cout<<setw(2)<<i+1;StuArray[i].display();}
	}
	void sort();
};
CStatistic::CStatistic(int number)
{
	Nums=number;
	FILE *fp;
	char no[8]="";
	char name[7]="";
	char buff[15]="";
	srand(time(NULL));
	fopen_s(&fp,"CProgramming.txt","r");

	if(fp==NULL) return;

	StuArray = new CStudent[Nums];
	for (int i=0;i<Nums;i++)
	{
		fread(no,sizeof(char),8,fp);no[7]='\0';
	    fread(name,sizeof(char),7,fp);name[6]='\0';
		fread(buff,sizeof(char),15,fp);
		StuArray[i].SetData(no,name,rand()%100,rand()%100,rand()%100);
		
		AveChinese+=StuArray[i].GetChinese();
		AveMaths  +=StuArray[i].GetMaths();
		AveEnglish+=StuArray[i].GetEnglish();
	}
    AveChinese=AveChinese/Nums;AveMaths=AveMaths/Nums;
	AveEnglish=AveEnglish/Nums;
	fclose(fp);
}
void CStatistic::sort()
{
	CStudent temp;

	for(int i=0;i<Nums-1;i++)
		for(int j=i+1;j<Nums;j++)
			if(StuArray[i].GetTotal()<StuArray[j].GetTotal())
			{temp=StuArray[i];StuArray[i]=StuArray[j];StuArray[j]=temp;}
}
int _tmain(int argc, _TCHAR* argv[])
{
 //   CStudent s("8163210","������",65,87,89);
	//s.display();
	//s.SetData("8163220","������",76,77,100);
	//s.display();
	cout<<"���"<<setw(6)<<"ѧ��"<<setw(10)<<"����"<<setw(6)<<"����"<<setw(6)<<"��ѧ"<<setw(6)<<"Ӣ��"<<setw(7)<<"ƽ����"<<endl;
	cout<<"----------------------------------------------"<<endl;

	CStatistic cs(15);
	CStatistic *pStatistic = &cs;
	//cs.display();
	pStatistic->display();

	cout<<"\n-------------------Sorted----------------------"<<endl;
	//cs.sort();
	//cs.display();
	pStatistic->sort();
	pStatistic->display();
	cout<<"totol students:"<<num<<endl;
	return 0;
}

