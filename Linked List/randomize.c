#include <stdlib.h>
#include <time.h>

int *randomList(int min, int max)
{
    int i;
    int r;
    int *res = (int *) malloc(sizeof(int) * (max - min));
    int *visited = (int *) malloc(sizeof(int) * (max - min));

    for(i = 0; i < (max - min); i++)
        visited[i] = 0;
    
    srand((unsigned) time(NULL));

    for(i = 0; i < (max - min); i++)
    {
        r = rand() % (max - min);
        if(visited[r] == 0) {
            res[i] = r;
            visited[r] = 1;
        } else {
            i--;
        }
    }

    return res;
}