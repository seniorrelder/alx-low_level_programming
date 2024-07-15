#include <stdlib.h>

int **alloc_grid(int width, int height) {
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0) return NULL;

    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL) return NULL;

    for (i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            /* Free previously allocated memory if allocation fails */
            while (i--) free(grid[i]);
            free(grid);
            return NULL;
        }

        for (j = 0; j < width; j++) {
            grid[i][j] = 0; /* Initialize all elements to 0*/
        }
    }

    return grid;
}
