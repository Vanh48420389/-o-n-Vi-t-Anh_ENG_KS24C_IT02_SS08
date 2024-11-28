#include <stdio.h>

int main(){
	int a[3][3]={{6,3,8},{9,0,1},{7,2,5}};
	int n;
	int i=0;
	int j=0; 
	printf("nhap gia tri : ");
	scanf("%d", &n);
	for( i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]==n){
				printf("vi tri phan tu trong mang la [%d][%d]",i,j);
				break; 
			}
			}
		}
		if(a[i][j]!=n){
				printf("phan tu ko ton tai trong mang \n");
			} 
	
	
	return 0; 
}  
