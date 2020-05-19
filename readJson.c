# include <stdio.h> 
#include<stdlib.h>
# include <string.h> 
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


int main( int argc, char *argv[]) 
{ 
    int size;
    char *cp;
    cp=fileArray(argv[1],&size);
    
          
}