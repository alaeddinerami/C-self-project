#include<stdio.h>

int main(){

	int T[10];
	int i,n;
	int x = 0;
	printf("Entrer les elements : \n");
	for(i = 0; i < 10; i++){
		printf("T[%d] =  ",i);
		scanf("%d",&T[i]);
	}

	printf("Entrer la valeur de n : ");
	scanf("%d",&n);
		for(i=0 ; i < 10;i++){
			if(n==T[i])
			x++;
		}
		if(x==0)
		printf("%d ne traove pas ",n);
		else
		  printf("%d se touve " ,n);
}
