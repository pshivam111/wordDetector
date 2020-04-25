#include<stdio.h>
#include<string.h>
int main()
{
char s[20];
char p[]="My name is shivam";
scanf("%s",s);
/*
printf("\n %s",s);
printf("%d",strlen(s));
printf("%d",strlen(p));//*/
int state=0;
for(int i=0;i<strlen(p)-strlen(s)+1;i++)
{ 
    state=0;
    for(int j=0;j<strlen(s);j++)
    {
        // printf("\n J %d",j);
        if(s[j]==p[i+j])
        {
            // printf("\n%c",s[j]);
            // printf("\n%c",p[i+j]);
            state++;
            // printf("\n%d",state);
        }
        else
        {
            state=0;
            break;
        }
        
    }
    
    if(state==strlen(s))
    {
        printf("Detected");
        state=0;
        break;
    }
      
    
}
}