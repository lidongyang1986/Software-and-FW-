int pow(int a, int b) 
{ 
if (b == 0) 
	return 1; 
int answer = a; 
int increment = a; 
int i, j; 
for(i = 1; i < b; i++) 
{ 
	for(j = 1; j < a; j++) 
	{ 
		answer += increment; 
	} 
	increment = answer; 
} 
return answer; 
} 

/* driver program to test above function */
int main() 
{ 
printf("\n %d", pow(5, 3)); 
getchar(); 
return 0; 
} 
