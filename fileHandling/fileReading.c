# include <stdio.h> 
# include <string.h> 
   
int main( ) 
{ 

    FILE *filePointer ; 

    char dataToBeRead[50]; 

    filePointer = fopen("sample.txt", "r") ;

    while( fgets ( dataToBeRead, 50, filePointer ) != NULL ) 
        printf( "%s" , dataToBeRead ) ; 

    fclose(filePointer) ; 

    return 0;         
} 