#include<stdio.h>
#include<string.h>

typedef struct{
        int id,j, m, a;
        char titre[20],des[100],statut[10];

}To_do;

void Afficher_tache(To_do tach[],int num){
                for (int i=0; i < num; i++){
                        printf("\nIdentifiant: %d\nTitre: %s\nDescription: %s\nDeadline: %d/%d/%d\nStatut: %s\n", i+1,tach[i].titre, tach[i].des, tach[i].j, tach[i].m, tach[i].a, tach[i].statut);
                }
}

void Ajouter_tache(To_do tach[],int num){
        int st;
        for(int i=0; i<num;i++){

                printf("Entez Titre: ");
                scanf("%s", tach[i].titre);

                printf("Entez Description: ");
                scanf("%s", tach[i].des);

                printf("Entrez Deadline (DD/MM/YY): ");
                scanf("%d/%d/%d", &tach[i].j, &tach[i].m, &tach[i].a);
                hna:
                printf("Enter statut ([1] a realiser, [2] en cours de realisation, [3] finalisee): ");
                scanf("%d",&st);

                        switch(st){
                                case 1:
                                        strcpy(tach[i].statut,"a realiser");
                                        break;
                                case 2:
                                        strcpy(tach[i].statut,"en cours de realisation,");
                                        break;
                                case 3:
                                        strcpy(tach[i].statut,"finalisée");
                                        break;
                                default:
                                        goto hna;
                        }
                }

}
int main(){
    while (1)
    {
        To_do tach[100];

        int ch,n;

        printf("\t\t Gestion de Taches ToDo\n");

        printf("1: Ajouter une nouvelle tache: \n");
        printf("2: Ajouter plusieurs nouvelles taches: \n");
        printf("3: Afficher la liste de toutes les taches (Identifiant, Titre, Description, Deadline, Statut): \n");
        printf("4: Modifier une tache: \n");
        printf("5: Supprimer une tache par identifiant: \n");
        printf("6: Modifier une tache: \n");
        printf("7: Modifier une tache: \n");
        printf("8: Statistiques: \n");
        scanf("%d",&ch);

        switch(ch){
                case 1:
                        Ajouter_tache(tach,1);
                        break;
                case 2:
                        printf("entrez le nombre du tache: ");
                        scanf("%d",&n);
                        Ajouter_tache(tach,n);
                        break;
                case 3:
                        Afficher_tache(tach,n);
                        break;
        }
    }


}

