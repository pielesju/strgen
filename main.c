#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void init_rng() {
	srand((unsigned int)time(NULL));
}

int main(int argc, char *argv[]) {
	if(argc < 2) {
		printf("false input");
		exit(0);
	}

	init_rng();

	char chars[62] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

	int n = atoi(argv[1]);

	char out[n];

	for(int i = 0; i < n; i++) {
		if(argc == 3) {
			char* s = (char*)malloc(sizeof argv[2]);
			strcpy(s,argv[2]);
			out[i] = s[rand() % sizeof s];
		}else {
			out[i] = chars[rand() % sizeof chars];
		}
	}

	printf("%s\n", out);

	printf("%s\n", chars);

	for(int i = 0; i < 20; i++) {
		printf("%d\n", rand() % 100);
	}

	return 0;
}
