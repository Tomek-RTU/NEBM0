#include <stdio.h>

int main ()
{
 char a = 'A';
 int b = 5;
 double c = 3.6;


	printf("sizeof funkcijas rezultaata izmeers a: %lu\n",sizeof(sizeof(a)));
	printf("sizeof funkcijas rezultaata izmeers b: %lu\n",sizeof(sizeof(b)));  
	printf("sizeof funkcijas rezultaata izmeers c: %lu\n\n",sizeof(sizeof(c)));

	printf("a mainiigaa adrese - %p\n",&a);
        printf("a mainiigaa adreses izmeers - %lu\n",sizeof(&a));
        printf("veertiiba peec sis adreses - %d\n",*(&a));
        printf("veertiibas izmeers baitos peec adreses - %lu\n\n",sizeof(*(&a)));

	printf("b mainiigaa adrese - %p\n",&b);
        printf("b mainiigaa adreses izmeers - %lu\n",sizeof(&b));
        printf("veertiiba peec sis adreses - %d\n",*(&b));
        printf("veertiibas izmeers baitos peec adreses - %lu\n\n",sizeof(*(&b)));

	printf("c mainiigaa adrese - %p\n",&c);
        printf("c mainiigaa adreses izmeers - %lu\n",sizeof(&c));
        printf("veertiiba peec sis adreses - %f\n",*(&c));
        printf("veertiibas izmeers baitos peec adreses - %lu\n\n",sizeof(*(&c)));



 return 0;
}

