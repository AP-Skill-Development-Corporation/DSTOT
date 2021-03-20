#include<stdio.h>
void bubbleSort(int a[],int size);
void printArray(int a[],int size);
void bubbleSortRecursive(int a[],int start,int actualSize,int swap);
void selectionSort(int a[],int size);
void selectionSortRecursive(int a[],int size,int index);
void insertionSort(int a[],int size);
void shellSort(int a[],int size);
void shellSortRecursive(int a[],int size,int i);
//dividing the array!
void sort(int low,int high); 
// Merging back the elements to one single sorted array!
void merge(int low,int mid,int high);
// All Sorting Techniques.
void QuickSort(int a[],int low,int high);
int partition(int a[],int low,int high);
// These arrays are for merge sort
int m[5] = {12,8,7,33,-4};
int ms[5];

int main(){
	int a[6] = {21,34,55,10,8,7}; 
	bubbleSort(a,6);
	int b[10] = {10,9,8,7,6,-1,-2,-3,-4,-5};
	bubbleSortRecursive(b,0,10,1);
	int c[8] = {20,89,5,13,8,10,5,100};
	insertionSort(c,8);
	int d[9] = {90,80,70,60,50,40,30,20,10};
	shellSortRecursive(d,9,9/2);
	sort(0,4);
	for(int i=0; i<5; i++){
		printf("%d ",m[i]);
	}
	
	int f[10] = {20,22,14,15,66,32,10,9,7,65};
	QuickSort(f,0,9);
	return 0;
}



// To divide the array into two parts -until we reach a single element.
void sort(int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		sort(low,mid);
		sort(mid+1,high);
		merge(low,mid,high);
	}else{
		return;
	}
}

// To Merge Back the Array to form a sorted array
void merge(int low,int mid,int high){
	int l1,l2,i;
	l1 = low;
	l2 = mid+1;
	//For sorting the down the elements and store 
	// them in a bigger array
	for(i=low; l1<=mid && l2<=high; i++){
		if(m[l1]<=m[l2]){
			ms[i] = m[l1];
			l1++;
		}else{
			ms[i] = m[l2];
			l2++;
		}
	}
	// To copy the elements which ever are left in the 'left array'
	while(l1<=mid){
		ms[i] = m[l1];
		l1++;
		i++;
	}
	// To copy the elements which ever are left in the 'right array'
	while(l2<=high){
		ms[i] = m[l2];
		l2++;
		i++;
	}
	//to copy back the elements from array 'b' to array 'a'
	for(i=low; i<=high;i++){
		m[i] = ms[i];
	}

}

//For Printing all the array elements
void printArray(int a[],int size){
	for(int i=0; i<size; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
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

// Shell Sort (iterative)
void shellSort(int a[],int size){
	for(int i = size/2; i > 0; i = i/2){
		for(int j = i ; j < size ; j++){
			for(int k = j-i; k>=0; k = k-i){
				if(a[k+i] >= a[k])
					break;
				else{
					int temp = a[k+i];
					a[k+i] = a[k];
					a[k] = temp;
				}
			}
		}
		printf("After %d gap \n",i);
		printArray(a,size);
	}
}

// Shell Sort (recursive)
void shellSortRecursive(int a[],int size,int i){
	if(i<=0){return;}
	for(int j = i ; j < size ; j++){
			for(int k = j-i; k>=0; k = k-i){
				if(a[k+i] >= a[k])
					break;
				else{
					int temp = a[k+i];
					a[k+i] = a[k];
					a[k] = temp;
				}
			}
		}
		printf("After %d gap \n",i);
		printArray(a,size);
		shellSortRecursive(a,size,i/2);
}

// QuickSort
void QuickSort(int a[],int low,int high){
	if(low<high){
		// Pivot is the index of the pivot element in the array
		int pivot = partition(a,low,high);
		QuickSort(a,low,pivot-1);
		QuickSort(a,pivot+1,high);
	}
}

int partition(int a[],int low,int high){
	int left = low,right = high,pivot_item = a[low];
	while(left<right){
		/*to move the left pointer to right until a[left]<=pivot_item*/
		while(a[left]<=pivot_item){
			left++;
		}
		/*to move the right pointer to left until a[right]>pivot_item*/
		while(a[right]>pivot_item){
			right--;
		}
		if(left<right){
			int temp = a[left];
			a[left] = a[right];
			a[right] = temp;
		}
	}
	
	a[low] = a[right];
	a[right] = pivot_item;
	
	printArray(a,10);
	return right;
}
