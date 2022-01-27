SOLUTION12


/*WAP to input any string and implement strlen( ) 
and strcmp( ) in a single program.*/


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char arr[20] , first[20] , second[20]; 
  int len,result;
  clrscr();
  printf("\n Enter any string:");
  Scanf("%s",&arr);
  len=strlen(arr);
  printf ("Length of string = %d", len) ; 
  printf(" \n Enter the first string");
  Scanf("%s",&first);
 printf(" \n Enter the second string "); 
 Scanf("%s",&second); 
  result = strcmp(first,second );
  printf(" \n The comparison result %d ",result);
  getch();
}

