#include<stdio.h>
int main(void){
	int point[8][8]={
	{0,1,100,100,100,100,100,100},
	{100,0,100,2,100,100,100,100},
	{2,100,0,100,100,100,100,100},
	{100,100,1,0,100,8,100,100},
	{100,100,100,100,0,100,2,100},
	{100,100,100,100,2,0,100,100},
	{100,100,100,100,100,3,0,3},
	{100,100,100,100,100,2,100,0} 
    };
		while(point[0][7]==100){
		for(int i=0;i<sizeof(point[0])/sizeof(point[0][0]);i++){
			if(point[0][i]!=100&&i!=0){
				for(int j=0;j<sizeof(point[0])/sizeof(point[0][0]);j++){ 
				if(point[i][j]!=100 and j!=i){
					if(point[0][j]>point[0][i]+point[i][j]){
					point[0][j]=point[0][i]+point[i][j];
					}
				}
			}
		}
	} 
}
	printf("%d",point[0][7]);
	return 0;
} 
