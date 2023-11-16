#include <stdio.h>
#include <stdint.h>

void print_binary(uint64_t num);

int main() {
    uint64_t plainText, key, cipherText;

    printf("Enter the 64-bit plaintext: ");
    scanf("%llx", &plainText);

    printf("Enter the 64-bit encryption key: ");
    scanf("%llx", &key);

    cipherText = plainText;

    printf("\nPlaintext: ");
    print_binary(plainText);

    printf("\nKey: ");
    print_binary(key);

    printf("\nCiphertext: ");
    print_binary(cipherText);

    return 0;
}

void print_binary(uint64_t num) {
    for (int i = 63; i >= 0; i--) {
        printf("%llu%s", (num >> i) & 1, (i % 8 == 0) ? " " : "");
    }
    printf("\n");
}

