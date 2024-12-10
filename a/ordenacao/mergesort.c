#include <stdio.h>
#include <stdlib.h>


void merge(double* a, int sa, double* b, int sb){

	int ia=0, ib=0;

	double c[sa+sb];
	int ic=0;

	while((ia<sa) && (ib<sb)){

		if(a[ia]<=b[ib]){
			c[ic]=a[ia];
			ia++;
		}
		else {
			c[ic]=b[ib];
			ib++;
		}
		ic++;

	}

	while (ia<sa){
		c[ic]=a[ia];
		ia++;  ic++;
	}

	while (ib<sb){
		c[ic]=b[ib];
		ib++; ic++;
	}

	for(int i=0; i<(sa+sb); i++) a[i]=c[i];
	
	return;

}


void mergesortd(double *v, double* sort, int n){

	if(n==0) return;
	else if(n==1) {
		sort[0]=v[0];
		return;
	}

	mergesortd(v, sort, n/2);
	mergesortd(v+(n/2), sort+(n/2), n-(n/2));
	merge(sort, n/2, sort+(n/2), n-(n/2));
	
}

int main(int argc, char *argv[]){

	double arr[argc-1];
	double sort[argc-1];


	for(int i=1; i<argc; i++) arr[i-1]=atof(argv[i]);

	mergesortd(arr, sort, argc-1);
	
	for(int i=0; i<argc-1; i++) printf("%.2lf, ", sort[i]);
	printf("\n");

	return 0;
}