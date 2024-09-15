#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;  // Jumlah nilai
    
    
    scanf("%d", &n);

    
    int *nilai = (int *)malloc(n * sizeof(int));
    if (nilai == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }

    
    qsort(nilai, n, sizeof(int), compare);

    
    for (int i = 0; i < n; i++) {
        printf("%d\n", nilai[i]);
    }

    
    free(nilai);

    return 0;
}
