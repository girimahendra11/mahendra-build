#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) return 0;  
    if (n <= 3) return 1;  

    
    if (n % 2 == 0 || n % 3 == 0) return 0;

    // Memeriksa faktor dari 5 hingga sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }

    return 1;  
}

int main() {
    int number;

   
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
