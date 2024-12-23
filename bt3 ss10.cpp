#include <stdio.h>
int main(){
	int a[]={1,7,4,5,2,6,3};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<n;i++){
	   int key=a[i];
	   	int j=i-1;
		   while(j>=0&&a[j]>key){
		   	a[j+1]=a[j];
			   j=j-1; 
		   } 
		   a[j+1]=key; 
	} 
	printf("da sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%d",a[i]); 
	} 
	printf("\n");
	return 0;
}
