#include <iostream>
#include <fstream>
#include <cstdlib>
#include<cstring>
#ifndef _JieMianClass_h
    #define _JieMianClass_h
    #include"JieMianClass.h"
#endif
using namespace std;
class Reply
{
public:
    void Search(char getin[]);
    friend void JieMian::Judge(Reply &);
    void Openfile();
    void Openfile1();
    void Openfile2();
    void Openfile3();
    void Openfile4();
    void Output(int i);
private:
    char key[256][100];
    char reply[256][100];//��ά����
    //char shuru[20];
    char buffer[256],buffer1[256];
};

void Reply::Openfile()//�򿪹ؼ����ĵ�������
{
    
    ifstream file("example.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer,100);//�ӹؼ����ļ����뵽buffer
	    strcpy(key[i],buffer);
	}
    file.close();
}
void Reply::Openfile1()//�򿪻ظ�1�ĵ�
{
    
	ifstream file("example1.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer1,100);//�ӹؼ����ļ����뵽buffer
	    strcpy(reply[i],buffer1);
	}
    file.close();

}
void Reply::Openfile2()//�򿪻ظ�2�ĵ�
{
    
	ifstream file("example2.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer1,100);//�ӹؼ����ļ����뵽buffer
	    strcpy(reply[i],buffer1);
	}
    file.close();

}
void Reply::Openfile3()//�򿪻ظ�3�ĵ�
{
    
	ifstream file("example3.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer1,100);//�ӹؼ����ļ����뵽buffer
	    strcpy(reply[i],buffer1);
	}
    file.close();

}
void Reply::Openfile4()//�򿪻ظ�4�ĵ�
{
    
	ifstream file("example4.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer1,100);//�ӹؼ����ļ����뵽buffer
	    strcpy(reply[i],buffer1);
	}
    file.close();

}

void Reply::Output(int i)
{
    cout<<" "<<reply[i]<<endl;
}


void Reply::Search(char getin[])//��Ѱ
{
 
        for(int i=0;i<300;i++)
		{   if(strcmp(getin,key[i])==0) 
            {
                Output(i);
                //cout<<reply[i]<<endl;
                break;
            }
			   if(i==300)
                    break;
		}
}

void JieMian::Judge(Reply &R)
{
    R.Openfile();
    //if(JueSe==1)
    //{
        //if (XingZuo==4)
        //{
            if(NianLing==1)
            {
                if(Sex==1)
                    R.Openfile1;
                else
                    R.Openfile2;
            }
            else
            {
                if(Sex==1)
                    R.Openfile3;
                else
                    R.Openfile4;

            }
        //}
        

    //}
    //else
    
	
}





