#include<stdio.h>

int main(){
	int n=7;
	int a[n]={64,34,25,12,22,11,90};
	int check;
	int cnt=0;
	for(int i=0;i<n;i++){
		check=1;
		for(int j=0;j<n-i-1;j++){
			cnt++;
			if(a[j]>a[j+1]){
				check=0;
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
		if(check==1){
			break;
		}
	}
	printf("%d\n",cnt);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
