#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*reddit challenge: determine the least amount of coins to be used when giving change
 *https://www.reddit.com/r/ProgrammingPrompts/comments/h8z9my/determine_the_least_number_of_coins_possible_to/ 
Determine the least number of coins possible to make change
This is a somewhat simple one inspired by my working at a grocery store. Write a program capable of telling you the smallest number of coins you can make change with for a given amount. Examples, 25¢ should return 1, 35¢ should return 2, and 58¢ should return 6. I’m working off of American currency here but whatever you use should work just fine too as long as you adjust for it.
*/

int determineCoinAmount(int change);

int main(void) {
	//printf("A 25 cent change only requires %d coins to be dispensed.\n", determineCoinAmount(25));
	printf("A 58 cent change only requires %d coins to be dispensed.\n", determineCoinAmount(58));
	//printf("A 35 cent charge only requires %d coins to be dispensed.\n", determineCoinAmount(35));
}

int determineCoinAmount(int change) {
	int i;
	for (i = 0; i < change; i++) {
		if ((change - 50) >= 0) {
			change -= 50;
			printf("a half-dollar has been dispensed\n");
			continue;
		}
		if ((change - 25) >= 0) {
			change -= 25;
			printf("a quarter has been dispensed\n");
			continue;
		}
		if ((change - 10) >= 0) {
			change -= 10;
			printf("a dime has been dispensed\n");
			continue;
		}
		if ((change - 5) >= 0) {
			change -= 5;
			printf("a nickel has been dispensed\n");
			continue;
		}
		if ((change - 1) >= 0) {
			change--;
			printf("a penny has been dispensed\n");
			printf("curernt amount of change is %d\n", change);
			continue;
		}
		if (change <= 0) {
			break;
		}
	}

	return i;
}

