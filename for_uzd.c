#include <stdio.h>
#include <math.h>

int main()
{
 for( ;0; )
 {
 	printf("sis teksts nebus redzams\n");
 }
 for( ;1; )
 {
        printf("sis teksts 'for' bus redzams\n");
	break;
 }
 double a, b, precision;
 for( a=0.35, b=0.05, precision = b/2 ; fabs(a - 1.0) > precision ; a+=b, b+=0.001 );//'fabs' ir modulis 
 {
        printf("a = %.2f (vai ar peldoso punkt %e; solis - %.3f)\n",a,a,b);
        //printf("a-1.0 = %.20f (vai ar peldoso punkt %e)\n",a-1.0,a-1.0);
 }








return 0;
}
