/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    printf("Enter an alphabet \n ");
    char alphabet ;
    
   scanf ("%c" , &alphabet) ;
    
    switch (alphabet) 
    {
      case 'a' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      
      case 'A' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      case 'e' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      case 'E' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      case 'i' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      case 'I' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      case 'o' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      
      case 'O' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      
      case 'u' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      case 'U' :
      {
      printf ("%c is vowel " , alphabet) ;
      break ; 
      }
      
      
      
      default:
      {
        printf ("%c is not vowel " , alphabet) ;
      }
    }
    
    return 0 ;
}