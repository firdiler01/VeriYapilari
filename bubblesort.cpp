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
void bubble_sort(int * dizi,int uzunluk){
	int max,i1,i2,i3,flag;
	flag=0;
	for(i1=0;i1<uzunluk;i1++){
		for(i2=0;i2<uzunluk-i1-1;i2++){
			if(dizi[i2]>dizi[i2+1]){
			flag=1;
				
			}
		}
	}
	if(flag==1){
	for(i1=0;i1<uzunluk;i1++){
		for(i2=0;i2<uzunluk-i1-1;i2++){
			if(dizi[i2]>dizi[i2+1]){
				max=dizi[i2+1];
				dizi[i2+1]=dizi[i2];
				dizi[i2]=max;
			}
		}
	}
}
}


int main(){

int *dizi,i,j,b;
printf("dizinin uzunlugunu giriniz:");
scanf("%d",&i);
dizi=(int*)malloc(sizeof(int)*i);
for(j=0;j<i;j++){
	printf("dizinin %d elemanini giriniz:",j+1);
	scanf("%d",&dizi[j]);
}
bubble_sort(dizi,i);
for(b=0;b<i;b++){
	printf("\n %d",dizi[b]);
}

return 0;
}
