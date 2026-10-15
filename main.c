#include<stdio.h>
int main() {
  int a;
  printf ("nhap so");
  scanf ("%d", &a);
  if (a<16){
      printf("lanh" );
	  }
	  else if (a<26){
    	printf("mat");
		}
		else if (a<35){
		printf("nong");
		}
		else {
			printf("rat nong");}
  return 0;
}
