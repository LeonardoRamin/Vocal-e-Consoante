#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char letra;
	
	printf("Digite uma letra:");
	scanf("%c",&letra);
	
	if(letra!='A'&&letra!='a'&&letra!='E'&&letra!='e'&&letra!='I'&&letra!='i'&&letra!='O'&&letra!='o'&&letra!='U'&&letra!='u'){
		printf("Consoante");
	}
	else{
		printf("Vocal");
	}
	return 0;
}
