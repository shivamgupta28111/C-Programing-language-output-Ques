//                                                         ZOHO C output questions


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

#include <stdio.h>

void main()
{
    char *p="Phone";
    p++;
    char c=(*p);
    ++c;
    p--;
    printf("%c %s",c,p++);
    
}

//output: 


void main()
{
    int c[]={2,3,4,6,5};
    
    int j,*p=c,*q=c;
    
    for(j=0;j<5;j++){
        printf("%d",*c);
        ++q;}
        
        for(j=0;j<5;j++){
            print("%d,*p");
            ++p;
        }
    }
}

//output




