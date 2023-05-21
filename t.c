#include <stdio.h>  
  
int main() {  
  int xa = 1, ya = 2, xb = 3, yb = 4, xc = 5, yc = 6;  
  int xp = 7, yp = 8;  
  
  if (xp + xa > yp + ya) {  
    printf("Point P is outside triangle ABC.\n");  
  } else if (xp + xb > yp + yb) {  
    printf("Point P is outside triangle ABC.\n");  
  } else if (xp + xc > yp + yc) {  
    printf("Point P is outside triangle ABC.\n");  
  } else {  
    printf("Point P is inside triangle ABC.\n");  
  }  
  
  return 0;  
}
