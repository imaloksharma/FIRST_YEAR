#include <stdio.h>
#include<stdlib.h>
void rearrange(int arr[], int n) 
{
    int pos_count = 0, neg_count = 0, i, j;


    for (i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos_count++;
        } else {
            neg_count++;
        }
    }

    int pos[pos_count], neg[neg_count];
    int pos_index = 0, neg_index = 0;

   
    for (i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos[pos_index++] = arr[i];
        } else {
            neg[neg_index++] = arr[i];
        }
    }

    
    for (i = 0; i < neg_count; i++) {
        arr[i] = neg[i];
    }
    for (j = 0; j < pos_count; j++, i++) {
        arr[i] = pos[j];
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rearrange(arr, n);

    printf("\nRearranged array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}