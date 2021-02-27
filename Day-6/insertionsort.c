#include<stdio.h>
void read_values(int is[],int size){
	FILE *ip=fopen("input.txt","r");
	for(int i=0;i<size;i++){
		fscanf(ip,"%d",&is[i]);
	}
}
void display_values(int is[],int size){
	for(int i=0;i<size;i++){
		printf("%d ",is[i]);
	}
	}
void insert_sort(int is[],int size){
		int v,j;
		for(int i=1;i<size;i++){
			printf("\n %d Iterations\n",i);
			v=is[i];// 2 8
			for(j=i-1;j>=0&&is[j]>v;j--){
				is[j+1]=is[j];// 
				printf("\n");
				display_values(is,size);
			}
			printf("\n");
			is[j+1]=v;//j=-1+1j[0]=2-->is[1+1]=8-->is[2]=8
		}
}
int main(){
	int size;
	//scanf("%d",&size);
	FILE *ip=fopen("size.txt","r");
	fscanf(ip,"%d",&size);
	printf("%d",size);
	int is[size];
	read_values(is,size);
	printf("\nBefore Sorting:\n");
	display_values(is,size);
	printf("\nAfter Sorting:\n");
	insert_sort(is,size);
	printf("\n");
	display_values(is,size);
	return 0;
}
