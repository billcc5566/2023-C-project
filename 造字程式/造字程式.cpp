#include<stdio.h>
#include<string.h>
int main(){
	int K,Q,R,i,j;
	printf("�п�JK Q R����\n");
	scanf("%d%d%d",&K,&Q,&R);
	char string[K];
	printf("�п�J��l�r��\n");
	scanf("%s",string);
	int input[Q][K];
	char output[Q][K];
	printf("�п�J�ק�Ѽ�\n");
	for(i=0;i<Q;i++){
		for(j=0;j<K;j++){
			scanf("%d",&input[i][j]);
			output[i][input[i][j]-1]=string[j];
		}
		strcpy(string,output[i]);
	}
	for(j=0;j<R;j++){
		for(i=0;i<Q;i++){
			printf("%c",output[i][j]);	
		}
		printf("\n");
	}
} 
