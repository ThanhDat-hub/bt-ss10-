#include <stdio.h>
int main(){
	int a[]={1,7,4,5,2,6,3};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				temp=a[j+1]; 
			} 
		} 
	} 
	printf("da sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%d",a[i]); 
	} 
	printf("\n");
	return 0; 
} 

