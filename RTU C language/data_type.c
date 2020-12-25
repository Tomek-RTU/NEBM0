//Kods dazadu datu tipu petisanai
//Informacijas vienibas, ar kuram opere cilveks - simboli un skaitli
//Simboli: burti, cipari, punktuacijas zimes utt. ASCII tabula - simboli VS binars kods

//skaitli: veseli skaitli, reali skaitli, kompleksie skaitli (diavas dalas - Re un Im)

//Informaciajs vieniba, ar kuru opere dators - bits (0/1)
//Informacijas vieniba, ar adresi (daotra) - baits 
//1 byte == 8 bits
//ASCII table - -one symbol == 1 byte
//unique binary combinations inside 1 byte - 256
//1 bits: 0, 1 - 2 kombinacijas
//2 biti: 00, 01, 10, 11 - 4 kombinacijas
//3 biti: 000, 001, 011, 100, 101, 110, 111 - 8 kombinaciajs
//x biti: .... - ( stavoklu skaits)^biti - (2)^8 = 256
//ASCII tabula - 256 unikali simboli (ASCII 1.dala -128 unikali simboli)

#include<stdio.h>
#define A 11

void main()
 {
 char a = 10;
//1. darbiba - RAM atmina tiek atveleta vieta viena char datu tipa mainiga glabasanai
//si vieta ir viennozimigi sakedeta ar identifikatoru "a" (bet, vietai ir ari adrese)
//saskana ar char datu tipu, vietas izmers - 1 baits
//Ka saja bridi izskatijas tas atminas apgabals: 0000 1010 vai 1111 1110 vai 0000 1010
// char a; // deklaresana 
// 2.darbiba - vertibas pieskirsana
// a = 10; // vertibas pieskirsana
// a -> 0000 1010
printf("Mainiga a vertiba (laika momenta t1) ir: %d\n",a);
a = 125;
printf("Mainiga a vertiba (laika momenta t2) ir: %d\n",a);
printf("Konstantes A vertiba (laika momenta t3) ir: %d\n",A);
//A = 126;\\konstanti mainit nevar
//printf("Mainiga a vertiba (laika momenta t4) ir: %d\n",A);
char mans_mainigais = 45;
//centisimies izmantot mnemoniskos nosaukumus - nosaukums atspogulo mainiga jegu vai noluku
a = 0x10;
printf("Mainiga a vertiba (laika momenta t4) ir: %d\n",a);// prognoze - 16 - OK 
printf("Mainiga a vertiba (laika momenta t5) ir: 0x%x\n",a);// prognoze - 10
printf("Mainiga a vertiba (laika momenta t6) ir: %o(oct)\n",a);// prognoze - 20 - OK
printf("Mainiga a vertiba (laika momenta t5) ir: 0x%x\n",a);// prognoze - 10

a = 65;
printf("Mainiga a vertiba  ir: %d\n",a); 
printf("Mainiga a vertiba  ir: 0x%x\n",a);
printf("Mainiga a vertiba  ir: %o (oct)\n",a);
printf("Mainiga a vertiba  ir ka simbols: %c\n",a);

a =  'k';
printf("Mainiga a vertiba  ir: %d\n",a); 
printf("Mainiga a vertiba  ir: 0x%x\n",a); 
printf("Mainiga a vertiba  ir: %o (oct)\n",a);
printf("Mainiga a vertiba  ir ka simbols: %c\n",a);

//int
int c;
printf("int datu tipa izmers baitos: %ld\n",sizeof(c));
//soreiz int atbilst 4 baitiem

//------------------------------------------------------------------------------------------
float d = 6.5;
printf("float datu tipa skaitla attelosana: %f\n",d);
printf("float datu tipa skaitla attelosana: %.2f\n",d);
printf("float datu tipa izmers baitos: %ld\n",sizeof(d));

double e = 10;
printf("double datu tipa skaitla attelosana: %.2f\n",e);
printf("double datu tipa izmers: %ld\n",sizeof(e));









 }
