#include <stdio.h>
#include <stdlib.h>

void swapd(double *x, double *y){

	double aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

// O tipo de heap implementada e a MAX-HEAP

	void heapfyd(double *heap, size_t size, size_t i){

	size_t largest=i;

	if((2*i+1<size)&&(heap[2*i+1] > heap[largest])) largest=2*i+1;
	if((2*(i+1)<size)&&(heap[2*(i+1)] > heap[largest])) largest=2*(i+1);
	
	if(largest!=i){
		swapd(&heap[i], &heap[largest]);
		heapfyd(heap, size, largest);
	}
}

void buildheapd(double *arr, size_t size){

	for(int i=((size-1)-1)/2; i>=0; i--) heapfyd(arr, size, i);
}

void heapsortd(double *heap, size_t size){

	if(size<2) return;

 	swapd(&heap[0], &heap[--size]);
	heapfyd(heap, size, 0);
 	heapsortd(heap, size);
}

int main(int argc, char *argv[]){

	double arr[argc-1];
	for(int i=0; i<argc-1; i++) arr[i]=atof(argv[i+1]);

	buildheapd(arr, argc-1);
	heapsortd(arr, argc-1);
	
	for(int i=0; i<argc-1; i++) printf("%.2lf\n", arr[i]);

	return 0;
}
