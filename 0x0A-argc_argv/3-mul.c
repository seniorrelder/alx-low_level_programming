#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2; /* Move declarations to the top*/

    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    num1 = atoi(argv[1]); /* Assign values after checking argc*/
    num2 = atoi(argv[2]);
    printf("%d\n", num1 * num2);
    return 0;
}
