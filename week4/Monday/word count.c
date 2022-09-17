/*
1.declare and initialize the variables to count the words.
2.read the string .
3.compare the given sentence untill the EOS.
4.if a space is encountered then the count should be incremented.
5.print the count value to know the word count.
*/
#include <stdio.h>
#include <string.h>
 
void main()
{
     int count = 1, i=0;
 
    char str[200];char b=' ';
   gets(str);
    
   while(str[i]!='\0')
   {
       if (str[i]==b)
       {
       count++;
       }
       i++;
   }
   
    printf("Number of words in given string are: %d\n", count );
}