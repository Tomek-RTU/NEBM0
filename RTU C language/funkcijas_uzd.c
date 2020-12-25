#include <stdio.h>


void mana_pirma_function();
int mana_otra_function();
void mana_tresa_function(int in_a_3);
double mana_ceturta_function(int in_a_4a, int in_a_4b);

int main()
{
	int a_main;
	double result_main;
	printf("Hello! No manas MAIN funkcijas.\n");
	mana_pirma_function();
	printf("output no OTRAS funkcijas rezultata %d ieks MAIN funkcijas\n",mana_otra_function());
	a_main = mana_otra_function();
	printf("a_main = %d no MAIN funkcijas\n",a_main);
	mana_tresa_function(100);
	result_main = mana_ceturta_function(4,5);
	printf("result_main = %.3f no CETURTAS funkcijas\n",result_main);

return 0;
}

void mana_pirma_function()
{
        printf("Hello! No manas PIRMAS funkcijas\n");
}

int mana_otra_function()
{
	int a_2 = 10;
        printf("Hello! No manas OTRAS funkcijas\n");
	printf("a_2 = %d no OTRAS funkcijas\n",a_2);
	return a_2;
}

void mana_tresa_function(int in_a_3)
{
        printf("Hello! No manas TRESAS funkcijas\n");
        printf("in_a_3 = %d no TRESAS funkcijas\n",in_a_3);
}

double mana_ceturta_function(int in_a_4a, int in_a_4b)
{
	double result = (float)in_a_4a / in_a_4b;
        printf("Hello! No manas CETURTAS funkcijas\n");
        printf(" %d / %d = %.3f no CETURTAS funkcijas\n",in_a_4a, in_a_4b, result);
	return result;
}
