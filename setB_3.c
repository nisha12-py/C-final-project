#include <stdio.h>
#include <stdlib.h>
#define char_size  1  
#define int_size ( sizeof(int) * char_size)

void int_to_binary(unsigned n)
{
	short int iposition;
	
	for (iposition = (int_size -1) ; iposition >= 0 ; iposition--)
	{
	  (n & (1 << iposition))? printf("1"): printf("0");	
	}
	
}

unsigned int reverseBits(unsigned int m)
{
    unsigned int count = (int_size -1); 
    unsigned int tmp = m;        
	     
    m >>= 1; 
    
    while(m)
    {
       tmp <<= 1;    
	      
       tmp |= m & 1; 
       
       m >>= 1; 
       
       count--;
    }
    
    tmp <<= count; 
    
    return tmp;
}
 
int main()
{
    unsigned int data = 0;
    unsigned int Ret = 0;

    scanf("%u",&data);
    printf("Before : ");
    int_to_binary(data);
     
    Ret = reverseBits(data);
   
    printf("\nAfter  : " );
    int_to_binary(Ret);
    printf("\n");
return 0;
}

