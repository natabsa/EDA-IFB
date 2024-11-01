#include <stdio.h>
#include <stdlib.h>

void swapd(double *x, double *y){

	double aux;
	aux=*x;
	*x=*y;
	*y=aux;


}

void bubblesortd(double *v, int n){

	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1; j++){
			if((v[j])>(v[j+1])) swapd(v+j, v+j+1);
		}
	}

}


int main(int argc, char *argv[]){

	double arr[argc-1];

	for(int i=0; i<argc-1; i++) arr[i]=atof(argv[i+1]);
	
	bubblesortd(arr, argc-1);

	for(int i=0; i<argc-1; i++) printf("%.2lf, ", arr[i]);

	printf("\n");

	return 0;
}