#include <stdio.h>
#include<string.h>
int main()
{
    
    char a[]="well";
    char b[]="done";
    char c[15];
    int i=0,j=0;
    while(a[i]!=0)
    {
        c[i]=a[i];
        i++;
    }
    while(1)
    {
        c[i]=b[j];
        if(c[i]=='\0')
        break;
        i++;j++;
    }
  printf("THE RESULTED OUTPUT IS: %s",c);
    
   
}