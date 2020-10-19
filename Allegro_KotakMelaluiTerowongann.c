#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box {
	int length, width, height;
};
typedef struct box box;
int get_volume(box a) {
	return (a.length*a.width*a.height);
}
int kurang_dari_tinggi_max(box a) {
	if(a.height<MAX_HEIGHT)
		return 1;
	else
		return 0;
}
int main() {
	int i=0, n;
	printf("Jumlah kotak = ");
	scanf("%d", &n);
	box*boxes=malloc(i*sizeof(box));
	while(i<n) {
		printf("Panjang, lebar, tinggi (contoh: 10 4 6) = ", &n);
		scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
		if(kurang_dari_tinggi_max(boxes[i])) {
			printf("Volume kotak = %d \n", get_volume(boxes[i]));
		i++;
		}
	}
	return 0;
}