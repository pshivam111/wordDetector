#include<string.h>
int staTe =0,wcOunt=0;
int detectWord(char *wrd, char *para)
{
    int wLen,pLen;
    wLen=strlen(wrd);
    pLen=strlen(para);

    for(int i=0;i<pLen-wLen+1;i++)
    {
        staTe=0;
        for (int j = 0; j < wLen; j++)
        {
            if (*(wrd+j)==*(para+i+j))
                staTe++;            
            else
            {
                staTe=0;
                break;
            }
        }

        if (staTe==wLen)
        {
            wcOunt++;
            staTe=0;
        }      
        
    }

return wcOunt;
}
