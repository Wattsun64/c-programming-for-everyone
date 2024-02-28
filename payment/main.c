#include <stdio.h>

void calcpay(float *p, float r, float h) {
  float total = 0, oth = h - 40;
  if (oth > 0) {
    total += (r + (r / 2)) * oth;
  }
  total += r * (h - oth);
  *p = total; 
}

int main() {
  int empno;
  float rate, hours, pay;

  while(1) {
    if (scanf("%d %f %f",&empno, &rate, &hours) < 3) 
      break;
    calcpay(&pay, rate, hours);
    printf("Employee=%d Rate=%.2f Hours=%.2f Pay=%.2f\n", empno, rate, hours, pay);
  } 
}
