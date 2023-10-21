#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
char palavra[8] = "MELANCIA";
char chutes[8];
char chute;
int tentativas = 0;
int acabou = 0;
 
do{

for(int i = 0; i < strlen(palavra);i++){
	
	int achou  = 0;

	for (int j = 0 ; j < tentativas;j++){
		if(chutes[j] == palavra[i])	{
			achou = 1;
			break;	
		}
	}
	
	if(achou) {
		printf("%c",palavra[i]);
	}else{
		printf("_ ");
	}
}

printf("\n");
char chute;
scanf(" %c",&chute);	
chutes[tentativas] = chute;
tentativas++;

acabou = 1;

}while(acabou);

}
