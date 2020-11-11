#include<stdio.h>

int main(){
	
int saque, menu, saldo=300, valorAtualizado, i,  nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0; 

	do{
		printf("\nInforme a opcao desejada:\n");
		printf("1 - Para ver saldo.\n");
		printf("2 - Para Sacar uma quantia.\n");
		printf("0 - Para sair.\n");
		scanf("%i", &menu);
	
		switch(menu){
			
			case 1:{
				printf("Saldo: %i\n\n", saldo);
				break;
			}
			case 2:{
				printf("Informe o Valor do saque: ");
				scanf("%i", &saque);
				
				if(saldo>saque){
					saldo = saldo-saque;
					printf("Saque realizado com sucesso!\n");
					printf("Saldo restante: %i\n\n", saldo);
					
					if(saque % 2 == 1){
						saque = saque - 5;
						nota5++;
					}
						while (saque >= 100){
							nota100++;
							saque -= 100;
						}	
						while (saque >= 50){
							nota50++;
							saque -= 50;
						}
						while (saque >= 20){
							nota20++;
							saque -= 20;
						}
						while (saque >= 10){
							nota10++;
							saque -= 10;
						}
						while (saque >= 2){
							nota2++;
							saque -= 2;
						}
						
						printf("Notas a serem liberadas:\nNotas de 100: %i\nNotas de 50: %i\nNotas de 20: %i\nNotas de 10: %i\nNotas de 5: %i\nNotas de 2: %i\n", nota100, nota50, nota20, nota10, nota5, nota2);			
					}nota100=0; nota50=0; nota20=0; nota10=0; nota5=0; nota2=0;
				}if (saque>saldo){
					printf("Saldo insuficiente.");
				}	
				break;
			}
	}while(menu!= 0);
		
}


