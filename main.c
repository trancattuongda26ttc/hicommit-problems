#include<stdio.h>
int main() {
  int t;
  printf ("nhap so");
  scanf ("%d", &t);
  if (t<16){
      printf("lanh" );
	  }
	  else if (t<26){
    	printf("mat");
		}
		else if (t<35){
		printf("nong");
		}
		else {
			printf("rat nong");}
  return 0;
}
