#include <stdbool.h>

int verif_sol (int **tab,int d,int a,int *etape,int nb_etape){// d=depart a=depot
    int pos=d;//position actuelle
    int i=0;

    for (i=0; i<nb_etape; i++){//tant qu'on a pas parcour tt les etape
        if (etape[i]>sizeof(tab) || etape[i]<0){// si on ne connait pas ce port
            return 0;
        }
        else if (tab[pos][etape[i]]<=0){// si le deplacement de la position actuelle a la nouvelle etape est imposible
            return 0;
        }
        else {// sinon c possible donc on avance
            pos=etape[i];
        }
    }
    if (d>sizeof(tab)){// si le depot existe pa
        return 0;
    }
    if (tab[pos][a]<=0){ //si le deplacement de la position actuelle au depot est impossible
        return 0;
    }


    return 1;
};
