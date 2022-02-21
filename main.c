#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char result[1024] = "";
	char fullmsg[1024] = "";
	for (int i = 1; i < argc; i++) {
		strcat(fullmsg, argv[i]);
		strcat(fullmsg, " ");
	}
	char *cat = " /\\_/\\\n( o.o )\n > ^ <";	
	
	strcat(result, "       ");
	strcat(result, fullmsg);
	strcat(result, "\n      /\n");
	strcat(result, cat);

	printf("%s\n", result);
	return 0;
}
