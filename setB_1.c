#include<stdio.h>
#include<string.h>
#include<math.h>
char str[100];
void delete(int i)
{
for(;str[i]!='\0';)
{
str[i]=str[i+2];
str[i+1]=str[i+3];
i+=2;
}
}

int main()
{
int n;
int i=0,len=0;
scanf("%d",&n);
scanf("%s",str);
for(len=0;str[len]!='\0';len++);
for(i=0;i<len;)
{
if((str[i]==str[i+1])&&(i>=0) && str[i]!='\0')
{
delete(i);
i--;
}
else
{
i++;
}
}
if(str[0]=='\0')
printf("Empty String\n");
else
printf("%s\n",str);
return 0;
}
