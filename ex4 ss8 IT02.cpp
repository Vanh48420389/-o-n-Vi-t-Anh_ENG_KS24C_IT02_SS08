#include <stdio.h>

int main(){
	
	int a[2][3]={{5,9,0},{1,5,8}};
	int max =a[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(max<a[i][j]){
			    max=a[i][j]; 
				break; 
			} 
		}
	}
	printf("phan tu lon nhat cua mang la : %d", max); 
	return 0; 
} 
