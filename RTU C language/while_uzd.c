#include <stdio.h>
#include <math.h>

int main()
{
 while(0)
 {
 	printf("sis tekst nebus redzams\n");
	break;	
 }

 while(1)
 { 
        printf("sis ir bezgaligs teksts ar 'break'\n");
        break;
 }
 
 double a = 3.5e-1;
 double b = 0.5e-1;

 while(a<=1.0) //(vai a ir mazaks vai vienads ar 1.0)
 {
	printf("a = %.2f (vai ar peldoso punktu %e)\n",a,a);
	break; 
 }
 printf("Pirms cikla:\n");
 printf("a = %.20f (vai ar peldoso punktu %e)\n",a,a);

 //while(a<=1.0) //(apstaties pie viens)
 { 
        printf("a = %.2f (vai ar peldoso punktu %e)\n",a,a);
        a = a + b; 
 }
 double precision = b/2;
 while( fabs(a - 1.0) > precision ) //(apstasies tiesi pie viens, 'fabs' izmanto pie precizitates.
 { 
        printf("a = %.2f (vai ar peldoso punktu %e)\n",a,a);
        printf("a-1.0 = %.20f (vai ar peldoso punktu %e)\n",a-1.0,a-1.0);

        a = a + b; 
 }

 printf("Pec cikla:\n");
 printf("a = %.20f (vai ar peldoso punktu %e)\n",a,a);


return 0;
}
