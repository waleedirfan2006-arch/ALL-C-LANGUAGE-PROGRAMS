#include <stdio.h>
int main() {
 int start, end, sum = 0;
 printf("Enter starting number: ");
 scanf("%d", &start);
 printf("Enter ending number: ");
 scanf("%d", &end);
 for(int i = start; i <= end; i++) {
 sum += i;
 }
 printf("Inclusive sum between %d and %d = %d\n", start, end, sum);
 return 0;
}
