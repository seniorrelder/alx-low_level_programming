#include <stdio.h>

int main(void) {
  char src[40];
  char dest[100];
  
  strcpy(src, "This is source."); /* Initialize src */
  my_strcpy(dest, src); /* Copy src to dest */
  
  printf("Final copied string : %s\n", dest); /* Print the copied string */
  
  return 0;
}
