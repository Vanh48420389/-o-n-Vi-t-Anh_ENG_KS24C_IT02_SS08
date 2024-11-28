#include <stdio.h>

int main(){
	int n;
	printf("nhap so nguyen : ");
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("nhap gia tri cac phan tu trong mang [%d][%d]",i,j);
			scanf("%d",&a[i][j]); 
		} 
	} 
	printf("ma tran vua nhap la :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf(" %d", a[i][j]); 
		}
		printf("\n"); 
	}
	return 0; 
} 
