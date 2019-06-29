/*  V1.0   */
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
    char reply[256][100];//二维数组
    //char shuru[20];
    char buffer[256],buffer1[256];
};

void Reply::Openfile()//打开关键字文档并导入
{
    
    ifstream file("example.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer,100);//从关键字文件导入到buffer
	    strcpy(key[i],buffer);
	}
    file.close();
}
void Reply::Openfile1()//打开回复1文档
{
    
	ifstream file("example1.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer1,100);//从关键字文件导入到buffer
	    strcpy(reply[i],buffer1);
	}
    file.close();

}
void Reply::Openfile2()//打开回复2文档
{
    
	ifstream file("example2.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer1,100);//从关键字文件导入到buffer
	    strcpy(reply[i],buffer1);
	}
    file.close();

}
void Reply::Openfile3()//打开回复3文档
{
    
	ifstream file("example3.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer1,100);//从关键字文件导入到buffer
	    strcpy(reply[i],buffer1);
	}
    file.close();

}
void Reply::Openfile4()//打开回复4文档
{
    
	ifstream file("example4.txt");
    if (! file.is_open())
    {
        cout << "Error opening file"; exit (1);
    }
    for(int i=0;!file.eof();i++)
    {   
	    file.getline(buffer1,100);//从关键字文件导入到buffer
	    strcpy(reply[i],buffer1);
	}
    file.close();

}

void Reply::Output(int i)
{
    cout<<" "<<reply[i]<<endl;
}


void Reply::Search(char getin[])//搜寻
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





