/*Kelompok Allegro*/
/*Kotak Melalui Terowongan*/

#include <stdio.h>
#include <stdlib.h>

struct box
{
	int panjang,lebar,tinggi;
}b;

typedef struct box box;

/*Fungsi Utama*/
int main()
{
	int n;
	printf("Jumlah kotak yang akan dibawa: ");
	scanf("%d", &n);
	printf("\n");
	box *boxes = malloc(n * sizeof(box));
	
	for (int i = 0; i < n; i++)
	{
		printf("Masukkan ukuran panjang, lebar, dan tinggi kotak \n");
		printf("secara urut hanya dipisahkan spasi: ");
		scanf("%d%d%d", &boxes[i].panjang, &boxes[i].lebar, &boxes[i].tinggi);
		printf("\n");
	}
	for (int i = 0; i < n; i++)
	{
		if (lebih_pendek_dari_tinggi_max(boxes[i]))
			printf("%d\n", hitung_volume(boxes[i]));
	}
 return (0);
}

/*Fungsi Yang Akan Dipanggil Di Fungsi Utama*/
int hitung_volume(box b)
{
	return (b.panjang*b.lebar*b.tinggi);
}

int lebih_pendek_dari_tinggi_max(box b)
{
	if(b.tinggi > 40) /*max 40, jika 41 terlalu mepet dengan terowongan*/
		return (0);
	else
		return (1);
}