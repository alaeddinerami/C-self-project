#include<stdio.h>

int main(){

	char T[9]= {'1','2','3','4','5','6','7','8','9'};
	int i,j = 0;
	char x;

for (i = 0; i < 9;i++){
	
	 printf("%c" ,T[i]);
	  if(T[i] == '3' || T[i] == '6')
	     printf(" \n");

	}
	printf("\n");


	printf("entrer le caractair x : ");
	scanf("%c",&x);
	for (j=0;j<9;j++){

	if (x == T[j])
		T[j] = x;
	
	for (int y = 0; y < 9;i++){
        
         printf("%c" ,T[y]);
          if(T[y] == '3' || T[y] == '6')
             printf("\n");

        }
	}
return 0;
}
