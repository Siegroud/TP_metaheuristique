#include "headers.h"

void print_tab(int size, int **tab) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

void print_list(int size, int *tab){
    for (int i = 0 ; i < size ; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int read_from_file(char *string, int ***tab, int **demand, int **constraints) {
    FILE *f;
    char buffer[255];
    f = fopen(string, "rb");
    int size;
    int temp;
    fscanf(f, "%d", &size);

    *tab = (int **)malloc(size * sizeof(int *));
    *demand = (int *)malloc(size * sizeof(int));
    *constraints = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        (*tab)[i] = (int *)malloc(size * sizeof(int));
        for (int j = 0; j < size; j++) {
            fscanf(f, "%d", &((*tab)[i][j]));
        }
    }

    for (int i = 0; i < size; i++) {
        fscanf(f, "%d", &((*demand)[i]));
        //Parcqu'on fait du recyclage
        (*demand)[i] *= -1;
    }

    for (int i = 0; i < size; i++) {
        fscanf(f, "%d", &((*constraints)[i]));
    }
    return size;
}