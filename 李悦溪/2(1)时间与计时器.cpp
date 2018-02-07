#include<iostream>
#include<stdio.h>
#include <conio.h>
#include<windows.h>
using namespace std;
class Time
{
public:
    int hour,minute,second;
    Time(int h,int m,int s)
    {
        int a=0,b=0;
        a=s/60;
        second=s%60;
        m=m+a;
        b=m/60;
        minute=m%60;
        hour=b+h;
    }
    void show()
    {
       printf("%2d:%2d:%2d",hour,minute,second);
    }
    void sjzjym()
    {
        int i;
        while(!kbhit())
        {
            printf("%2d:%2d:%2d",hour,minute,second);
            second+=1;
            Sleep(1000);
            if(second==60)
               {
                   minute+=1;
                   second=0;
               }
            if(minute==60)
            {
                 hour+=1;
                 minute=0;
            }
            for(i=0;i<8;i++)
                cout<<'\b';
        }
    }
};
int main()
{
   int h,m,s;
   char c,d,e;
   scanf("%d%c%d%c%d",&h,&c,&m,&d,&s);
   Time t(h,m,s);
   t.show();
   cout<<endl<<"do you want to continue?(y/n)"<<endl;
   cin>>e;
   if(e=='y')
   {
       cout<<"press any key to exit"<<endl;
       t.sjzjym();
   }

}
