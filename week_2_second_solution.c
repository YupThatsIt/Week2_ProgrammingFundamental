//using a graph to output according to the condition
#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    int start = -(n - 1), stop = n - 1;

    for (int i = start; i <= stop; i++){
        for (int j = start; j <= stop; j++){
            if (abs(j) <= abs(i)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
