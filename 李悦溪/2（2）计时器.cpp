#include<stdio.h>
#include<conio.h>
#include<iostream>
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
    void zjs()
    {

        int i;
        char x;
label:

        while(!kbhit())
        {printf("%2d:%2d:%2d",hour,minute,second);

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
            for(i=0; i<8; i++)
                cout<<'\b';

        }
        cout<<endl;
        x=getche();
        if(x=='p'||x=='P')
        {
            char y;
            y=getche();
            cout<<endl;
            if(y==' ')
                goto label;
            if(y=='s'||y=='S')
                return;
        }
    }
    void djs()
    {

        int i;
        char x;
label:

        while(!kbhit())
        {printf("%2d:%2d:%2d",hour,minute,second);

            second-=1;
            Sleep(1000);
            if(second==-1)
            {
                minute-=1;
                second=59;
            }
            if(minute==-1)
            {
                hour-=1;
                minute=59;
            }
            for(i=0; i<8; i++)
                cout<<'\b';

        }
        cout<<endl;
        x=getche();
        if(x=='p'||x=='P')
        {
            char y;
            y=getche();
            cout<<endl;
            if(y==' ')
                goto label;
            if(y=='s'||y=='S')
                return;
        }
    }
};
int main()
{
    while(1)
    {
        cout<<"1.zheng ji shi   2.dao ji shi   0.quit"<<endl<<"p: pause   s: stop    space: continue"<<endl;
        int f;
        cin>>f;
        if(f==1)
        {

            Time z(0,0,0);
            z.zjs();
        }

        if(f==2)
        {
            int h,m,s;
            char c,d,e;
            scanf("%d%c%d%c%d",&h,&c,&m,&d,&s);
            Time t(h,m,s);
            t.djs();
        }
        if(f==0)
            break;
        cout<<endl;
    }
}

