#include<stdio.h>
int main(){
	int a[5][5];
	int b[5][5];
	int c[5][5];
	int i , j ,r1 , r2 , c1 , c2 , k , sum;
	//calculation for first matrice
	printf("\n enter the number of rows of the first matrice :\n");
	scanf("%d" ,&r1);
	printf("\n enter the number of columns of the first matrice :\n");
	scanf("%d" ,&c1);
	
	printf("\n enter the elements in the matrice:\n ");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("[%d,%d] = ",i,j);
			scanf("%d" ,&a[i][j]);
		}
	}
	printf("\n the first matrice is :\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf(" %d " ,a[i][j]);
		}
		printf("\n");
	}

// calculation for second matrice
	printf("\n enter the number of rows of the second matrice :\n");
	scanf("%d" ,&r2);
	printf("\n enter the number of columns of the second matrice :\n");
	scanf("%d" ,&c2);
	
	printf("\n enter the elements in the matrice:\n ");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("[%d,%d] = ",i,j);
			scanf("%d" ,&b[i][j]);
		}
	}
	printf("\n the second matrice is :\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf(" %d " ,b[i][j]);
		}
		printf("\n");
	}

//multiplication of the matrice
	if(r1!=c2){
		printf("\nmatrices cannot multiply\n");
	}
	else{
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				sum=0;
				for(k=0;k<r2;k++){
					sum = sum +(a[i][k]*b[k][j]);
				}
				c[i][j]=sum;
			}
		}
	}
	
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf(" %d " ,c[i][j]);
		}
		printf("\n");
	}
}