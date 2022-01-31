SOLUTION-12




#include <stdio.h> 
#include<conio.h>
 #include <string.h>
 Void main()
 {
    char str[20]; 
    int i, len, vowel, consonant;
   clrscr();
    /* Input string from user */ 
    printf("Enter any string: ");
     gets(str); 
    vowel = 0;
    len = strlen(str); 
    for(i=0; i<len; i++)
     { 
    
     /* If the current character(str[i]) is a vowel */ 
    if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i] =='A' || 
    str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ) 
    vowel++; 
    
    } 
     
    printf("Total number of vowel = %d\n", vowel);
     getch(); 
    }