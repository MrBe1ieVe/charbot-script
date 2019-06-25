#include <stdio.h>
#include <string.h>
struct GetIn
{
 char KeyWord[20];
 char get[20];
}in;
void input()
{
 gets(in.get);
 strcpy(in.KeyWord,in.get);
}
