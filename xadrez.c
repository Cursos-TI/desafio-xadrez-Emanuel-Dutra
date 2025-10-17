#include <stdio.h>

int main() {
   //aqui eu defini um valor para peça especifica e seu numero de casas.
int peca;
int casaT, casaB, casaR;

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
scanf("%d", &peca);
printf("\n");
	
//Para melhorar e o jogador mover as peças de forma individual, pensei em utilizar os ensinamentos do modulo anteior
// e usar uma switch para o jogador escolher qual seria a peça, além disso consegui usar o for, pois achei o ideal para realizar essa
// operação curta.
switch(peca) {
			case 1:
			printf("Voce escolheu a torre \n");
				for (int casaT = 0; casaT < 5; casaT++) {
					printf("Direita\n");
				}

				break;

			case 2:
			printf("Voce escolheu o bispo \n");
				for (int casaB = 0; casaB < 5; casaB++) {
					printf("Cima\n");
					printf("Direita\n");
				}

				break;

			case 3:
			printf("Voce escolheu a rainha \n");
				for (int casaR = 0; casaR < 8; casaR++) {
					printf("Esquerda\n");
				}

				break;

				default:
				printf("Opcao invalida!\n");
				break;

		}
		
    return 0;
}
