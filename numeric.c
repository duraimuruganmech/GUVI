
#include <stdio.h>
int main() 
{
int len,digit=0,i;
char str[10];
scanf("%s",str);
len=strlen(str);
for(i=0;i<len;i++)
{
if(isdigit(str[i]))
{
digit=0;
}else{
digit=1;}
}
if(digit==0)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
