#include<stdio.h>

int main (){
	int i, T[10];

	for ( i = 0;i < 3;i++){
		printf("%d: ",i+1);
		scanf("%d",&T[i]);
	}
	int n ;
	printf("Entrez n : ");
	scanf("%d",&n);
		int x = 0;
		for( i = 0; i < 3; i++){
			if(n==T[i]){
			x = 1;
			break ;}
	}
		if(x==1){
			printf("%d se trouve dans T \n",n);
		}
		else{
			printf("%d ne se trauve pas dans T \n",n);
		}

}
