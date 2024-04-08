#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Digite 3 números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3) {
        if (n2 >= n3) {
            printf("Descresente: %d %d %d", n1, n2, n3);
        } else {
            printf("Decresente: %d %d %d", n1, n3, n2);
        }
    }else if (n2 >= n1 && n2 >= n3){
        if (n1 >= n3) {
            printf("Decresente: %d %d %d", n2, n1, n3);
        }else {
            printf("Decresente: %d %d %d", n2, n3, n1);
        }
    }else{
        if (n2 >= n1){
            printf("Decresente: %d %d %d", n3, n2, n1);
        }else{
            printf("Decresente: %d %d %d", n3, n1, n2);
        }
    }

    return 0;
}