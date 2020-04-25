#include<stdio.h>
#include<string.h>
int main()
{
char s[20];
char p[]=" My name is shivam";
scanf("%s",s);
printf("\n %s",s);
printf("%d",strlen(s));
int state=0;
for(int i=0;i<strlen(p);i++)
{   if(state==strlen(s))
    {
        printf("Detected");
    }
    else
    {
        
    }
}

}
