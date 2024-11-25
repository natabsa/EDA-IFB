#include <stdio.h>
#include <stdlib.h>

void swapd(double *x, double *y){

	double aux;
	aux=*x;
	*x=*y;
	*y=aux;
}
/*
void buildmaxheapd(double *heap, size_t size){


	
}
*//*
void heapfyd(double *heap, size_t size){

	if(size<2) return;

	//size...

	if(heap[1] > heap[0]) {
		swapd(&heap[0], &heap[1]);
		heapfyd(heap, size);
	}
	else if(heap[2] > heap[0]){
		swapd(&heap[0], &heap[2]);
		heapfyd(heap, size);
	}
}
*//*
void heapsortd(double *heap, size_t size){

	if(size<2) return;

 	swapd(&heap[0], &heap[--size]);
	heapfy(heap, size);
 	heapsortd(heap, size);
}
*/
int main(int argc, char *argv[]){

	double arr[argc-1];

	for(int i=0; i<argc-1; i++) arr[i]=atof(argv[i+1]);
	
	return 0;
}
