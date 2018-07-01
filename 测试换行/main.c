#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *rFile;
    
    char num[20]="";
    char let[20]="";
    
    if((rFile=fopen("/Users/s20171105115/Desktop/test.txt","r+"))==NULL)
    {
        printf("\nFailed to open the data file.\n");
        exit(1);
    }
    
    while(fscanf(rFile,"%s %s",num,let)!=EOF)
    {
        printf("%s %s\n",num,let);
    }
    
    
    return 0;
}
