#include<stdio.h>
int main(){
	int x , y ;
	printf("enter number of rows");
	scanf("%d" ,&x);
	printf("\n enter the number of columns");
	scanf("%d" ,&y);
	
	int a[x][y];
	int i , j , temp ;
	
	for(i=0 ; i<x ; i++){
		for(j=0 ; j<y ;j++){
			printf(" enter element [%d,%d] = " ,i,j);
			scanf("%d" ,&a[i][j]);
		}
	}
	printf(" transpose matrix is \n");
	for(i=0 ; i<y ; i++){
		for(j=0 ; j<x ; j++){
		printf(" %d " ,a[j][i]);	
	}
	
	printf("\n ");
}
}