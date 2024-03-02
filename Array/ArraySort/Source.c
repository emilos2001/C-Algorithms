#include<stdio.h>

int main() {
    int arr[] = {5, 6, 1 ,9, 2, 20, 11, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("initial array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    int max = 0;
    int min = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    max = arr[0]; 

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    min = arr[0];
    printf("\ninitial array in ascendent order : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\ninitial array in descendent order : ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\nMax number of this array is : %d", max);
    printf("\nMin number of this array is : %d", min);
	return 0;
}
