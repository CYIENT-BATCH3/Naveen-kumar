/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int
main ()
{
  int n,r,s=0,temp;                     //decleration of variable
  printf ("enter a 3 digit number =");
  scanf ("%d",&n);                      //reading input from user
  temp = n;                             //storing original number into temp variable
  while (n > 0)
    {
      r = n % 10;                       //storing reminder
      s = s + (r * r * r );
      n = n / 10;
    }
  if (temp == s)                        // comparing original and processed result 
  {
    printf ("%d is a armstrong  number ",temp);
  }
  else
  {
    printf ("%d is not armstrong number",temp);
  }
  return 0;
}
