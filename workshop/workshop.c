#include<stdio.h>
typedef struct{
    char nom[20];
    char prenom[20];
    int date_naissance;
}student;
void affichage(student s[],int num){
    for (int i = 0; i < num; i++)
    {
        printf("Nom: ");
        scanf("%s", s[i].nom);

        printf("Prenom: ");
        scanf("%s", s[i].prenom);

        printf("Date de naissance: ");
        scanf("%d", &s[i].date_naissance);
    }
    
}
int main(){
    int num ;
    printf("entez num : ");
    scanf("%d", &num);
    student s[num];
    affichage(s, num);
}
