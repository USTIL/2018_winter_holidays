#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#define qwer system("CLS");
/// time ?!!!??sleep?????!!!!!! Sleep(������);
using namespace std;
class TIME
{
public:
    int shijian;
};
class CLOCK
{
public:
    int hour;
    int minute;
    int second;
    void whattime(int a)//����ʱ�䲻���
    {
        hour = (a/3600);
        minute = (a-hour*3600)/60;
        second = (a-hour*3600-minute*60);
    }
    void showtime( )//���ʱ��
    {
        printf("%02d,%02d,%02d",hour,minute,second);
    }
};
int main( )
{
    TIME time;
    time.shijian=0;
    CLOCK clock;
///׼�����///ʹ��whattime������ʹ��showtime��ʾ�����ɰ����ܼ�ʱ��������ʾʱ��
    for (int fghj=0;fghj<40;fghj++)//������ѭ��40��
    {
        cout<<"��ӭʹ�ò��ܻ�ӭ�ļ�ʱ��"<<endl<<endl;
        cout<<"���롰1����������ʱ���ܣ���2�����뵹��ʱ����"<<endl;
        char sdf=getch();
        qwer;
        switch(sdf)
        {
        case '1':///����ʱ
            {
                time.shijian=0;
                cout<<"��'h'��ͣ����'c'��������'s'ֹͣ��ʱ"<<endl<<"���������ʼ��ʱ";
                getch();

                char ch='1';
                qwer;
                for (int i=0;i<100;i++)
                {
                    if (ch=='s')
                        break;
                    while (1)//һ��������ַ�Ϊ 's' / 'h' ��ֹͣѭ����
                    {
                        if (ch=='h')
                            break;
                        if (ch=='s')
                            break;
                        clock.whattime(time.shijian);
                        cout<<"��'h'��ͣ����'c'��������'s'ֹͣ��ʱ"<<endl;
                        clock.showtime();
                        Sleep(1000);
                        time.shijian++;
                        qwer;
                        if (kbhit())
                        {
                            ch=getch();//��ͣ�ͼ�����h & s ��������c
                        }
                    }
                    if (ch=='s')
                    {
                        break;
                    }
                    cout<<"��'c'����"<<endl;
                    time.shijian--;
                    clock.showtime();
                    char dfg=getch();
                    if (dfg=='c')
                    {
                        ch='a';
                    }
                    qwer;
                }
                cout<<"����ʱ��ʱ��Ϊ��"<<time.shijian-1<<"��"<<endl<<"�����������";
                getch();
                qwer;
                break;//����ʱ
            }
        case '2':///����ʱ
            {
                int a,b,c;
                cout<<"�����뵹��ʱ��ʱ�䣺��ʽΪ ʱ �� ��\n";
                cin>>a>>b>>c;
                time.shijian=a*3600+b*60+c;
                cout<<"��'h'��ͣ����'c'��������'s'ֹͣ��ʱ"<<endl<<"���������ʼ��ʱ";
                getch();
                qwer;
                char ch='1';
                qwer;
                while (1)
                {
                    if (ch=='s')
                        break;
                    while (1)//һ��������ַ�Ϊ 's' / 'h' ��ֹͣѭ����
                    {
                        if (ch=='h')
                            break;
                        if (ch=='s')
                            break;
                        clock.whattime(time.shijian);
                        cout<<"��'h'��ͣ����'c'��������'s'ֹͣ��ʱ"<<endl;
                        clock.showtime();
                        Sleep(1000);
                        time.shijian--;
                        qwer;
                        if (kbhit())
                        {
                            ch=getch();//��ͣ�ͼ�����h & s ��������c
                        }
                    }
                    if (ch=='s')
                    {
                        break;
                    }
                    cout<<"��'c'����"<<endl;
                    time.shijian--;
                    clock.showtime();
                    char dfg=getch();
                    if (dfg=='c')
                    {
                        ch='a';
                    }
                    time.shijian+=2;
                    qwer;
                }
                cout<<"����ʱ��ʱ��Ϊ��";
                clock.whattime(++time.shijian);
                clock.showtime();
                cout<<endl<<"�����������";
                getch();
                qwer;
                break;
            }
        default:
            {
                cout<<"ֻ�������롰1����2��Ŷ������"<<endl<<"press any button to continue~~~";
                getch();
                qwer;
            }
        }
    }//chengxv over
}//mian over















