 #include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;
#define qwer system("CLS")
int randnum(int m)
{
    int srand(time(NULL));
    int et=m-0+1;
    int r=rand()%et+0;
    return r;
}
int randnum1234( )
{
    int srand(time(NULL));
    return (rand()%2+1);
}
///���鹦��#########################################################
class testgo
{
public:

};
///���ʹ���#########################################################
class Words
{
public:
    string name;//����ƴд
    string chinese;//������˼
    string attribute;//����
    int easy;//���׶�
    int mywords;//�Ƿ�Ϊ�ҵ��ʱ���ĵ���
    Words(string nam,string chi,string att,int eas,int myw)
    {
        name=nam;
        chinese=chi;
        attribute=att;
        easy=eas;
        mywords=myw;
    }
};
///�ʵ书��#####################################################
class Dictionary
{
public:
    int numof_words;//Ԥ�����������
};
///��ӭ��###########################################################
class Welcome
{
public:
    void welcome_all( )
    {
        cout<<"<<DICTIONARY>>"<<endl<<endl;
        cout<<endl<<endl;
        cout<<"  hello !!!! ����QQС��"<<endl<<endl;
        cout<<"  press 1 to Dictionary"<<endl<<endl;
        cout<<"  press 2 to my_���ʱ�"<<endl<<endl;
        cout<<"  press 3 to do a С����"<<endl<<endl;
        cout<<"  press 4 to find a word quickly"<<endl<<endl;
        cout<<"  press 5 to add new words"<<endl;
    }
    void welcome_dictionary( )
    {
        cout<<"#################################"<<endl;
        cout<<"# welcome to use the dictionary #"<<endl;
        cout<<"#################################"<<endl;
    }
    void welcome_test( )
    {
        cout<<"#################################"<<endl;
        cout<<"#  welcome  to  use    ���Թ��� #"<<endl;
        cout<<"#################################"<<endl;
        cout<<"\n��Ϊ��׼���˼��ֲ��鷽��\n�����ܲ���Ĺ��̰�\n\n";
        cout<<"�������Ӧ����ǰ�����ĸ��ʼ���ԣ�\nq�� ������дӢ��\nw�� ��Ӣ��д����\ne�� ������ѡӢ��\nr�� ��Ӣ��ѡ����";
    }
};

///###[����Ϊ������]############[����Ϊ������]########[����Ϊ������]######[����Ϊ������]########[����Ϊ������]##############################################################
int main( )
{
    Dictionary dictionary;
    dictionary.numof_words=15;//�ֵ���������������
    Welcome welcome;
    Words *p[100];
    p[0]=new Words("video","��Ƶ","������Ŷ��",0,1);
    p[1]=new Words("banana","�㽶","������Ŷ��",0,1);
    p[2]=new Words("happily","�Ҹ���","�Ǹ���Ŷ��",0,0);
    p[3]=new Words("lucky","���˵�","�����ݴ�Ŷ��",0,0);
    p[4]=new Words("cook","���","�Ƕ���Ŷ��",0,0);
    p[5]=new Words("distinguish","����","�Ƕ���Ŷ��",1,0);
    p[6]=new Words("commitment","��ŵ","������Ŷ��",1,0);
    p[7]=new Words("emotional","������","�����ݴ�Ŷ��",0,0);
    p[8]=new Words("coverage","����","������Ŷ��",1,0);
    p[9]=new Words("television","����","������Ŷ��",0,0);
    p[10]=new Words("newspaper","��ֽ","������Ŷ��",0,0);
    p[11]=new Words("appreciate","����","�Ƕ���Ŷ��",0,0);
    p[12]=new Words("situation","���","������Ŷ��",1,0);
    p[13]=new Words("content","����","�ǣ�����Ŷ��",0,0);
    p[14]=new Words("insulation","��Ե","�Ƕ���Ŷ��",1,0);
    for (int i=15;i<100;i++)
    {
        p[i]=new Words("qqqq","����","����",1,0);
    }
///##################������������������ʼ����ʼ����ʼ��#########
    for (int asdasda=0;asdasda<50;asdasda++)///������ѭ��50�Ρ�������
    {int sb=0;//while sb=1 ���ͷ��ʼѭ��
        welcome.welcome_all( );
        char ch;
        ch=getch( );
        switch(ch)
        {
        case '1'://����������ܣ������Զ������Ϳ�����
            {
                qwer;
                welcome.welcome_dictionary();
                cout<<endl<<"press a to see all words"<<endl;
                cout<<"press b to see different attribute of words"<<endl;
                cout<<"press c to see different difficult of words"<<endl;
                char qwe=getch();
                switch(qwe)//�������͵ĵ��������ʽ
                {
                case 'a'://���е���
                    {
                        qwer;
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" ���׶ȣ�";
                            if (p[i]->easy==1)
                                cout<<"�� ";
                            else
                                cout<<"�� ";
                            cout<<"�Ƿ��Ѽ����ҵĵ��ʱ�";
                            if (p[i]->mywords==1)
                                cout<<"��"<<endl;
                            else
                                cout<<"��"<<endl;
                        }
                        cout<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;
                    }
                case 'b'://���Ե��ʣ��ü��ִ��ԣ�
                    {
                        qwer;
                        cout<<"<���Է���>"<<endl<<endl<<"��������1\n����������2\n�����ݴ�����3\n����������4\n";
                        char ert=getch();
                        qwer;
                        switch (ert)
                        {//ert switch
                        case '1'://n
                            {
                                cout<<"�������£�\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->attribute)=="������Ŷ��")
                                    {
                                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" ���׶ȣ�";
                                            if (p[i]->easy==1)
                                                cout<<"�� ";
                                            else
                                                cout<<"�� ";
                                            cout<<"�Ƿ��Ѽ����ҵĵ��ʱ�";
                                            if (p[i]->mywords==1)
                                                cout<<"��"<<endl;
                                            else
                                                cout<<"��"<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        case '2'://v
                            {
                                cout<<"�������£�\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->attribute)=="�Ƕ���Ŷ��")
                                    {
                                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" ���׶ȣ�";
                                            if (p[i]->easy==1)
                                                cout<<"�� ";
                                            else
                                                cout<<"�� ";
                                            cout<<"�Ƿ��Ѽ����ҵĵ��ʱ�";
                                            if (p[i]->mywords==1)
                                                cout<<"��"<<endl;
                                            else
                                                cout<<"��"<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        case '3'://adj
                            {
                                cout<<"���ݴ����£�\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->attribute)=="�����ݴ�Ŷ��")
                                    {
                                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" ���׶ȣ�";
                                            if (p[i]->easy==1)
                                                cout<<"�� ";
                                            else
                                                cout<<"�� ";
                                            cout<<"�Ƿ��Ѽ����ҵĵ��ʱ�";
                                            if (p[i]->mywords==1)
                                                cout<<"��"<<endl;
                                            else
                                                cout<<"��"<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        case '4'://adv
                            {
                                cout<<"�������£�\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->attribute)=="�Ǹ���Ŷ��")
                                    {
                                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" ���׶ȣ�";
                                            if (p[i]->easy==1)
                                                cout<<"�� ";
                                            else
                                                cout<<"�� ";
                                            cout<<"�Ƿ��Ѽ����ҵĵ��ʱ�";
                                            if (p[i]->mywords==1)
                                                cout<<"��"<<endl;
                                            else
                                                cout<<"��"<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        default:
                            {
                                qwer;
                                cout<<"only 1--4 is allowed , retry please"<<endl<<"press any button to back to menu";
                                getch();
                                qwer;
                            }
                        }//ert switch ���Է������
                        break;
                    }
                case 'c'://���׶ȵ��ʣ��ѻ��ף�
                    {
                        qwer;
                        cout<<"���Ѵ�����1\n���򵥴�����2\n";
                        char nyd=getch();
                        qwer;
                        switch(nyd)
                        {
                        case '1'://��
                            {
                                cout<<"�Ѵ����£�\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->easy)==1)
                                    {
                                            cout<<p[i]->name<<" "<<p[i]->chinese<<" "<<p[i]->attribute<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        case '2'://��
                            {
                                cout<<"�򵥴����£�\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->easy)==0)
                                    {
                                            cout<<p[i]->name<<" "<<p[i]->chinese<<" "<<p[i]->attribute<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        default:
                            {
                                qwer;
                                cout<<"only 1--2 is allowed , retry please"<<endl<<"press any button to back to menu";
                                getch();
                                qwer;
                            }

                        }
                        break;
                    }
                default://abc`s default
                    {
                        qwer;
                        cout<<"only abc is allowed , retry please"<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                    }
                }
                break;
            }
///###########################################################����Ϊ���˵ĵ��ʱ�����#######################################
        case '2'://�ҵĵ��ʱ�����
            {
                qwer;
                cout<<"�������ʱ�����\n\n"<<"���ʱ����ܿ��Բ鿴Ŀǰ���˵��ʱ��ϵĵ��ʣ��Լ����ӻ���ٵ��ʱ��ϵĵ���(�������ڱ��ʵ�����¼��)\n\n����s�鿴���ʱ�������i�Ӵʣ�����o����\n";
                char sio=getch();
                qwer;
                switch(sio)
                {
                case 's'://������е��ʱ���ĵ��ʰ�
                    {
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            if (p[i]->mywords==1)
                            {
                                cout<<p[i]->name<<" "<<p[i]->chinese<<" "<<p[i]->attribute<<" ���׶ȣ�";
                                if (p[i]->easy==1)
                                    cout<<"�� \n";
                                else
                                    cout<<"�� \n";
                            }
                        }
                        cout<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//s
                    }
                case 'i':
                    {
                        qwer;
                        cout<<"��������ӵĵ���Ȼ��س�"<<endl;
                        char st[20];
                        scanf("%s",st);
                        string str(st);
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            if (p[i]->name==str)
                                p[i]->mywords=1;
                        }
                        cout<<endl<<"��ӵĵ���OK\npress any button to back to menu";
                        getch();
                        qwer;
                        break;//i
                    }
                case 'o':
                    {
                        qwer;
                        cout<<"������ɾ���ĵ���Ȼ��س�"<<endl;
                        char st[20];
                        scanf("%s",st);
                        string str(st);
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            if (p[i]->name==str)
                                p[i]->mywords=0;
                        }
                        cout<<endl<<"ɾ���ĵ���OK\npress any button to back to menu";
                        getch();
                        qwer;
                        break;//o
                    }
                default:
                    {
                        qwer;
                        cout<<"only s,i,o is allowed"<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                    }
                }
                break;//case '2' `s break;
            }
///###########################################################����Ϊ�����⹦��#################################
        case '3'://�����⹦��
            {
                qwer;
                //��ʼ
                welcome.welcome_test( );
                char qwert=getch();
                qwer;
                switch(qwert)
                {
                case 'q'://������дӢ��
                    {
                        int fen=0;//��ʼ����
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            cout<<"�����У�������дӢ��"<<endl<<"˵�����·���ʾ���ǵ��ʵ����ģ���д��Ӣ��Ȼ��س�"<<endl<<endl<<p[i]->chinese<<endl;
                            char dooo[20];
                            scanf("%s",dooo);
                            string ds(dooo);
                            if (p[i]->name==ds)
                            {
                                fen+=1;
                            }
                            qwer;
                        }
                        cout<<"��"<<dictionary.numof_words<<"���⣬ÿ��һ�֣�"<<"�÷�Ϊ��"<<fen;
                        cout<<endl<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//q
                    }
                case 'w'://��Ӣ��д����
                    {
                        int fen=0;//��ʼ����
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            cout<<"�����У���Ӣ��д����"<<endl<<"˵�����·���ʾ���ǵ��ʵ�Ӣ�ģ���д������Ȼ��س�"<<endl<<endl<<p[i]->name<<endl;
                            char dooo[20];
                            scanf("%s",dooo);
                            string ds(dooo);
                            if (p[i]->chinese==ds)
                            {
                                fen+=1;
                            }
                            qwer;
                        }
                        cout<<"��"<<dictionary.numof_words<<"���⣬ÿ��һ�֣�"<<"�÷�Ϊ��"<<fen;
                        cout<<endl<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//w
                    }
                case 'e'://��Ӣ��ѡ����
                    {
                        int fen=0;//��ʼ����
                        for (int i=1;i<=4;i++)//�ĵ���
                        {
                            int zhengqveweizhi=randnum1234();//һ������һ������
                            int zhengqvedanci=randnum(dictionary.numof_words-1);//��ȷ������p[zhengqvedanci]
                            int cuowudanci=randnum(dictionary.numof_words-1);
                            while (cuowudanci==zhengqvedanci)
                            {
                                cuowudanci=randnum(dictionary.numof_words-1);
                            }
                            cout<<"ѡ���⣺��Ӣ��ѡ���[[[����ѡ��ǰ�����ּ���]]]"<<endl<<p[zhengqvedanci]->name<<endl;
                            cout<<"1��";
                            if (zhengqveweizhi==1)
                                cout<<p[zhengqvedanci]->chinese<<' ';
                            else
                                cout<<p[cuowudanci]->chinese<<' ';
                            cout<<"2��";
                            if (zhengqveweizhi==2)
                                cout<<p[zhengqvedanci]->chinese<<' ';
                            else
                                cout<<p[cuowudanci]->chinese<<' ';
                            char chara=getch();
                            if ((zhengqveweizhi==1&&chara=='1')||(zhengqveweizhi==2&&chara=='2'))
                                fen++;
                            qwer;
                        }
                        cout<<"һ���ĵ��⣬�ܷ��ķ֣���ĵ÷�Ϊ��"<<fen<<"��\n\n";
                        cout<<endl<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//e
                    }
                case 'r'://������ѡӢ��
                    {
                        int fen=0;//��ʼ����
                        for (int i=1;i<=4;i++)//�ĵ���
                        {
                            int zhengqveweizhi=randnum1234();//һ������һ������
                            int zhengqvedanci=randnum(dictionary.numof_words-1);//��ȷ������p[zhengqvedanci]
                            int cuowudanci=randnum(dictionary.numof_words-1);
                            while (cuowudanci==zhengqvedanci)
                            {
                                cuowudanci=randnum(dictionary.numof_words-1);
                            }
                            cout<<"ѡ���⣺������ѡӢ�[[[����ѡ��ǰ�����ּ���]]]"<<endl<<p[zhengqvedanci]->chinese<<endl;
                            cout<<"1��";
                            if (zhengqveweizhi==1)
                                cout<<p[zhengqvedanci]->name<<' ';
                            else
                                cout<<p[cuowudanci]->name<<' ';
                            cout<<"2��";
                            if (zhengqveweizhi==2)
                                cout<<p[zhengqvedanci]->name<<' ';
                            else
                                cout<<p[cuowudanci]->name<<' ';
                            char chara=getch();
                            if ((zhengqveweizhi==1&&chara=='1')||(zhengqveweizhi==2&&chara=='2'))
                                fen++;
                            qwer;
                        }
                        cout<<"һ���ĵ��⣬�ܷ��ķ֣���ĵ÷�Ϊ��"<<fen<<"��\n\n";
                        cout<<endl<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//r
                    }
                default:
                    {
                        qwer;
                        cout<<"only qwer is allowed , retry please"<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                    }
                }
                //����
                break;
            }
///###########################################################����Ϊ������������#################################
        case '4'://���뵥��ֱ�ӳ�����
            {
                qwer;
                cout<<"�����������ĵ���Ȼ��س�"<<endl;
                char st[20];
                scanf("%s",st);
                string str(st);
                for (int i=0;i<dictionary.numof_words;i++)
                {
                    if (p[i]->name==str)
                        {
                            cout<<p[i]->name<<" "<<p[i]->chinese<<" "<<p[i]->attribute<<" ���׶ȣ�";
                            if (p[i]->easy==1)
                                cout<<"�� ";
                            else
                                cout<<"�� ";
                            cout<<"�Ƿ��Ѽ����ҵĵ��ʱ�";
                            if (p[i]->mywords==1)
                                cout<<"��"<<endl;
                            else
                                cout<<"��"<<endl;
                        }
                }
                cout<<endl<<"press any button to back to menu";
                getch();
                qwer;
                break;
            }
///###########################################################����Ϊ��ӵ��ʹ���#################################
        case '5'://��ӵ���
            {
                qwer;
                cout<<"��ӭ������ӵ��ʹ��ܣ�����Ҫ����ܶණ��������㲻������ȷ�ķ������룬���ʾͻ������⣬so��are��you��ready��\n\n(�����������)";
                getch();
                qwer;
                cout<<"˵����"<<endl<<"����������  ���ʣ�eg:name�� ����(eg:����) ���ԣ�eg:������Ŷ���� ���׶ȣ��Ѵ�����1���򵥴�����0��\n�����ĸ�����ÿ����һ����һ�λس�"<<endl<<endl;
                char s1[30];
                char s2[30];
                char s3[30];
                int s4;
                gets(s1);
                gets(s2);
                gets(s3);
                cin>>s4;
                p[dictionary.numof_words]->name=s1;
                p[dictionary.numof_words]->chinese=s2;
                p[dictionary.numof_words]->attribute=s3;
                p[dictionary.numof_words]->easy=s4;
                dictionary.numof_words++;
                cout<<"\n��ӵ��ʳɹ�\npress any button to back to menu";
                getch();
                qwer;
                break;
            }
///#################ÿ��switch�����󶼸��Ÿ�������###############����Ϊ������֮��ĺ������#################################
        default:
            {
                qwer;
                cout<<"only 1--5 is allowed , retry please"<<endl<<"press any button to back to menu";
                getch();
                qwer;
            }
        }//switch over
    }//for over
}//main over
