/****************************************************************************
                                  ponteiros 
*****************************************************************************/
   
#include <stdio.h>

void quadrado ();
 
int main () 
{
  
 
int a;

    printf("insira valor para receber o quadrado dele: ");
    scanf("%i",&a);
    printf("\n quadrado de %i =",a);
    
    quadrado(&a);

    printf(" %i ",a);
 
} 

void quadrado (int *p1){
    
   *p1 = (*p1)*(*p1);
    
    
    
}


