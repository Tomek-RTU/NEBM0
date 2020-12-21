#include <stdio.h>

void test(int *paa)
{
	printf("mainiga a vertiba no test - %p\n",paa);
        printf("mainiga pa adrese no test - %d\n\n",*paa);
	*paa = *paa + 10;
}

int main()
{
 int a = 5;
 int *pa = &a;
// int **ppa = &pa;
/*
	printf("adreses vertiba pirms izmainam - %p\n",pa);
        printf("mainiga vertiba pirms izmainam - %d\n\n",a);

	*pa = *pa + 2;

	printf("adreses vertiba pec izmainam - %p\n",pa);
        printf("mainiga vertiba pec izmainam - %d\n\n",a);
*/
/*
	printf("mainiga a vertiba - %d\n",a);
        printf("mainiga pa adrese - %p\n",pa);
        printf("adreses ppa adrese - %p\n",ppa);
        printf("mainiga *ppa adrese - %p\n",*ppa);
        printf("mainiga **ppa vertiba - %d\n\n",**ppa);
*/

	printf("mainiga a vertiba no main pirms test - %d\n",a);
        printf("mainiga pa adrese no main pirms test - %p\n\n",pa);
	test(pa);
	printf("mainiga a vertiba no main pec test - %d\n",a);
        printf("mainiga pa adrese no main pec test - %p\n",pa);


return 0;
}
