

#include <stdio.h>
int main()
{
    
    
    printf ("Enter three character \n" );
    

    float A ; 
    float B; 
    float C; 
    
    scanf ("%f %f %f" ,&A ,&B , &C) ;
     
    if (A>B && A>C && A!=B && A!=C  ) printf (" Largest number is %f" , A) ; 
   else if (B>A && B>C) printf (" Largest number is %f" , B) ; 
    else if (C>A && C>B) printf (" Largest number is %f" , C) ; 
    
    
}