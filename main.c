#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/* FEATURE
-Afficher le mot caché
-Vérification de la lettre proposé par l'utilisateur
*/

void initmotsecret ();
void cachemotsecret ();
void saisilettre (char *lettre, char *lettre2);
void checklettre (char lettre, char lettre2);

    char motsecret [20];

    char tabmodif [20];

int main()
{
    char lettre;

    char lettre2;

    printf ("Bienvenue dans le pendu ! \n");

    initmotsecret();

    cachemotsecret();

     saisilettre (&lettre, &lettre2);

    checklettre (lettre, lettre2);


    return 0;
}

void initmotsecret(){

    strcpy (motsecret, "VOITURE\n");
}

void cachemotsecret (){
    strcpy (tabmodif, "******* \n");
}



void saisilettre (char *lettre, char *lettre2){

        printf ("Saisir un charactere \n");
        *lettre = getchar();
        *lettre2 = getchar();


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

void checklettre (char lettre, char lettre2){

       for (int i=0; i<strlen(motsecret); i++){
        if(motsecret[i] == lettre){
                tabmodif [i] = lettre;
                printf("Bonne lettre\n");
        }
         }
         printf ("%s", tabmodif);

          for (int i=0; i<strlen(motsecret); i++){
        if(motsecret[i] == lettre2){
                tabmodif [i] = lettre2;
                printf("Bonne lettre\n");
        }
         }
         printf ("%s", tabmodif);
}

