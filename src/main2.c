#include "interface.h"
int checkOnPalindrome(int number) {
int reversedNumber = 0;
int originalNumber = number;
while (number != 0){
reversedNumber = reversedNumber * 10 + number % 10;
number /= 10;
}
return reversedNumber == originalNumber;
}