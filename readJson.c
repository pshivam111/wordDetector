# include <stdio.h> 
#include<stdlib.h>
# include <string.h> 
int size;
int  fileSize(FILE *f)
{
    fseek(f, 0, SEEK_END); 
    long int res = ftell(f);
    return res;
}

char *fileArray(char *filename,int *N)
{
      char *cp,*s;
    FILE *filePointer = fopen(filename, "r") ; 
    
    if ( filePointer == NULL )  
        printf( "Failed" ) ; 
    else
    {
        int size=fileSize(filePointer);
        *N=size;
		fseek(filePointer, 0, SEEK_SET);
        cp=(char *)malloc(size*sizeof(char)); 
        *cp=fgetc(filePointer);
        s=cp;

        while (*cp!=EOF)
        {
            cp++;
            *cp=fgetc(filePointer);   
        }     
        fclose(filePointer) ; 
    }
    return s;
}

int getPost(char *ch,char a, int n)
{
    int count =0,i=0;
    while (count!=n && i<size)
    {
        if(*(ch+i)==a)
            count++;
        i++;
    }
    if(i==size)
        return -1;
    else
        return (i-1);  
}

int main( int argc, char *argv[]) 
{ 
    
    char *cp;
    cp=fileArray(argv[1],&size);
    printf(" %d ",getPost(cp,'"',2));
    return 0;          
}