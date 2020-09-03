// Author: Jinfan Yang jqy5460@psu.edu
// Collaborator: Thomas Huggett tfh5238@psu.edu
// Collaborator: Wenrui Zhang wkz5094@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
  char *Celsius = readline("Enter temperature in celsius: ");
  double C = atof(Celsius);
  double F = C*9/5+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",C,F);
  return 0;
}