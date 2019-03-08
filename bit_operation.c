/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int target=0x12aa5596;
    printf("target=%x\n",target);
    
    int start=8;
    int end=23;
    int mask_len=end-start+1;
    int mask=1;
    
    for(int i=1; i<mask_len; i++)
        {
         mask=mask<<1;
         mask|=1;
        }
        
    mask=mask<<start;
    printf("mask=%x\n",mask);
    
    int mask_rev=target&mask;
    printf("mask_rev=%x\n",mask_rev);
    
    int mask_rem=(~mask_rev)&mask;
    printf("mask_rem=%x\n",mask_rem);    

    int target_rem=(~mask)&target;
    printf("target_rem=%x\n",target_rem); 

    int final= mask_rem|target_rem;
    printf("final=%x\n",final); 
    
    
    unsigned char x=0x55;
    unsigned char no=~x;
    printf("complement=%x\n",no); 
    
    return 0;
}

