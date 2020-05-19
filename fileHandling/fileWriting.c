# include <stdio.h> 
# include <string.h> 
int main( ) 
{ 
    FILE *filePointer ;  

    filePointer = fopen("sample.txt", "w") ; 

    printf("The file is now opened.\n") ; 

    if ( strlen (  dataToBeWritten  ) > 0 ) 
    { 
        fputs(dataToBeWritten, filePointer) ;    
        fputs("\n", filePointer) ; 
    } 
    fclose(filePointer) ; 
    return 0;         
} 
