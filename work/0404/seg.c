#include <stdio.h>
#include <stdlib.h>

int magic = 42;
char crap[1024];

void func(int arg) {
	printf("stack segment near\t%p\n", &arg);
}

int main(int argc, char **argv) {
	char *ptr;
	ptr = malloc(1);
	func(42);

//	printf("stack segment near %p\n", &ptr);	// address of the variable p located in the main() frame
	printf("heap segment near\t%p\n", ptr);		// start address of allocated memory (100bytes) in the heap segment by malloc()
	printf("bss segment near\t%p\n", crap);
//	printf("text segment near\t%p\n", &magic);	//
	printf("initialized data segment near \t%p\n", &magic);

	free(ptr);
	exit(EXIT_SUCCESS);
}
