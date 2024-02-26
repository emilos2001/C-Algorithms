#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char alphabet[] = "abcdefghijklmnopqrstuvwyxz";
	char vowels[] = "aeiou";
	size_t length = strlen(alphabet);
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < strlen(vowels); j++) {
			if (alphabet[i] == vowels[j]) {
				printf("%c", vowels[j]);
			}
		}
	}
	return 0;
}