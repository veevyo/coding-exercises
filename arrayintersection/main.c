/*chatGPT coding exercise
 * "Write a C program that takes two integer arrays as input and finds the intersection of the two arrays. The intersection of two arrays is a new array that contains only the common elements between the two arrays, without any duplicates."
 https://chat.openai.com/share/e1f4926f-14c2-49d2-937e-3af9e65fc96c
 */

#include <stdio.h>

void findIntersection(int arr1[], int size1, int arr2[], int size2, int intersection[], int *size3);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int intersection[10];
    int size3;

    findIntersection(arr1, size1, arr2, size2, intersection, &size3);

    printf("Intersection: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", intersection[i]);
    }

    return 0;
}

void findIntersection(int arr1[], int size1, int arr2[], int size2, int intersection[], int *size3) {
	int i;
	int j;
	int currInd = 0;
	for (i = 0; i < size1; i++) {
		for (j = 0; j < size2; j++) {
			if (arr1[i] == arr2[j]) { 
				intersection[currInd] = arr1[i];
				currInd++;
			}
		}
	}
	*size3 = currInd + 1;
}


