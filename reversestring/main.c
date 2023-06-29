/*chatGPT coding prompt
 * Write a C program that takes a string as input and reverses it. The reversed string should be stored in a separate string variable.
 * https://chat.openai.com/share/e1f4926f-14c2-49d2-937e-3af9e65fc96*/

#include <stdio.h>
#include <string.h>

void reverseString(const char *input, char *output);

int main() {
    const char *input = "Hello, World!";
    char output[100];

    reverseString(input, output);

    printf("Reversed string: %s\n", output);

    return 0;
}

void reverseString(const char *input, char *output) {
    int size = strlen(input);
    int i;
    int j = 0;
    for (i = size - 1; i >= 0; i--) {
	    output[j] = input[i];
	    j++;
    }

}

