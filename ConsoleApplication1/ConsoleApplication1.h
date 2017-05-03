int num=0;
using namespace std;
class CStudent
{
	char *No;
	char *Name;
	int DegChinese,DegMaths,DegEnglish;
	int total;
public:
	CStudent(){No=NULL;Name=NULL;DegChinese=DegMaths=DegEnglish=0;
	total=0;num++;
	}
	CStudent(char*,char*,int,int,int);
	void SetData(char*,char*,int,int,int);
	void display();
	int GetChinese(){return DegChinese;}
	int GetMaths(){return DegMaths;}
	int GetEnglish(){return DegEnglish;}
	int GetTotal(){return total;}
    //static int Num;
};
CStudent::CStudent(char*no,char*name,int Chinese,int math,int english)
{
	No = new char[strlen(no)+1];	
	//strcpy_s(No,strlen(no),no);
	strcpy_s(No,strlen(no)+1,no);
	Name = new char[strlen(name)+1];strcpy_s(Name,strlen(name)+1,name);
	DegChinese=Chinese;DegMaths=math;DegEnglish=english;
	total = DegChinese+DegMaths+DegEnglish;
	
}
void CStudent::SetData(char*no,char*name,int Chinese,int math,int english)
{
	if (No==NULL)
	{
		No = new char[strlen(no)+1];	strcpy_s(No,strlen(no)+1,no);
		Name = new char[strlen(name)+1];strcpy_s(Name,strlen(name)+1,name);
		DegChinese=Chinese;DegMaths=math;DegEnglish=english;
		total = DegChinese+DegMaths+DegEnglish;
	}
	else
	{
		if (strlen(No)<strlen(no))
		   No = new char[strlen(no)+1];	
		strcpy_s(No,strlen(no)+1,no);
		if (strlen(Name)<strlen(name))
			Name = new char[strlen(name)+1];
		strcpy_s(Name,strlen(name)+1,name);
		DegChinese=Chinese;DegMaths=math;DegEnglish=english;
		total = DegChinese+DegMaths+DegEnglish;
	}
}
void CStudent::display()
{	cout<<setw(10)<<No<<setw(10)<<Name<<setw(4)<<DegChinese<<setw(6)<<DegMaths<<setw(6)<<DegEnglish<<setw(6)<<total/3<<endl;}
//CStudent::Num=0;
