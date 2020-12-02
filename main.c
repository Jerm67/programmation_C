#include <stdio.h>
#include <stdlib.h>
#define TAILLE 11



int main()
{
    /*Initialisation et affichage du tableau*/
    int MatriceEntiers2[TAILLE][TAILLE];//={1,2,3,4,5,6,7,8,9,10,11};
    int i, j = 0;

    for(i=0;i<TAILLE;i++)
        {//ligne
        for(j=0;j<TAILLE;j++)
        {//colonne
            MatriceEntiers2[i][j]=1;
        if (MatriceEntiers2[i][j]==1){
        printf("X");
        }
        if(MatriceEntiers2[i][TAILLE-1]==1){
        printf("X\n"); //Quand i arrive à 11 on fait -1 et un saut de ligne
        }
    }
}

    return 0;
}

