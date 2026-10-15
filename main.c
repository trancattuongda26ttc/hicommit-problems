#include<stdio.h>
int main() {
  int t;
  scanf ("%d", &t);
  if (t<16){
      printf("LANH" );
	  }
	  else if (t<26){
    	printf("MAT");
		}
		else if (t<35){
		printf("NONG");
		}
		else {
			printf("RAT NONG");}
  return 0;
}
