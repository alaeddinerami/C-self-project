#include<stdio.h>

int main(){
	char V[6];;
	int i;

	V[0]='A';
	V[1]='E';
	V[2]='I';
	V[3]='U';
	V[4]='O';
	V[5]='Y';


	printf("les voyelles de l'aphabet francais sont \n");

	for(i = 0;i < 6;i++){
	printf("%c \n",V[i]);}
}
