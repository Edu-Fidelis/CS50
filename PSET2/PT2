/******************************************************************************
DEUS É Bom

CS50 - Pset2 - Parte 2

                        Criptografia de César
    
                                                                JESUS te ama
*******************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>


int
main (int argc, char*argv[])
{
	char p[50], c[50];
	int k;
	
	printf("Digite a frase: ");
	scanf("%s", &p);
	
	printf("Digite a chave: ");
	scanf("%d", &k);
	
	if(k>=27){
		k = k % 26;
	}
	
	int n = strlen(p);
	
	for (int i = 0; i < n; i++)
	{
 		c[i] = p[i] + k;
 		printf("%c", c[i]);
	}
	
}
