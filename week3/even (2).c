/*WAp to find the given number even or not*/
#include <stdio.h>//header file including
 int main()//main function defination
{
 int a;//decleration of variable
 int i=1;//initialization
 printf("give an input:");//asking to user toenter the input
 scanf("%d",&a);//reading the input from the user
 while(i<=a)//creating  loop until the conditions satisfies
 {
     if(i%2==0)//if condition is ture then it will enters into staements
     {
         printf("%d \t",i);//printing the integer
     }
     i++;//incrementing
 }
 return 0;
}
   
