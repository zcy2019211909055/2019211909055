#include<stdio.h>
#include<string.h>
int main(void){
	int t[10]={0,1,2,3,4,5,6,7,8,9};
	int x;
	scanf("%d",&x);
	int start=0;
	int end=sizeof(t)/sizeof(t[0]);
	int flag=(start+end)/2;
	for(int j=0;j<9;j++){
		if(t[flag]==x){
			printf("%d",flag);
			flag=-1;
			break;
		}else if (t[flag]<x){
			start=flag;
			flag=(start+end)/2;
		}else{
			end=flag;
			flag=(start+end)/2;
		}
	}
	if(flag!=-1){
		printf("-1");
	}
	return 0;
}
