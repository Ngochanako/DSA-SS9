#include<stdio.h>

int main(){
	int n=6;
	int a[n]={8,5,9,4,2,1};
	for(int i=0;i<n-1;i++){
		int minIndex=i+1;
		for(int j=i+1;j<n;j++){
		   if(a[j]<a[minIndex]){
		   	minIndex=j;
		   }	
		}
		int tmp=a[i];
		a[i]=a[minIndex];
		a[minIndex]=tmp;
	}
		for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
