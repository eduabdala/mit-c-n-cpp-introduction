#include <stdio.h>

int main(int argc, char ** argv){
	int i = 1;
	printf("===starting...=== \n");
	start:
		if (i < argc) {
			goto show;
		} else {
			goto end;
		}
	show:
		printf("%d. ", i);
		printf("%s\n", argv[i]);
		i++;
		goto start;

	end:
		printf("===ending...=== \n");
		return 0;

}
