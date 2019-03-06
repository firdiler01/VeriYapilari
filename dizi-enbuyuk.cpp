#include<stdio.h>
#include<stdlib.h>

int max(int *dizi,int uzunluk){
	int max,i;
	max=dizi[0];
	for(i=1;i<uzunluk;i++){
		if(max<dizi[i]){
			max=dizi[i];
		}
	}
	return max;
}


int main(){

int *dizi,i,j;
printf("dizinin uzunlugunu giriniz:");
scanf("%d",&i);
dizi=(int*)malloc(sizeof(int)*i);
for(j=0;j<i;j++){
	printf("dizinin %d elemanini giriniz:",j+1);
	scanf("%d",&dizi[j]);
}
printf("dizinin en buyuk elemani :%d",max(dizi,i));

return 0;
}
