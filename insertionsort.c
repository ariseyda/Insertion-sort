#include<stdio.h>
#define MAX 50

//Insertion sort

//In the algorithm, starting with the second element and comparing the element with the previous elements, the large elements are shifted to the right in the array.
//Thus, the currently listed element is placed in the appropriate position opened.
//So, considering the algorithm sorting from small to large, it selects the second element of the number array as a key element to it. 
//This key element starts from the previous element and compares all the numbers before it with the number selected as the key. 
//It changes places with any number larger than itself. 
//When it meets the number smaller than itself, the displacement is finished. 
//Then the selection of key numbers until the last element of the series and all the processes that follow continue.

int main(){
	
	int i,j,k,m;
	int array[MAX];
	int size;

	
	printf("Please enter size of array:");
	scanf("%d",&size);
	
	printf("Please enter integers of array:");
	for(k=0;k<size;k++){
		scanf("%d",&array[k]);
	  }
	
	for(i=1;i<size;i++){
		int element=array[i];
		j=i-1;
		while(j>=0 && array[j]>element){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=element;
	}

	printf("\nInsertion sort:");
	
    for(m=0;m<size;m++){
    	printf("%d ",array[m]);
    }  

	
	return 0;
}