#include<stdio.h>

int main(){
	int n=6;
	int a[n]={8,5,9,4,2,1};
//	for(int i=1;i<n;i++){
//		int j=i-1;
//		int tmp=a[i];
//		while(tmp<a[j]&&j>=0){
//			a[j+1]=a[j];
//			j--;
//		}
//		a[j+1]=tmp;
//	

//       for(int j=i;j>=0;j--){
//       	   if(a[j]>a[j-1]){
//       	   	break;
//		   }
//		   int tmp=a[j];
//		   a[j]=a[j-1];
//		   a[j-1]=tmp;
//	   }	
//	}
         
         for(int i=1;i<n;i++){
         	int tmp=a[i];
         	int j;
         	for(j=i-1;j>=0;j--){
         		if(tmp>a[j]){
         			break;
				}
				a[j+1]=a[j];
			}
			a[j+1]=tmp;
		 }
        
        
        
		for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
