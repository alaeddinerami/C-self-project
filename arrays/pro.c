#include<stdio.h>

int main (){
	float num[10];
	int i;
	float s,p,m;
	printf("entret 10 number : \n ");
	for (i = 0; i < 10; i++){
	   printf("num[%d]= ",i);
	   scanf("%f",&num[i]);
	}

	s = 0;
	p = 1;
	for(i = 0;i < 10;i++) {
	  s = s + num[i];
	  p = p * num[i];
	}
	m = s/10;

	printf("\nla somme des elements du tableau est : %.2f \n",s);
	printf("\nle produit des elements du tableau est : %.2f \n",p);
	printf("\nla moyenne  des elements du tableau est : %.2f \n",m);

return 0;
}

