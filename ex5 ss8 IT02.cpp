#include <stdio.h>

int main(){
	int a[3][3]={{8,3,8},{1,0,6},{3,9,5}};
	int sum; 
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0||i==3-1||j==0||j==3-1){
				sum+=a[i][j]; 
			} 
		} 
	} 
	printf("tong bien cua mang la : %d ", sum); 
	return 0; 
} 
