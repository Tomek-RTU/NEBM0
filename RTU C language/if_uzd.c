#include <stdio.h>

 int main ()

 int a = 0;
 int b = 0;
 int c = 0;
 char d;
 printf("Ievadiet 1.skaitli: ");
 scanf("%d", &a);
 printf("Ievadiet 2.skaitli: ");
 scanf("%d", &b);
 printf("Ievadiet 3.skaitli: ");
 scanf("%d", &c);
 printf("Kada seciba tos sakartot - augosa (a) vai dilstosa (d)?: \n");
 scanf("%s", &d);

 printf("vai simbols ir a %d\n",d=='a');
 if (d == 'a') 
 
 if(a>b>c) {
 printf("%d %d %d\n", a, b, c);
 }
 else if(a>c>b) {
 printf("%d %d %d\n", a, c, b);
 }
 else(

 return 0;
}

 
