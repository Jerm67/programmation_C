#include <stdio.h>
#include <stdlib.h>

//Les pointeurs sur les fonctions

//Les prototypes
void affiche (int n_val);
//void affiche2 (double n_val);
int retourne (int n_Entier1, int n_Entier2);

//Pointeur de fonction
void (*pAffiche)(int);he
void (*pAffiche2)(double);
//void (*pAffiche2)(void*); //ce pointeur fonctionne pour tout les cas
int (*pRetourne)(int, int);


int main()
{
    //affiche (12);
    pAffiche=&affiche;
    //pAffiche2=&affiche2;

    pAffiche(12);

    printf ("\n");

    /*appel du pointeur pour l'addition dans le programme principale*/
    pRetourne=&retourne;
    pRetourne(5, 5);

    return 0;
}


void affiche (int n_val){

    printf("%d\n", n_val);
}

int retourne (int n_Entier1, int n_Entier2){

    printf ("%d\n", n_Entier1 + n_Entier2);
}
