#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];  // Array untuk menyimpan string dengan maksimal panjang 100 karakter + null terminator

    
    scanf("%s", str1);
    scanf("%s", str2);

   
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    
    if (len1 != len2) {
        printf("BERBEDA\n");
    } else {
        
        if (strcmp(str1, str2) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

    return 0;
}
