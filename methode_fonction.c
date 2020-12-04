#include "define.h"

void affiche_Tab (int MatriceEntiers2 [TAILLE][TAILLE],int MatriceEntiers3[TAILLE][TAILLE], int i, int j, int nbx, int nby, char mon_char){
     /*Initialisation et affichage du tableau*/


    for(i=0;i<TAILLE;i++){//ligne
        for(j=0;j<TAILLE;j++){//colonne

            MatriceEntiers2[i][j]=1;
            MatriceEntiers2[0][j]=2;
            MatriceEntiers2[nby][0]=3;

        if (MatriceEntiers2[i][j]==1){
        printf("X ");
        }

            if(MatriceEntiers2[i][TAILLE-1]==1){
            printf("X \n"); //Quand i arrive à 11 on fait -1 et un saut de ligne
            }
                if(MatriceEntiers2[i][j]==2){
                printf("%d ",nbx);
                nbx++;
                }
                    if(MatriceEntiers2[i][TAILLE-1]==2){
                    printf("%d \n",nbx);
                    nbx++;
                    }
                        if(MatriceEntiers2[i][j]==3){
                                if(nby<10){
                                printf("%d  ",nby);
                                nby++;
                                }else{
                                    printf("%d  ",nby);
                                    nby++;
                                }
                        }
        }

    }
    if (mon_char == 'O'){
        ("%d", MatriceEntiers2);
    }

    debut_partie(MatriceEntiers2, MatriceEntiers3);

     nbx=0, nby=1;
     for(i=0;i<TAILLE;i++){//ligne
        for(j=0;j<TAILLE;j++){//colonne

            MatriceEntiers3[i][j]=1;
            MatriceEntiers3[0][j]=2;
            MatriceEntiers3[nby][0]=3;

        if (MatriceEntiers3[i][j]==1){
        printf("X ");
        }

            if(MatriceEntiers3[i][TAILLE-1]==1){
            printf("X \n"); //Quand i arrive à 11 on fait -1 et un saut de ligne
            }
                if(MatriceEntiers3[i][j]==2){
                printf("%d ",nbx);
                nbx++;
                }
                    if(MatriceEntiers3[i][TAILLE-1]==2){
                    printf("%d \n",nbx);
                    nbx++;
                    }
                        if(MatriceEntiers3[i][j]==3){
                                if(nby<10){
                                printf("%d  ",nby);
                                nby++;
                                }else{
                                    printf("%d  ",nby);
                                    nby++;
                                }
                        }
        }

    }
}

void debut_partie (int MatriceEntiers2[TAILLE][TAILLE],int MatriceEntiers3[TAILLE][TAILLE], char mon_char){

    fflush(stdin);
    int verif =0;


    do{
        printf ("J1 Voulez vous commencez : O/N\n" );
        scanf ("%c", &mon_char);

        mon_char=toupper(mon_char);
        if(mon_char=='O'){
        printf("J1 Bienvenu dans la bataille navale de Jeremy !\n");
        verif++;
        printf("%d", MatriceEntiers2);
        }
        if (mon_char=='N'){
           printf("Aurevoir !\n");
           verif == 0;
        }   /*else if  (mon_char != 'O' || mon_char!= 'N'){
            printf ("Entrez une réponse correct s.v.p\n");
            }*/
    }while (verif == 0);


    do{
        printf ("J2 Voulez vous commencez : O/N\n" );
        scanf ("%c", &mon_char);

        mon_char=toupper(mon_char);
        if(mon_char=='O'){
        printf("J2 Bienvenu dans la bataille navale de Jeremy !\n");
        verif++;
        printf("%d", MatriceEntiers3);
        }
        if (mon_char=='N'){
           printf("Aurevoir !\n");
           verif == 0;
        }   /*else if  (mon_char != 'O' || mon_char!= 'N'){
            printf ("Entrez une réponse correct s.v.p\n");
            }*/
    }while (verif == 0);
}

void plac_Bateau (int MatriceEntiers2[TAILLE][TAILLE]){

    char torpilleur = ' ';

    printf ("Ou voulez vous placez votre torpilleur(2cases) \n");
    //scanf ("%d", )

}

