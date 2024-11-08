#include <stdio.h>
#include <stdlib.h>


void insertionsortd(double *v, int n){

	for(int i=1; i<n; i++){

		double chosen=v[i];
		int j=i-1;

		while(j>=0){
			if(chosen<v[j]) {
				v[j+1]=v[j];
				j--;
			}
			else {
				break;
				v[j]=chosen;
			}
		}

	}


}

int main(int argc, char *argv[]){

	double arr[argc-1];

	for(int i=0; i<argc-1; i++) arr[i]=atof(argv[i+1]);
	
	insertionsortd(arr, argc-1);

	for(int i=0; i<argc-1; i++) printf("%.2lf, ", arr[i]);

	return 0;
}