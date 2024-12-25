#include<stdio.h>

int main(){
	int n=5;
	int a[5]={64,25,12,22,11};
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minIndex]){
				minIndex=j;
			}
		}
		int tmp=a[i];
		a[i]=a[minIndex];
		a[minIndex]=tmp;
	}
	//tim kiem nhi phan
	for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
   int x;
   scanf("%d",&x);
   int l=0;
   int r=n-1;
   while(l<=r){
   	   int mid=l+(r-l)/2;
   	   if(a[mid]==x){
   	   	    printf("%d",mid);
   	   	    break;
		}else if(a[mid]<x){
			l=mid+1;
		}else{
			r=mid-1;
		}
   }
}
