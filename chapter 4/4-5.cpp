#include <stdio.h>
int main(void) {
	float downloadSpeed, sizeofFile;

	printf("Entern downloadSpeed(bps) and sizeofFile(MB):");
	scanf_s("%f %f", &downloadSpeed, &sizeofFile);

	float dTime = sizeofFile * 8 / downloadSpeed;

	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n",downloadSpeed,sizeofFile,dTime);

	return 0;
}