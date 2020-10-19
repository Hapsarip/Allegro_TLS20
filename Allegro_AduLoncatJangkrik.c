/*KELOMPOK ALLEGRO*/
/*Soal Adu Loncat Jangkrik*/

#include<stdio.h>

main()
{
	int x1,x2,v1,v2;
	
	printf("Masukkan posisi 1, kecepatan 1, posisi 2, kecepatan 2\n");
	printf("secara urut hanya dipisahkan spasi: ");
	scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
	
	if(x1==x2)
	{
		if(v1==v2)
			printf("YES");
		else
			printf("NO");
	}
	else
		if(x1>x2)
		{
			while(x1>x2)
			{
				x1=x1+v1;
				x2=x2+v2;
			}
			if(x1==x2)
				printf("YES");
			else
				printf("NO");
		}
		else
		{
			while(x1<x2)
			{
				x1=x1+v1;
				x2=x2+v2;
			}
			if(x1==x2)
				printf("YES");
			else
				printf("NO");
		}


	return (0);
}