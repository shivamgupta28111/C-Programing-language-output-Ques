#include <stdio.h>

void main()
{
    char s[]="man";
    int i;
    
    for(i=0;s[i];i++)
    printf("\n %c%c%c%c",s[i],*(s+i),*(i+s),i[s]);   // *(s+i) is used to print the address 

    
}

//output:
//mmmm
//aaaa
//nnnn



