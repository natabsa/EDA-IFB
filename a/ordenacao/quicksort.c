#include <stdio.h>
#include <stdlib.h>


void printdr(double* arr, size_t n){

	for(int i=0; i<n; i++) printf("%.2lf\t", arr[i]);
	printf("\n");
	return;

}

void swapd(double* a, double* b){

	double aux;

	aux=*a;
	*a=*b;
	*b=aux;

	return;

}

size_t partition(double* arr, size_t n){

	size_t pi=0;
	if(n>1){
		
		for(int i=0; i<(n-1); i++){
			if(arr[i]<=arr[n-1]) swapd(&(arr[pi++]), &(arr[i]));
		}

		swapd(&(arr[pi]), &(arr[n-1]));
	}
	return pi;
}

void quicksortd(double *v, int n){

	if(n<2) return;
	size_t pi=partition(v, n);
	quicksortd(v, pi);
	quicksortd(v+pi+1, n-pi-1);

	
}

int main(int argc, char *argv[]){

	double arr[argc-1];

	for(int i=0; i<argc-1; i++) arr[i]=atof(argv[i+1]);

	printdr(arr, argc-1);
	quicksortd(arr, argc-1);
	printdr(arr, argc-1);

	return 0;
}