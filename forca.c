#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
char palavra[8] = "MELANCIA";
char chutes[8] = "MELANCIA";
char chute;
int acertou = 0; 
 


for(int i = 0; i < strlen(palavra);i++){
	if(chutes[i] == palavra[i])	{
		printf("%c",palavra[i]);
			
	}else{
		printf("_ ");
	}
	
}	



}
