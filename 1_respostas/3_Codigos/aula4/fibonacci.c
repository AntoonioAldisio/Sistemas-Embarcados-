#include<stdio.h>

int binario( int n){
	int r;
	int c;

	for(c = 31; c >= 0; c--)
	{
		r = n>>c;

		if(r&1)
		{
			printf("1");
		}else
		{
			printf("0");
		}
	}

}

int main(){

	int i;
	int primeiro =0;
	int segundo =1;
	int proximo;
	int *vetor[99];

	for(i = 0; i<=100; i++)
	{
		if(i<=1)
		{
			proximo = i;
		}
		else
		{
			proximo = primeiro+segundo;
			primeiro = segundo;
			segundo = proximo;
		}

		printf("%d \n", proximo);
		vetor[i] = proximo;
		binario(vetor[2]);
	}
return 0;
}
