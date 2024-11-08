#include <stdio.h>
#include <stdlib.h>


void insertionsortd(double *v, int n){

	for(int i=1; i<n; i++){

		double chosen=v[i];
		int j=i-1;

		while(j>=0){
			if(v[j]>chosen) {
				v[j+1]=v[j];
				j--;
			}
			else break;
		}

		v[j+1]=chosen;

	}


}

int main(int argc, char *argv[]){

	double arr[argc-1];

	for(int i=1; i<argc; i++) arr[i-1]=atof(argv[i]);
	
	insertionsortd(arr, argc-1);

	for(int i=0; i<argc-1; i++) printf("%.2lf, ", arr[i]);

	printf("\n");

	return 0;
}