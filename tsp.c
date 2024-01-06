int get_start(int *tab, int size)
{
    for (int i = 0 ; i <  size ; i++)
    {
        if (!tab[i])
            return i;
    }
    return -1;
}

void findPath(int **g, int size,int debut, int actuel, int n, int dist, int *visite){
    if (n == size)
    {
        int distTotale = dist;
        while(actuel != debut)
        {
            printf("(%d -> %d) (%d)\n", visite[actuel], actuel, distTotale);
            distTotale -= g[actuel][visite[actuel]];
            actuel = visite[actuel];
        }
        printf("\n");
        return;
    } else if (n > size)
    {
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (visite[i] == -1){
            visite[i] = actuel;
            findPath(g, size,debut, i, n +1, dist+ g[actuel][visite[actuel]], visite);
            visite[i] = -1;
        }
    }
}