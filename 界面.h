#include<stdio.h>
struct JieMian
{
    //char XingZuo[3];//��������
    //char Name[3];//��������
    int JueSe;//��ɫ����
    int XingZuo;//��������
}JieMian;
void FirstDisplay(){
    printf("********************\n");
    printf("    ������ϵͳ\n");
    printf("********************\n");
}
void inName(){
    printf("�����������������\n");
    //gets(JieMian.Name);
}
void SelectJueSe(){
    printf("��ѡ���ɫ\n");
    printf("1.����ҽ��\n");
    printf("2.����\n");
    printf("3.Ů����\n");
    printf("4.������\n");
    printf("5.�ѹ�����\n");
    printf("6.��������\n");
    //scanf("%d",&JieMian.JueSe);

}
void SelectXingZuo(){
    printf("��ѡ������\n");
    printf("1.����\n");
    printf("2.��ţ\n");
    printf("3.˫��\n");
    printf("4.��з\n");
    printf("5.ʨ��\n");
    printf("6.��Ů\n");
    printf("7.��ƿ\n");
    printf("8.��Ы\n");
    printf("9.����\n");
    printf("10.ĦЫ\n");
    printf("11.ˮƿ\n");
    printf("12.˫��\n");  
    //scanf("%d",&JieMian.XingZuo);
}
