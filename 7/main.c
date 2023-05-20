#include <stdio.h>
#include <stdlib.h>
#include "7.h"

int main() {
    printf("First program\n");
    int length;

    printf("Enter size of array: ");
    scanf("%d*c", &length);

    int* arr = (int*)malloc(length * sizeof(int));

    printf("Enter elements of array:\n");

    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    while (getchar() != '\n');

    shellSort(arr, length);

    printf("Sorted array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    free(arr);

    printf("Second program\n");
    printf("Enter string: ");
    char* str = readString();
    if (str != NULL) {
        printf("Your string: %s\n", str);
        free(str);
    }
    return 0;
}

