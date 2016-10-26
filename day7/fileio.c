#include <stdio.h>

int main(int argc, char *argv[]){

	if(argc != 2){
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		return 1;
	}

	FILE *fp = fopen(argv[1], "r");
	//fopen can return NULL on eror
	//NULL we can treat like a false value
	if(!fp){
		perror("Unable to open file for reading");
		return 1;
	}
	
	char buf[128];

	fgets(buf, sizeof(buf), fp);
	puts(buf);

	fclose(fp);

}
