/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void find_sequire(int ar[], int len)
{
    int i,j,k;
    /*
    for(i=0; i<len;i++)
    {
        printf("%d\n", arr[i]); 
    }
    */
    
    for(i=0; i<len;i++)   
        for(j=0; j<len;j++)   
            for(k=0; k<len;k++)   
        {
            int x = ar[i]*ar[i], y = ar[j]*ar[j], z = ar[k]*ar[k]; 
            if(x==y+z||y==x+z||z==x+y)
            printf("OK");
        }
    
    
}


int main()
{
    int arr[]={1,4,5,6,7,10,16,24};
    int len=sizeof(arr)/sizeof(arr[0]);
    
    find_sequire(arr, len);
    
    printf("arr size = %d", len);

    return 0;
}

