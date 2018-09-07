#include <stdio.h>

#define sum(a, b) a + b

void test(int);

void
main()
{
	//test(5);
	printf("%s \n", __TIME__);
	printf("%d \n", sum(1, 2));
}

void test(int num)
{
	printf("%d", num);
}