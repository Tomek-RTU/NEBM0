#include <stdio.h>
#define N 4

int main()
{
char rinda_1[N] = "abc";
char rinda_2[] = {'d','e','f'};
char rinda_3[] = "ghijk";
char *rinda_4 = "lmnop";

	printf("Pirmas simbolu rindas izmers baitos - %lu un simbolos (elementos) - %lu\n",sizeof(rinda_1), sizeof(rinda_1)/sizeof(char));
        printf("Otras simbolu rindas izmers baitos - %lu un simbolos (elementos) - %lu\n",sizeof(rinda_2), sizeof(rinda_2)/sizeof(char));
        printf("Tresas simbolu rindas izmers baitos - %lu un simbolos (elementos) - %lu\n",sizeof(rinda_3), sizeof(rinda_3)/sizeof(char));
        printf("Ceturtas simbolu rindas izmers baitos - %lu\n\n",sizeof(rinda_4));

	for(int i=0;i<(N+2);i++)
	{
		printf("rinda_1: %d. simbola dec kods - %d\n",i,rinda_1[i]); // *(rinda_1+i)
	}
        printf("\n");
        for(int i=0;i<3;i++)
        {
                printf("rinda_2: %d. simbola dec kods - %d\n",i,rinda_2[i]); 
        }
        printf("\n");
        for(int i=0;i<6;i++)
        {
                printf("rinda_3: %d. simbola dec kods - %d\n",i,rinda_3[i]); 
        }
        printf("\n");
        for(int i=0;i<8;i++)
        {
                printf("rinda_4: %d. simbola dec kods - %d\n",i,rinda_4[i]); 
        }
        printf("\n");	
        char *darba = rinda_4;
	int garums = 0, i = 0;
	while( *darba != '\0' )
	{
		garums++;	
		printf("rinda_4: %d. simbola dec kods - %d (%c)\n",i,*darba,*darba);
		darba = darba + 1;
		i++; 
	}
	garums = garums +1;
		printf("Ceturtas simbolu rindas izmers baitos - %lu un simbolos (elementos) - %d\n",garums*sizeof(char),garums);
	

return 0;
}
