# include <stdio.h> 
# include <string.h> 
   
int  fileSize(FILE *f)
{
    fseek(f, 0L, SEEK_END); 
    long int res = ftell(f);
    printf("%d",res);
}
int main( int argc, char *argv[]) 
{ 
    char c;
    FILE *filePointer ; 
    filePointer = fopen(argv[1], "r") ; 

    if ( filePointer == NULL ) 
    { 
        printf( "Failed" ) ; 
    } 
    else
    { 
        c=fgetc(filePointer);
        while (c!=EOF)
        {
            printf("%c",c);
            c=fgetc(filePointer);
        }     
        fclose(filePointer) ; 
    } 
    return 0;         
} 