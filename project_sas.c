#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct{
        int id,j, m, a;
        char titre[20],des[100],statut[10];

}To_do;

To_do tach[100];
int cup = 0; //bach ikamal min bd

int isPastDate(int day, int month, int year) {
    time_t now;
    struct tm future_date;
    struct tm *current_date;

    time(&now);
    current_date = localtime(&now);

    future_date.tm_year = year - 1900;
    future_date.tm_mon = month - 1;
    future_date.tm_mday = day;
    future_date.tm_hour = 0;
    future_date.tm_min = 0;
    future_date.tm_sec = 0;

    return difftime(mktime(&future_date), mktime(current_date)) < 0;
}

void Echanger_tache(int echX, int echY){
		To_do Ech = tach[echX];
		tach[echX] = tach[echY];
		tach[echY] = Ech;
}

void Afficher_sort_trier_alpha(int num){
	for (int i = 0; i < num - 1; i++){
		for(int j = 0; j < num - i - 1; j++){
			if(strcmp(tach[j].titre,tach[j + 1].titre) > 0){
				Echanger_tache(j,j+1);
			}
		}
	}
}

void Afficher_sort_trier_deadline(int num){
		for(int i = 0; i < num - 1; i++){
			for(int j; j < num - i - 1; j++){
				if(tach[j].a > tach[j + 1].a || tach[j].a == tach[j+1] )
			}
		}
}
void Afficher_tache(int num){
                for (int i=0; i < num; i++){
                        printf("\nIdentifiant: %d\nTitre: %s\nDescription: %s\nDeadline: %d/%d/%d\nStatut: %s\n", tach[i].id,tach[i].titre, tach[i].des, tach[i].j, tach[i].m, tach[i].a, tach[i].statut);
                }
}

void Ajouter_tache(int num){
        int st;
	char choisire[10];
        for(int i = cup; i < cup + num; i++){
		tach[i].id = i + 1;
                printf("Entez Titre: ");
                scanf(" %[^\n]", tach[i].titre);

                printf("Entez Description: ");
                scanf(" %[^\n]", tach[i].des);

		do{

        	        printf("Entrez Deadline (DD/MM/YY): ");
	                scanf("%d/%d/%d", &tach[i].j, &tach[i].m, &tach[i].a);

			if(isPastDate(tach[i].j, tach[i].m, tach[i].a)){
				printf("La date est dans le passe. Veuillez entrer une date future.\n");
			} while(isPastdate(tach[i].j, tach[i].m, tach[i].a));
		do{
                printf("Enter statut :\n  1: a realiser.\n  2: en cours de realisation.\n  3: finalisee.  \nEntrez nombre: ");
                scanf(" %[^\n]", choisire);
		st = atoi(choisire);
                }while (st < 1 || st > 3);

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

                        }
                }
        cup += num;
}
void Menu_affichage(){
	int chx;
	char choisire[10];
	printf("1:Trier les tâches par ordre alphabétique.\n");
	printf("2:Trier les tâches par deadline.\n");
	printf("3:Afficher les tâches dont le deadline est dans 3 jours ou moins.");
	ici:
	printf("\nchoisir: ");
	scanf(" %[^\n]", choisire);

	chx = atoi(choisire);
	switch (chx){
		case 1:
			Afficher_sort_trier_alpha(cup);
			break;
		case 2:

			break;
		case 3:

			break;
		default:
			printf("choix invalide. essayer à nouveau .\n");
			goto ici;
	}
}
int main(){
    while (1)
    {
        int ch,n;
	char choisire[10];
        printf("\n\t\t Gestion de Taches ToDo\n");

        printf("0: Quitter\n");
        printf("1: Ajouter une nouvelle tache: \n");
        printf("2: Ajouter plusieurs nouvelles taches: \n");
        printf("3: Afficher la liste de toutes les taches (Identifiant, Titre, Description, Deadline, Statut): \n");
        printf("4: Modifier une tache: \n");
        printf("5: Supprimer une tache par identifiant: \n");
        printf("6: Recherer  les taches: \n");
        printf("7: Statistiques: \n");
        ici:
	printf("\nchoisir: ");
        scanf(" %[^\n]",choisire);
        ch = atoi(choisire);
        switch(ch){
                case 1:
                        Ajouter_tache(1);
                        break;
                case 2:
                        printf("entrez le nombre du tache: ");
                        scanf("%d",&n);
                        Ajouter_tache(n);
                        break;
                case 3:
			Menu_affichage();
                        Afficher_tache(cup);
                        break;
		default:
			printf("esseyez autre fois ");
			goto ici;
        }
    }

}

