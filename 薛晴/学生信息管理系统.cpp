#include<iostream>
#include <cstring>
using namespace std;
class student
{
public:
    char name[20];
    int num;
    int age;
    char sex;
    int zhuanye;
    student *next;
    student *stu;
    student();
    ~ student ();
    student (char n[20],int nu, int ag, char se,int z);
    void tianjia();
    void shanchu();
    void xiugai();
    void xianshi();
    int zongshu();
    void xianshi1()
    {
          cout<<"����: "<<name<<" "<<"ѧ��: "<<num<<" "<<"�Ա�: "<<sex<<"����: "<<age<<"רҵ: "<<zhuanye<<endl;
    }
    friend void caozuo(int);
};
student::student()
{
    strcpy(name, "nomame");
    num=0;
    sex='m';
    age=0;
    zhuanye=0;
}
student::student (char n[20],int nu, int ag, char se,int z)
{
    strcpy(name, n);
    num=nu;
    sex=se;
    age=ag;
    zhuanye=z;

}
student::~student(){};
student *s[50];
int i=0;
int j=0;
void student::tianjia()
{
    cout<<"������������"<<endl;
    cin>>name;
    cout<<"������ѧ�ţ�"<<endl;
    cin>>num;
    cout<<"���������䣺"<<endl;
    cin>>age;
    cout<<"�������Ա�(m/w)��"<<endl;
    cin>>sex;
    cout<<"������רҵ��"<<endl;
    cout<<"����1 �������ѧ�뼼�� ����2 �������"<<endl;
    cin>>zhuanye;
	j++;
    s[i]=new student(name,num,age,sex,zhuanye);
    i++;
}
int  student::zongshu()
{
    cout<<"ѧ������:"<<i<<endl;
    cout<<endl;

}
void student::shanchu()
{
    cout<<"��������Ҫɾ����ѧ��������"<<endl;
    cin>>name;
    for(int h=0;h<i;h++)
    {
        if(strcmp(name,s[h]->name)==0)
        {
            i--;
            s[h]=s[h+1];
            h++;
            cout<<"ɾ���ɹ�"<<endl;
        }
    }
}

void student::xiugai()
{
    cout<<"��������Ҫ�޸ĵ�ѧ����������"<<endl;
    cin>>name;
    for(int h=0;h<i;h++)
    {
        if(strcmp(name,s[h]->name)==0)
       {
           int nu;
           int ag;
           char se;
           int z;
           cout<<"������ѧ��: "<<endl;
           cin>>nu;
           cout<<"���������䣺"<<endl;
           cin>>ag;
           cout<<"�������Ա�(m/w): "<<endl;
           cin>>se;
           cout<<"������רҵ��"<<endl;
           cout<<"����1 �������ѧ�뼼�� ����2 �������"<<endl;
           cin>>z;
           s[h]->num=nu;
           s[h]->age=ag;
           s[h]->sex=se;
           s[h]->zhuanye=z;
           cout<<"�����޸ĳɹ���";
           break;
        }
        if (i==j)
        {
            cout<<"��ѧ��������"<<endl;
            break;
        }
    }
}
void student::xianshi()
{
  cout<<"ѧ����Ϣ��  "<<endl;
  if(i==0)
  cout<<"��������"<<endl;
  for(int k=0;k<i;k++)
  {
	  s[k]->xianshi1();
  }
}

void caozuo(int p)
{
   student t;
   switch(p)
   {
        case 1:t.tianjia();
        break;
        case 2:t.shanchu();
        break;
        case 3:t.xiugai();
        break;
        case 4:t.xianshi();
        break;
        case 5:t.zongshu();
        break;
        case 6:exit(0);
        break;
    }
}

int main()
{
	int w;
	do
	{
	    cout<<"1.���ѧ��"<<endl;
		cout<<"2.ɾ��ѧ��"<<endl;
		cout<<"3.�޸�ѧ����Ϣ"<<endl;
		cout<<"4.��ʾ����ѧ��"<<endl;
		cout<<"5.ѧ������"<<endl;
		cout<<"5.�˳�"<<endl;
		int a;
		cin>>a;
		caozuo(a);
		cout<<"1.���ؽ���"<<endl;
		cout<<"2.�˳�"<<endl;
		cin>>w;
	}while(w==1);
	return 0;
}
