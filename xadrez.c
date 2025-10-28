#include <stdio.h>

//função para realizar a recursividade
void moverTorre(int casas){
	if (casas <= 0){
		return;
	}
		printf("Direita\n");
		moverTorre(casas - 1);
}


void moverRainha(int casas){
	if (casas <= 0){
		return;
	}
		printf("Esquerda\n");
		moverRainha(casas - 1);
}

void moverBispo(int casas){
	if (casas <= 0){
		return;
	}
	for (int i = 0; i < casas; i++)
	{
		printf("Cima\n");
		printf("Direita\n");
	}
			
}	





int main() {
   //aqui eu defini um valor para peça especifica e seu numero de casas.
int peca;
int casaT = 5;
int casaB = 5;
int casaR = 8;
int casaC = 1; // esse ficou separado para facilitar no processo do decremento.

printf("#########################\n");
printf("### bem vindo ao jogo ####\n");
printf("######     de     #######\n");
printf("######   xadrez    #######\n");
printf("#########################\n");
printf("\n");
printf("Para pode jogar, voce precisa selecionar uma peca abaixo: \n");
printf("Torre (digite 1).\n");
printf("Bispo (digite 2).\n");
printf("Rainha (digite 3).\n");
printf("Cavalo (digite 4).\n");
scanf("%d", &peca);
printf("\n");
	
//Aqui foi bem simples, cada case do switch volta e puxa as informações colocada no void.

switch(peca) {
			case 1:
			printf("Voce escolheu a torre \n");
				moverTorre(casaT);

				break;

			case 2:
			printf("Voce escolheu o bispo \n");
				moverBispo(casaB);

				break;

			case 3:
			printf("Voce escolheu a rainha \n");
				moverRainha(casaR);

				break;

			case 4:
				printf("Voce escolheu o cavalo \n");
					while (casaC--)
						for (int i = 0; i < 2; ++i)
						{
							printf("cima\n");
						}
							printf("Direita\n");

				break;

				default:
					printf("Opcao invalida!\n");
					break;

	}
		
    return 0;
}
