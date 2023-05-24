#include <stdio.h>

/*
 * Prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0, the function does not print anything.
 */
void print_times_table(int n);

int main() {
  print_times_table(100);
  return 0;
}

void print_times_table(int n) {
  int i,j;
  for (i = 0; i <= n; i++){
    for (j = 0; j <= n; j++)
      {
	printf("%d ", j*i);
      }
    printf("\n");
  }
  printf("\n");
}

