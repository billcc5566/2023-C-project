#include<stdio.h>
int main(){
	int i,x,n,k,l=0,r=0;
	printf("�п�Jx�Pn\n");
	scanf("%d%d",&x,&n);
	int max=x,min=x;
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(k>x){
			r++;
			if(k>max)max=k;
		}
		else{
			l++;
			if(k<min)min=k;
		}
	}
	if(r>l){
		printf("�̦h�Y�쭹���ƶq��%d�A�̫�@�ӦY���������U����m��%d",r,max);
	}
	else printf("�̦h�Y�쭹���ƶq��%d�A�̫�@�ӦY���������U����m��%d",l,min);
	return 0;
} 
