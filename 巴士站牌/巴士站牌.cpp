#include<stdio.h>
#include<math.h>
int main(){
	int n,i,max=0,min=999,d;
	printf("�п�Jn�Ӥڤh��\n");
	scanf("%d",&n);
	int a[n][2];
	printf("�п�J�ڤh���y��\n");
	for(i=0;i<n;i++){
	scanf("%d%d",&a[i][0],&a[i][1]); }
	for(i=1;i<n;i++){
		d=abs(a[i-1][0]-a[i][0])+abs(a[i-1][1]-a[i][1]);
		if(d>max)max=d;
		if(d<min)min=d;
	}
	printf("%d %d",max,min);
} 
