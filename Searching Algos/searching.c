#include<stdio.h>
int ULS(int a[],int element,int size);
int ULSR(int a[],int element,int index,int size);
int OLS(int a[],int element, int size);
int OLSR(int a[],int element,int index,int size);
int BSI(int a[],int element,int size);
int BSR(int a[],int element,int low,int high);
int IPSI(int a[],int element,int size);
int IPSR(int a[],int element,int low,int high);

int main(){
	int a[10] = {1,2,3,4,5,7,8,9,10,11};
	int element = 3;
	int pos = ULS(a,element,10);
	if(pos!=-1){
		printf("Unordered Linear Search (Iterative):\n");
		printf("The Element Was Found at %d",pos);
    }else{
		printf("Unordered Linear Search (Iterative)\nis not able to find the element\n");
	}
	
	pos = ULSR(a,element,0,10);
	if(pos!=-1){
		printf("\nUnordered Linear Search (Recursive):\n");
		printf("The Element Was Found at %d",pos);
    }else{
		printf("Unordered Linear Search (Recursive)\nis not able to find the element\n");
	}
	
	pos = OLS(a,element,10);
	if(pos!=-1){
		printf("\nOrdered Linear Search (Iterative):\n");
		printf("The Element Was Found at %d",pos);
    }else{
		printf("Ordered Linear Search (Iterative)\nis not able to find the element\n");
	}
	
	pos = OLSR(a,element,0,10);
	if(pos!=-1){
		printf("\nOrdered Linear Search (Recursive):\n");
		printf("The Element Was Found at %d",pos);
    }else{
		printf("Ordered Linear Search (Recursive)\nis not able to find the element\n");
	}
	
	
	pos = BSI(a,element,10);
	if(pos!=-1){
		printf("\nBinary Search (Iterative):\n");
		printf("The Element Was Found at %d",pos);
    }else{
		printf("Binary Search (Iterative)\nis not able to find the element\n");
	}
	
	pos = BSR(a,element,0,9);
	if(pos!=-1){
		printf("\nBinary Search (Recursive):\n");
		printf("The Element Was Found at %d",pos);
    }else{
		printf("Binary Search (Recursive)\nis not able to find the element\n");
	}
	
	pos = IPSI(a,element,10);
	if(pos!=-1){
		printf("\nInterpolation Search (Iterative):\n");
		printf("The Element Was Found at %d",pos);
    }else{
		printf("Interpolation Search (Iterative)\nis not able to find the element\n");
	}
	
	pos = IPSR(a,element,0,9);
	if(pos!=-1){
		printf("\nInterpolation Search (Recursive):\n");
		printf("The Element Was Found at %d",pos);
    }else{
		printf("Interpolation Search (Recursive)\nis not able to find the element\n");
	}
}

// using unordered Linear Search Algorithm
int ULS(int a[],int element,int size){
   for(int i=0;i<size;i++){
	   if(a[i] == element){
		   return i+1;
	   }
   }
   return -1;	
}

// using unordered Linear Search Algorithm (Recursive Approach)
int ULSR(int a[],int element,int index,int size){
	if(index >= size){
		return -1;
	}
	
	if(a[index] == element)
	{
		return index+1;
	}
	else{
		index = index+1;
		return ULSR(a,element,index,size);
	}
	
	return -1;
}

// Ordered (Sorted) Linear Search iterative approach

int OLS(int a[],int element, int size)
{
	for(int i=0; i<size; i++)
	{
		if(a[i] == element)
		{
			return i+1;
		}
		else if(a[i] > element)
		{
			return -1;
		}
	}
	
	return -1;
}


// Ordered Linear Search (Recursive Approach)

int OLSR(int a[],int element,int index,int size){
	if(index >= size){
		return -1;
	}
	
	if(a[index] == element)
	{
		return index+1;
	}
	else if(a[index]>element){
		return -1;
	}
	else{
		index = index+1;
		return OLSR(a,element,index,size);
	}
	
	return -1;
}


//Binary Search Iterative Implementation
int BSI(int a[],int element,int size){
	int low = 0;
	int high = size-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid] == element){
			return mid+1;
		}else if(a[mid]<element){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return -1;
}

//Binary Search (Recursive) Implementation
int BSR(int a[],int element,int low,int high){
	if(low>high)
	{
		return -1;
	}
	int mid = (low+high)/2;
	if(a[mid]==element){
		return mid+1;
	}else if(a[mid]<element){
		return BSR(a,element,mid+1,high);
	}else{
		return BSR(a,element,low,mid-1);
	}
	
	return -1;
}

// Interpolation Search (Iterative) 
// pos = low + ((element-a[low])/(a[high]-a[low]))*(high-low)
int IPSI(int a[],int element,int size){
	int low = 0;
	int high = size-1;
	while(low<=high)
	{
	  int pos = low + ((element-a[low])/(a[high]-a[low]))*(high-low);
	  if(a[pos] == element)
	  {
		  return pos+1;
	  }	
	  else if(a[pos]<element)
	  {
		  low = pos+1;
	  }
	  else
	  {
		  high = pos-1;
	  }
	}
	return -1;
}


// Interpolation Search (Recursive) 
// pos = low + ((element-a[low])/(a[high]-a[low]))*(high-low)

int IPSR(int a[],int element,int low,int high){
	if(low>high)
	{
		return -1;
	}
	int pos = low + ((element-a[low])/(a[high]-a[low]))*(high-low);
	if(a[pos] == element)
	{
		return pos+1;
	}
	else if(a[pos]<element)
	{
		return IPSR(a,element,pos+1,high);
	}
	else
	{
		return IPSR(a,element,low,pos-1);
	}
	return -1;
}


































