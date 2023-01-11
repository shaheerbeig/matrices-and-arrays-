#include<stdio.h>

int main(){
	int array[10];
	int i,num,temp;
	
	printf("enter the number of elements in the array\n");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		printf("enter the number in array: ");
		scanf("%d",&array[i]);
	}
	for(i=0;i<num/2;i++){
		temp=array[num-1-i];
		array[num-1-i]=array[i];
		array[i]=temp;
	}
	for(i=0;i<num;i++){
		printf("%d",array[i]);
	}
}