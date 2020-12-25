#include <stdio.h>
#define N 5
int main()
{
int array_a[N];
int array_b[] = {1,2,3}; 
int array_c[N] = {4,5,6}; 
int array_d[3][2] = {{1,2},{3,4},{5,6}}; 

	printf("a masiiva izmeers baitos - %lu un elementos %lu\n",sizeof(array_a),sizeof(array_a)/sizeof(int));
	printf("b masiiva izmeers baitos - %lu un elementos %lu\n",sizeof(array_b),sizeof(array_b)/sizeof(int)); 
	printf("c masiiva izmeers baitos - %lu un elementos %lu\n",sizeof(array_c),sizeof(array_c)/sizeof(int)); 
	printf("d masiiva izmeers baitos - %lu un elementos %lu\n\n",sizeof(array_d),sizeof(array_d)/sizeof(int));  

	printf("b masiiva adrese - %p\n",array_b);
        printf("b masiiva pirmaa (0.) elementa veertiiba - %d\n",*array_b);
        printf("b masiiva pirmaa (0.) elementa adrese - %p\n",&array_b[0]);
        printf("b masiiva pirmaa (0.) elementa veertiiba - %d\n\n",array_b[0]);

        printf("b masiiva pirmaa (1.) elementa adrese - %p\n",&array_b[1]);
        printf("b masiiva pirmaa (1.) elementa veertiiba - %d\n",array_b[1]);
        printf("b masiiva pirmaa (1.) elementa adrese - %p\n",&array_b+1);
        printf("b masiiva pirmaa (1.) elementa veertiiba - %d\n\n",*(array_b+1));

        printf("b masiiva 3. (NB!) elementa veertiiba - %d\n",array_b[3]);
        printf("b masiiva 3. (NB!) elementa adrese - %p\n\n",&array_b[3]);


return 0;
}
