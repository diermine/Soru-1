#include <stdio.h>

int main() {
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];
    int visited[n];

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (!visited[i])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j]) {
                    visited[j] = 1;
                    count++;
                }
            }
            freq[i] = count;
        }
    }

    printf("Eleman\tFrekans\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}

