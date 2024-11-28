#include <stdio.h>

int main(){
	int a[2][3]={{3,6,8},{5,8,3}};
    
    printf("gia tri cua tung phan tu trong mang la :\n");
	for(int i = 2-1 ; i >= 0; i--){
		for(int j = 3-1; j >= 0; j--){
			printf("%d ",a[i][j]); 
		} 
		printf("\n"); 
	} 
	return 0; 
} 
