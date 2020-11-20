#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//#define VIE 9

/* FEATURE
-Afficher le mot caché
-Vérification de la lettre proposé par l'utilisateur
*/

void initmotsecret (char motsecret [];);
void cachemotsecret (char tabmodif [];);
void saisilettre (char *lettre);
int wronglettre (char lettre, char motsecret[], char tabmodif[]);
int checklettre (char lettre, char motsecret[], char tabmodif[] );



int main()
{
    char *lettre;

    char motsecret [20];

    char tabmodif [20];

    int VIE = 9;

    int check;

    printf ("Bienvenue dans le pendu ! \n");

    initmotsecret(motsecret);

    cachemotsecret(tabmodif);

    do{
    fflush(stdin);

    saisilettre (&lettre);

    check = checklettre (lettre, motsecret, tabmodif);

    if (check == 0){
        VIE --;
        printf("Il vous reste :%d\n", VIE);
        }
    }while(VIE > 0);
    if(VIE == 0){
        printf ("ET C'EST LOOSE ! \n");
    }
    /*for (tabmodif){
        if{
            tabmodif = motsecret;
            printf("ET C'EST LA WIN");
        }
    }*/


    return 0;
}

void initmotsecret( char motsecret []){
    strcpy (motsecret, "VOITURE\n");
}

void cachemotsecret (char tabmodif []){
    strcpy (tabmodif, "*******\n");
    printf ("%s",tabmodif);
}



void saisilettre (char *lettre){

        printf ("Saisir un charactere \n");
        *lettre = getchar();


        /* if (lettre = (motsecret))
         {
            printf("%s", tabmodif);
         }
          else
         {

            printf ("Mauvaise lettre\n");
            scanf  ("%s", lettre);
         }*/
}

int checklettre (char lettre, char motsecret[], char tabmodif[]){

       int checked = 0;


       for (int i=0; i<strlen(motsecret); i++){

        if(motsecret[i] == lettre){

                tabmodif [i] = lettre;
                printf("Bonne lettre\n");

                checked = 1;
        }

         }
         printf ("%s", tabmodif);

         return checked;



          /*for (int i=0; i<strlen(motsecret); i++){
        if(motsecret[i] == lettre2){
                tabmodif [i] = lettre2;
                printf("Bonne lettre\n");
        }
         }
         printf ("%s", tabmodif);*/
}

/*int wronglettre (char lettre, char motsecret[], char tabmodif[]){

    for (int i=0; i<strlen(motsecret); i++){
        if(motsecret[i] != lettre){
            return 0;
        }
    }
}*/

