#include <stdio.h>

int main() {
  float drl, dtb;
  scanf("%d", &drl);
  scanf("%d", &dtb);
  if(drl >= 90 && dtb >= 9.0){
    printf("HOC_BONG_XUAT_SAC");
  }
  else if (8.0 <= dtb && dtb <9.0 && drl>=90 )||
          drl>=9.0 && 80<=drl && drl<90 ){
    printf("HOC_BONG_GIOI");
          }
  else if (7.0<=dtb && dtb < 8.0 && drl>=90)||
          8.0<=dtb && dtb>=9.0 && 70<=drl && drl <80||
          dtb>=90 && 70<=drl && drl<80) {
    printf("HOC_BONG_KHA");
          }
  else {
    printf("KHONG_DAT");
  }
  
  return 0;
}