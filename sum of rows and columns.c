#include<stdio.h>
int main(){
	int a[3][3];
	int i , j  , sumofrows=0 , sumofcolumns;
	//calculation for first matrice
	
	printf("\n enter the elements in the matrice:\n ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d,%d] = ",i,j);
			scanf("%d" ,&a[i][j]);
		}
	}
	printf("\n the first matrice is :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d " ,a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		sumofrows=0;
		for(j=0;j<3;j++){
			sumofrows=sumofrows + a[i][j]; 
		}
		printf("\n the sum of row %d is %d" ,i ,sumofrows);
	}
	for(i=0;i<3;i++){
		sumofcolumns=0;
		for(j=0;j<3;j++){
			sumofcolumns=sumofcolumns + a[j][i]; 
		}
		printf("\n the sum of column %d is %d" ,i ,sumofcolumns);
	}
}