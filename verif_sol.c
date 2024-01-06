int verif_sol (int **tab,int d,int a,int *etape,int nb_etape){// d=départ a=depôt
    int pos=d;//position actuelle
    int i=0;

    // Tant que toutes les étapes n'ont pas été parcourues
    for (i=0; i<nb_etape; i++){
        // Si le port n'est pas connu
        if (etape[i]>sizeof(tab) || etape[i]<0){
            return 0;
        }
            // Si le déplacement de la position actuelle à la nouvelle étape est impossible
        else if (tab[pos][etape[i]]<=0){
            return 0;
        }
            // Si le déplacement est possible, on avance
        else {
            pos=etape[i];
        }
    }
    // Si le dépôt n'existe pas
    if (d>sizeof(tab)){
        return 0;
    }
    // Si le deplacement de la position actuelle au depôt est impossible
    if (tab[pos][a]<=0){ 
        return 0;
    }
    return 1;
};
