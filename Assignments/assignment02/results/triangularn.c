#include <stdio.h>

int main() {
	int n = 0;
	int count = 0;
	while (count <= 100) {
		n += count;
		printf(" %d,", n);
		count++;
	}

	return 0;
}

