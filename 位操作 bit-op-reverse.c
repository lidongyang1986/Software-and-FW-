/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* Function to reverse bits of num */
unsigned int reverseBits(unsigned int num) 
{ 
    //unsigned int  NO_OF_BITS = sizeof(num) * 8; 
    unsigned int reverse_num = 0, i, temp; 
  
    for (i = 0; i < 32; i++) 
    { 
        temp = (num & (1 << i)); 
        if(temp) 
            reverse_num |= (1 << ((32 - 1) - i)); 
    } 
   
    return reverse_num; 
} 
  
/* Driver function to test above function */
int main() 
{ 
    unsigned int x = 0xe0007;  
    printf("%x", reverseBits(x)); 
    getchar(); 
} 

