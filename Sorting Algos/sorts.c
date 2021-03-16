#include<stdio.h>
void bubbleSort(int a[],int size);
void printArray(int a[],int size);
void bubbleSortRecursive(int a[],int start,int actualSize,int swap);
void selectionSort(int a[],int size);
void selectionSortRecursive(int a[],int size,int index);
void insertionSort(int a[],int size);
// All Sorting Techniques.

int main(){
	int a[6] = {21,34,55,10,8,7}; 
	bubbleSort(a,6);
	int b[10] = {10,9,8,7,6,-1,-2,-3,-4,-5};
	bubbleSortRecursive(b,0,10,1);
	int c[8] = {20,89,5,13,8,10,5,100};
	insertionSort(c,8);
	return 0;
}

//Bubble Sort Algorithm (Iterative)
void bubbleSort(int a[],int size){
	int swap = 1;
	for(int i=0 ; i<size && swap; i++){
		swap = 0;
		for(int j=1; j<size; j++){
			if(a[j-1] > a[j]){
				int temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
				swap = 1;
			}
		} 
		printf("Iteration Number:%d\n",i+1);
		printArray(a,size);
	}
	
	printArray(a,size);
}

// Bubble Sort (Recursive)
void bubbleSortRecursive(int a[],int start,int actualSize,int swap){
	if(start == actualSize || swap == 0){
		return;
	}
	swap = 0;
	for(int i = 1; i<actualSize ; i++){
		if(a[i-1]>a[i]){
			int temp = a[i-1];
			a[i-1] = a[i];
			a[i] = temp;
			swap = 1;
		}
		
	}
	
	printf("Array after the %d iteration\n",start+1);
	printArray(a,actualSize);
	bubbleSortRecursive(a,start+1,actualSize,swap);
}

// Selection Sort (Recursive)
void selectionSortRecursive(int a[],int size,int index){
	
   if(index == size-1){return;}
   int min = index;
   for(int j=min; j<size; j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		if(min!=index){
			int temp = a[index];
			a[index] = a[min];
			a[min] = temp;
		}
		printf("After %d iteration\n",index+1);
		printArray(a,size);
		
	selectionSortRecursive(a,size,index+1);
   
}

// Selection Sort (Iterative)
void selectionSort(int a[],int size){
	int min;
	for(int i=0; i<size; i++){
		min = i;
		for(int j=i; j<size; j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		if(min!=i){
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
		printf("After %d iteration\n",i+1);
		printArray(a,size);
	}
}

// Insertion Sort (Iterative)
void insertionSort(int a[],int size){
	for(int i=0 ; i<size ; i++){
		int key = a[i];
		int j = i;
		while(j > 0 && a[j-1] > key){
			a[j] = a[j-1];
			j--;
		}
		a[j] = key;
		
		printf("After %d Iteration\n",i+1);
		printArray(a,size);
	}
}

//For Printing all the array elements
void printArray(int a[],int size){
	for(int i=0; i<size; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
