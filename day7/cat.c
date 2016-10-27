
#include <stdio.h>
#include <sysexits.h>

int main(int argc, char *argv[])
{
	int ret_code = EX_OK;
	if(argc != 3) {
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		ret_code = EX_USAGE;
		goto leave;
	}

	// open the file
	// First argument is name of file
	// Second argument is a STRING (not character) indicating the mode
	FILE *fp1 = fopen(argv[1], "r");
	FILE *fp2 = fopen(argv[2], "r");
	// fopen can return NULL on error
	// NULL we can treat like a false value
	if(!fp1){
		perror("Unable to open file 1");
		ret_code = EX_NOINPUT;
		goto leave;
	}
	else if(!fp2){
		perror("Unable to open file 2");
		ret_code = EX_NOINPUT;
		goto fp1_cleanup;
	}	

	char buf[128];
	// print lines from the file
	// FILE *stdin
	while(fgets(buf, sizeof(buf), fp1)) {
		printf("%s", buf);
	}

cleanup:
	if(fclose(fp2)){
		perror("Unable to close file");
		ret_code = EX_IOERR;
	}
fp1_cleanup:
	if(fclose(fp1)){
		perror("Unable to close file");
		ret_code = EX_IOERR;
	}
leave:
	return ret_code;



}
