#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *name = readline("Enter temperature in celsius: ");
  double a = atof(name);
  double b = (a*1.8) +32;
  
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",a, b);
  return 0;
}