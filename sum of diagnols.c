#include<stdio.h>
int main(){
	int a[5][5];
	int i , j ,r , c, k , sum=0;
	//calculation for first matrice
	printf("\n enter the number of rows of the first matrice :\n");
	scanf("%d" ,&r);
	printf("\n enter the number of columns of the first matrice :\n");
	scanf("%d" ,&c);
	
	printf("\n enter the elements in the matrice:\n ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("[%d,%d] = ",i,j);
			scanf("%d" ,&a[i][j]);
		}
	}
	printf("\n the first matrice is :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d " ,a[i][j]);
		}
		printf("\n");
	}
	if(r==c){
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
				if(i==j){
					sum=sum+a[i][j];
				}
			}
		}
	}
	else{
		printf("addition of diagnol not possible");
	}
		printf("the sum is %d" ,sum);
	}