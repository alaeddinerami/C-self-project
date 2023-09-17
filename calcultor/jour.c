#include<stdio.h>
int main(){
    char nombre;
    printf("Entrer nombre (1-7): ");
    scanf("%C",&nombre);

    switch(nombre){
        case '1':
            printf("lundi");
            break;
        case '2':
            printf("mardi");
            break;
        case '3':
            printf("mercredi");
            break;
        case '4':
            printf("jeudi");
            break;
        case '5':
            printf("vendredi");
            break;
        case '6':
            printf("samedi");
            break;
        case '7':
            printf("demanche");
            break;
        default: 
            printf("incorect");
           break;
    }
}