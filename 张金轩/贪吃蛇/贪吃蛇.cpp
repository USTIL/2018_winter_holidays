#include<stdio.h>
///��������Ϸ����ţ���û��bug�������汾                =_= ! �ܾ�bug��������
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#define qwer system("CLS");
using namespace std;

class Body
{
public:
    int ah,bw;//λ��
    char mtr;//����
    char drc;//����
    Body* pnext;//ָ��
    Body(int a,int b,char c,char d,Body* p)
    {
        ah=a;
        bw=b;
        mtr=c;
        drc=d;
        pnext=p;
    }
    void body_move()//��drc�ķ����ƶ�һ��
    {
        if (drc=='a')
            bw--;
        if (drc=='d')
            bw++;
        if (drc=='w')
            ah--;
        if (drc=='s')
            ah++;
        if (pnext!=NULL)
        {
            drc=pnext->drc;
        }
    }
};

class Food
{
public:
    int a;
    int b;
    void new_food(Body* snake_z)
    {
        while (1)
        {
            srand((unsigned)time(NULL));
            a = rand()%10+1;
            b = rand()%10+1;
            //cout<<"����������"<<endl;
            int sd = 0;
            for (Body* dfg = snake_z;dfg != NULL;dfg = dfg->pnext)
            {
                if (dfg->ah == a && dfg->bw == b)
                    sd++;
                if (sd != 0)
                    break;
            }
            if (sd == 0)
                break;
        }
    }
};

Body* create_snake()
{
    Body* tou=new Body(4,4,'@','d',NULL);
    Body* tou2=new Body(4,3,'#','d',tou);
    Body* tou3=new Body(4,2,'#','d',tou2);
    Body* tou4=new Body(4,1,'#','d',tou3);
    return tou4;
}

class Map
{
public:

    char materials[100][100];

    void clear_map()                    ///��ʼ����ͼ
    {
        for (int i=1;i<=10;i++)
        {
            for (int j=1;j<=10;j++)
            {
                materials[i][j] = ' ';
            }
        }
    }
    void prepare_map(int a,int b,char c)///��䵥���ռ������
    {
        materials[a][b] = c;
    }
    void draw_map()                     ///���Ƶ�ͼ
    {
        cout<<"--------------������̰������Ϸ������-------���ߣ��Ž���--------"<<endl<<endl<<"����������w,a,s,d �������ߵ��ƶ�����ͷ����ǽ�ں��Լ�������ͻ�GAME OVER"<<endl;
        cout<<endl<<"��������������"<<endl;
        for (int i=1;i<=10;i++)
        {
            cout<<"��";
            for (int j=1;j<=10;j++)
            {
                cout<<materials[i][j];
            }
            cout<<"��"<<endl;
        }
    cout<<"��������������";
    }
};

int if_died(Body* a,Body* z)///����������----�������snake_a��������û��ײǽ����û�к����������ص�
{
    int sb=0;
    //snake_a��������û��ײǽ
    if (a->ah>10||a->ah<1||a->bw>10||a->bw<1)
        sb++;
    //��û�к����������ص�
    for (Body* qte=z;qte!=a;qte=qte->pnext)
    {
        if (qte->ah == a->ah && qte->bw == a->bw)
        {
            sb++;
        }
    }
    return sb;
}

int main()
{
    cout<<"--------------������̰������Ϸ������-------���ߣ��Ž���--------"<<endl<<endl<<"����������w,a,s,d �������ߵ��ƶ�����ͷ����ǽ�ں��Լ�������ͻ�GAME OVER"<<endl<<"ע�⣺��Ҫ�����������뷨"<<endl<<endl<<"���������ʼ��Ϸ";
    getch();
    qwer;

    Body* snake_z;///��ʼ����
    Body* snake_a;
    snake_z=create_snake();
    snake_a=snake_z->pnext->pnext->pnext;

    Food food;///��ʼ���óԵ�
    food.new_food(snake_z);

    Map surface;///��ʼ����ͼ

    for (int asdfghjkl=0;asdfghjkl<100;asdfghjkl++)///������forѭ����Ĭ��100�ο��Ըĳ�����ѭ����
    {
        ///����
        qwer;
        surface.clear_map();
        for (Body* PPP=snake_z;PPP!=NULL;PPP=PPP->pnext)
            surface.prepare_map(PPP->ah,PPP->bw,PPP->mtr);
        surface.prepare_map(food.a,food.b,'$');
        surface.draw_map();

        /// /////////////////////Sleep(1000)
        int sc=0;
        for (int i=0;i<50;i++)
        {
            char ch = 'r';
            if ( kbhit() )
            {
                ch = getch();
                if ( (ch == 'a'&&snake_a->drc!='d') || (ch == 'w'&&snake_a->drc!='s') || (ch == 'd'&&snake_a->drc!='a') || (ch == 's'&&snake_a->drc!='w'))
                {
                    qwer;
                    i = 0;
                }
                else
                    ch = 'r';
            }
            if (ch == 'a' || ch == 's' || ch == 'd' || ch == 'w')
            {
                snake_a->drc = ch;
                ///�ƶ�
                ///######################################################�Զ���
                int aqwq = snake_a->ah;
                int bqwq = snake_a->bw;
                if (snake_a->drc == 'a')
                    bqwq--;
                if (snake_a->drc == 'd')
                    bqwq++;
                if (snake_a->drc == 's')
                    aqwq++;
                if (snake_a->drc == 'w')
                    aqwq--;
                if (aqwq == food.a && bqwq == food.b)
                {
                    Body* P_new_head;
                    P_new_head = new Body(aqwq,bqwq,'@',snake_a->drc,NULL);
                    snake_a->pnext = P_new_head;
                    snake_a->mtr = '#';
                    snake_a = P_new_head;
                    food.new_food(snake_z);
                }
                ///######################################################�Զ���
                else
                {
                    for (Body* PPP=snake_z;PPP!=NULL;PPP=PPP->pnext)
                        PPP->body_move();
                    if ( if_died(snake_a,snake_z) != 0)
                        {
                            sc++;
                            break;
                        }
                }
                ///����
                surface.clear_map();                                //surface
                for (Body* PPP=snake_z;PPP!=NULL;PPP=PPP->pnext)    //surface
                    surface.prepare_map(PPP->ah,PPP->bw,PPP->mtr);  //surface
                surface.prepare_map(food.a,food.b,'$');
                surface.draw_map();                                 //surface
            }
            Sleep(20);
        }
        if (sc != 0)
            break;
        /// /////////////////////Sleep(1000)over

        ///�ƶ�
        int a = snake_a->ah;
        int b = snake_a->bw;
        if (snake_a->drc == 'a')
            b--;
        if (snake_a->drc == 'd')
            b++;
        if (snake_a->drc == 's')
            a++;
        if (snake_a->drc == 'w')
            a--;
        if (a == food.a && b == food.b)
        {
            Body* P_new_head;
            P_new_head = new Body(a,b,'@',snake_a->drc,NULL);
            snake_a->pnext = P_new_head;
            snake_a->mtr = '#';
            snake_a = P_new_head;
            food.new_food(snake_z);
        }
        else
        {
            for (Body* PPP=snake_z;PPP!=NULL;PPP=PPP->pnext)
                PPP->body_move();
            if ( if_died(snake_a,snake_z) )
            {
                qwer;
                break;
            }
        }
    }
    cout<<endl<<"  GAME  OVER  "<<endl;
    cout<<"��������˳���Ϸ";
    char outgame = getch();
}
