#include<iostream>
#include<windows.h>
#include<iomanip>
#include<conio.h>
#include<time.h>
#include<cstdlib>
using namespace std;
//��λ���
void gotoxy(int x,int y)
{
    COORD pos={x,y};
    HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, pos);
}
//���ع��
void  hidden()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    GetConsoleCursorInfo(hOut,&cci);
    cci.bVisible=0;
    SetConsoleCursorInfo(hOut,&cci);
}
class Time
{
public:
    Time()
    {
       hour=0,minute=0,second=0;
    }
    void xianshi();
    void daojishi();
    void show();
    void jinwei();
    void fuwei()
   {
        hour=0,minute=0,second=0;
   }
    void caozuo1();
    void caozuo2();
    void set(int h,int m,int s)
    {
         hour=h;
         minute=m;
         second=s;
    }
private:
    int hour;
    int minute;
    int second;
 } ;


 //��λ����
 void Time::jinwei()
{
    second++;
    if(60==second)
    {
       second=0;
       minute=minute+1;
    }
    else
        if(60==minute)
        {
           minute=0;
           hour=hour+1;
        }
    Sleep(1000);
}


//����ʱ����
void Time::daojishi()
{
    if(second>60)
    {
        int a,b,c;
        //h,m,s
        a=second/3600;
        second=second-a*3600;
        b=second/60;
        second=second-b*60;
        hour=hour+a;
        minute=minute+b;
    }
        second--;
        if(second==-1)
        {
            second=59;
            minute--;
            if(minute==-1)
            {
                minute=59;
                hour--;
                if(hour==-1)
                {
                    cout<<"ʱ�䵽��"<<endl;
                }
            }
        }
    Sleep(1000);
}

//��ʾ����
void Time::xianshi()
{
    gotoxy(11,11);
    cout<<"\n"<<right<<setfill('0')<<setw(2)<<hour<<':'<<right<<setfill('0')<<setw(2)<<minute<<':'<<right<<setw(2)<<second<<setfill('0')<<"\n";
    cout<<"\n";
    cout<<"\n"<<"��a��ʼ,��p��ͣ,���ո����,��sֹͣ"<<endl;
}
//��ʾ����

void Time::caozuo1()
{
    char ch;
    hidden();
    ch=getch();
    if(ch=='a'||ch=='A')
    {
        while(1)
        {
            if(kbhit())//��鵱ǰ�Ƿ��м�������
            {
                hidden();
                ch=getch();
                if(ch=='p'||'P')
                {
                    caozuo1();
                }
            }
            if(ch=='s'||ch=='S')
            {
                break;
            }
            jinwei();
            xianshi();
        }
    }
    if(ch==' ')
    {
        jinwei();
        xianshi();
        caozuo1();
    }
}

void Time::caozuo2()
{
    char ch;
    hidden();
    ch=getch();
    if(ch=='a'||ch=='A')
    {
        while(1)
        {
            if(kbhit())
            {
                hidden();
                ch=getch();
                if(ch=='p'||'P')
                {
                    caozuo2();
                }
            }
            if(ch=='s'||ch=='S')
            {
                break;
            }
            daojishi();
            xianshi();
        }
    }
    if(ch==' ')
    {
        daojishi();
        xianshi();
        caozuo2();
    }
}

int main()
{
    int m;
    cout<<"����1����ʱ"<<endl;
    cout<<"����2����ʱ"<<endl;
    cin>>m;
    if(m==1)
    {
        Time a;
        gotoxy(20,40);
        a.xianshi();
        a.caozuo1();
    }
    if(m==2)
    {

        Time b;
        gotoxy(5,5);
        int h,m,s;
        cout<<"input hour:";
        cin>>h;
        cout<<"input minute:";
        cin>>m;
        cout<<"input second:";
        cin>>s;
        cout<<"������һ������,��a���밴�س�"<<endl;
        while(1)
        {
            b.set(h,m,s);
            b.xianshi();
            Sleep(1000);
            system("cls");
            b.caozuo2();
        }
    }
     return 0;
}
