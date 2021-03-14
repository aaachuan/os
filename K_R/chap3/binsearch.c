#include <stdio.h>

/* Pratice 3-1
 * Binary Search
 *
 */ 

int binsearch(int x,int v[],int n);

main() {
	int v[5]={1,5,7,8,10};
	printf("%d\n",binsearch(7,v,5));
}

int binsearch(int x,int v[],int n) {
	int low,high,mid;
	
	low=0;
	high=n-1;

	mid = (high-low)/2;
	while(low<=high && x!=v[mid]) {
		if(x<v[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	if(x=v[mid])
		return mid;
	else
		return -1;
}
	
