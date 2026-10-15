#include <stdio.h>

int main() {
  int a;
  printf ("nhap so");
  scanf ("%d", &a);
  if (a%2==0){
      printf("la so chan: %d", a);
	  }
    else{
    	printf("la so le: %d", a);
		}
  return 0;
}