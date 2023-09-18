#include<stdio.h>
int main(){
	float a[3],b[3];
	int i;
	float p;


	printf("entrer les deaux vecteur : \n");

	for(i = 0; i < 3; i++){
		printf("a[%d]: ", i);
		scanf("%f",&a[i]);
		printf("b[%d]: ", i);
		scanf("%f",&b[i]);
	}
	p = 0;
	for(i = 0; i < 3; i++){
	p = p + a[i] * b[i];
	}
	printf("le produit scalaire des deux vecteurs est : %.2f \n",p);

return 0;
}
