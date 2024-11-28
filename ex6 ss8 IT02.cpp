#include <stdio.h>

int main() {
	
    int a[3][3] = {{4, 4, 4},{6, 6, 6},{8, 8, 8}};
    int sum;

    printf("ca phan tu tren duong cheo chinh cua ma tran la : ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i][i]);
        sum += a[i][i];
    }
    printf("\n");

    printf("tong cac phan tu tren duong cheo chinh la : %d\n", sum);

    return 0;
}

