#include<stdio.h>
int main(){
 int N,D,i,j,step=1,steplen;	
 printf("�п�J��}�j�p�P�_�l��V\n");
 scanf("%d%d",&N,&D);
 int a[N][N];
 int direction[4][2]={0,-1,   /*���W�k�U*/ 
                      -1,0,
                      0,1,
                      1,0   };
 for(i=0;i<N;i++){
 	for(j=0;j<N;j++){
 		scanf("%d",&a[i][j]);
	 }
 }
 int x=(N-1)/2,y=(N-1)/2;
 int k=1;
 printf("%d",a[x][y]);   /*��X�_�I*/ 
 while(k<N*N){  /*���P�@��V���B��*/ 
 	steplen=(step+1)/2;      /*���B��(�L����˥h)*/ 
 	for(i=0;i<steplen;i++){
 	  x+=direction[(D+step-1)%4][0];     /* D+step-1 ����V*/ 
	  y+=direction[(D+step-1)%4][1];
	  printf("%d",a[x][y]);
	  k++;
	  if(k==(N*N))break;	
	 }
	 step++;
 }
 return 0;
} 
