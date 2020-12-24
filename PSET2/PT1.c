/******************************************************************************
DEUS É Bom e Fiel! Ɛ>

CS50 - Pset 2, parte 1

                        Cantando uma música chata!

Feito por: Edu Fidelis
    
                                                            JESUS te ama Ɛ>
*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int garrafasdecerveja;
  printf ("Quantas garrafas de cerveja? ");
  scanf ("%d", &garrafasdecerveja);
  
  if(garrafasdecerveja<0){
      printf("Não existe garrafa negativa, tente outra vez!");
      return 1;
  }
  
  
  if(garrafasdecerveja>0){
  do
    {
      printf
	("\n%d garrafas de cerveja no muro, bebo uma, jogo no lixo, %d garrafas no muro",
	 garrafasdecerveja, garrafasdecerveja - 1);
      garrafasdecerveja -= 1;
    }
  while (garrafasdecerveja > 1);
  }



  if (garrafasdecerveja == 1)
    {
      printf("\n1 garrafa de cerveja no muro, bebo uma, jogo no lixo, nenhuma garrafa no muro");
    }
  else 
    printf("Nenhuma garrafa no muro");


  return 0;
}
