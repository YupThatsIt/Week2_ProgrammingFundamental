//using two triangles to form an hourglass figure

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int length = 2 * n - 1; //start creating first triangle

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        for (int k = 0; k < length; k++){
            printf("*");
        }
        length -= 2;
        printf("\n");
    }

    length = 3; //Start creating second triangle

    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i - 1; j++){
            printf(" ");
        }
        for (int k = 0; k < length; k++){
            printf("*");
        }
        length += 2;
        printf("\n");
    }


    return 0;
}