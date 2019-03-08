/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>




//根据位数返回10的整倍数，如2位则返回10，3位返回100

int my_base(int iBitCount)

{
	if (1 == iBitCount)
	{
		return 1;
	}
	else
	{
		return 10 * my_base(--iBitCount);
	}
}

 

int my_atoi(const char * pstr)

{
	int sum = 0;
	if (!pstr)  //指针若为空返回0
	{
		return sum;
	}

	const char * p = pstr;
	const char * pTemp;
	int iBitcount = 0; //有效数字字符位数
	int sign = 1;  //符号
/*
	//让指针指向不为' '的字符
	while (*p == ' ')  
	{
		++p;
	}

 

	//首先判断转换后的整数是为正数还是负数

	if (*p == '-' || *p == '+') 
	{
		if (*p == '-')
		{
			sign = -1;
		}
		++p;
	}

 

	//若除去符号位的第一位不为数字字符，则返回0

	if (*p < '0' || *p > '9') 
	{
		return sum;
	}

 

	//如果除去符号位后字符串第一位为‘0’，则找到其第一个不为‘0’的位置

	if (*p == '0')  

	{

		while (*p == '0')

		{

			p++;

		}

		pTemp = p;

		p = pTemp;  //p指向字符串第一个不为'0'的位置

	}
*/
	pTemp = p;  //保存p的值，这里的p始终指向字符串第一个不为'0'的位置

 

	//统计字符串转换为整数后的位数,扫描字符串的每一位必须保证是数字字符
	while (*p != '\0' && (*p >= '0' && *p <= '9'))  
	{
		++iBitcount;
		++p;
	}

 
	p = pTemp; //p指向字符串第一个不为'0'的位置
	while (*p != '\0' && (*p >= '0' && *p <= '9'))
	{
		sum += (*p - '0') * my_base(iBitcount);  //*p - '0'将字符转换为对应的整型数字，并乘以该字符转换为整数后其对应的整数基数
		++p;
		--iBitcount;
	}

	return sum * sign;  //返回值要带上符号

}

int main()
{
    char cstring[20];
    cstring[0]='1';
    cstring[1]='3';
    cstring[2]='4';
    cstring[3]='9';   
    printf("string=%d\n", my_atoi(cstring));

    return 0;
}

