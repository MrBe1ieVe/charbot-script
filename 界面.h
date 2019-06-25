#include<stdio.h>
struct JieMian
{
    //char XingZuo[3];//储存星座
    //char Name[3];//输入姓名
    int JueSe;//角色代码
    int XingZuo;//星座代码
}JieMian;
void FirstDisplay(){
    printf("********************\n");
    printf("    心理安抚系统\n");
    printf("********************\n");
}
void inName(){
    printf("请输入聊天对象姓名\n");
    //gets(JieMian.Name);
}
void SelectJueSe(){
    printf("请选择角色\n");
    printf("1.心理医生\n");
    printf("2.妈妈\n");
    printf("3.女朋友\n");
    printf("4.男朋友\n");
    printf("5.已故亲人\n");
    printf("6.分手恋人\n");
    //scanf("%d",&JieMian.JueSe);

}
void SelectXingZuo(){
    printf("请选择星座\n");
    printf("1.白羊\n");
    printf("2.金牛\n");
    printf("3.双子\n");
    printf("4.巨蟹\n");
    printf("5.狮子\n");
    printf("6.处女\n");
    printf("7.天瓶\n");
    printf("8.天蝎\n");
    printf("9.射手\n");
    printf("10.摩蝎\n");
    printf("11.水瓶\n");
    printf("12.双鱼\n");  
    //scanf("%d",&JieMian.XingZuo);
}
