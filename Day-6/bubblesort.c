#include<stdio.h>
void read_values(int bs[],int size){
	FILE *ip=fopen("input.txt","r");
	for(int i=0;i<size;i++){
		fscanf(ip,"%d",&bs[i]);
	}
}
void display_values(int bs[],int size){
	for(int i=0;i<size;i++){
		printf("%d ",bs[i]);
	}
	}
void bubble_sort(int bs[],int size){
		for(int i=0;i<size;i++){
			printf("\n %d iteration",i);
			for(int j=0;j<size-1-i;j++){
				if(bs[j]>bs[j+1]){
					int temp=bs[j];
					bs[j]=bs[j+1];
					bs[j+1]=temp;
				}
				printf("\n");
				display_values(bs,size);
			}
		}
}
int main(){
	int size;
	//scanf("%d",&size);
	FILE *ip=fopen("size.txt","r");
	fscanf(ip,"%d",&size);
	printf("%d",size);
	int bs[size];
	read_values(bs,size);
	printf("\nBefore Sorting:\n");
	display_values(bs,size);
	printf("\nAfter Sorting:\n");
	bubble_sort(bs,size);
	printf("\n");
	display_values(bs,size);
	return 0;
}
