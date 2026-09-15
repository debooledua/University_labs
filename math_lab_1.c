#include <stdio.h>  
#include <stdbool.h>          // gcc hello.c -o hello.exe & hello // cd C:\cooding_C , gcc hello.c -o hellow.exe , .\hello.exe
int main(void)
{
	int A[] = { 1, 2, 3, 4, 5 };
	int B[] = { 1, 2, 3, 4 };

	size_t count_A = sizeof(A) / sizeof(A[0]);
	size_t count_B = sizeof(B) / sizeof(B[0]);
	bool equal = true;
	if (count_A == count_B) {
		for (size_t i = 0; i < count_A; i++) {
			bool found = false;
			for (size_t j = 0; j < count_B; j++) {
				if (A[i] == B[j]) {
					found = true;
				}
			}
			if (!found) {
				equal = false;
			}

		}
	}
	else {
		equal = false;
	}

	if (equal)
		printf("A == B\n");
	else
		printf("A != B\n");
}