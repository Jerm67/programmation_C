#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/* FEATURE
-Afficher le mot caché
-Vérification de la lettre proposé par l'utilisateur
-

*/

void initmotsecret (char motsecret[]);
void cachemotsecret (char motsecret []);
void saisilettre (char lettre []);

int main()
{

    char motsecret [20];

    char lettre [20];

    printf ("Bienvenue dans le pendu ! \n");

    initmotsecret(motsecret);

    //cachemotsecret(motsecret);

     saisilettre (lettre);


    return 0;
}

void initmotsecret(char motsecret[] ){

    strcpy (motsecret, "VOITURE");
    printf ("%s\n", motsecret);

}

void cachemotsecret (char motsecret []){
    strcpy (motsecret, "******* \n");
    printf ("%s", motsecret);
}



void saisilettre (char lettre []){



        printf ("Saisir un charactere \n");
        scanf  ("%s", lettre);


         if (lettre = initmotsecret)
         {

            printf ("Bonne lettre");
            scanf  ("%s", lettre);
         }
          else
         {

            printf ("Mauvaise lettre");
            scanf  ("%s", lettre);
         }

}


