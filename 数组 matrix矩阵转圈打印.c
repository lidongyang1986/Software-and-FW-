/* This code is adopted from the solution given 
@ http://effprog.blogspot.com/2011/01/spiral-printing-of-two-dimensional.html */
//https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/

#include <stdio.h> 
#define R 3 
#define C 6 

void spiralPrint(int m, int n, int a[R][C]) 
{ 
	int i, k = 0, l = 0; 

	/* k - starting row index 
		m - ending row index 
		l - starting column index 
		n - ending column index 
		i - iterator 
	*/

	while (k < m && l < n) 
	{ 
		/* Print the first row from the remaining rows */       //sequencial x row
		for (i = l; i < n; ++i) 
		{ 
			printf("%d ", a[k][i]); 
		} 
		k++; 
printf("\nkend\n ");

		/* Print the last column from the remaining columns */
		for (i = k; i < m; ++i)                                 //sequencial y colums
		{ 
			printf("%d ", a[i][n-1]); 
		} 
		n--; 
printf("\nnend\n ");

		/* Print the last row from the remaining rows */        //reverse x row
		if ( k < m) 
		{ 
			for (i = n-1; i >= l; --i) 
			{ 
				printf("%d ", a[m-1][i]); 
			} 
			m--; 
		} 
printf("\nmend\n ");

		/* Print the first column from the remaining columns */
		if (l < n) 
		{ 
			for (i = m-1; i >= k; --i)                          //reverse y colums
			{ 
				printf("%d ", a[i][l]); 
			} 
			l++;	 
		}
printf("\nlend\n ");
	} 
} 

/* Driver program to test above functions */
int main() 
{ 
	int a[R][C] = { {1, 2, 3, 4, 5, 6}, 
		{7, 8, 9, 10, 11, 12}, 
		{13, 14, 15, 16, 17, 18} 
	}; 

	spiralPrint(R, C, a); 
	return 0; 
} 

