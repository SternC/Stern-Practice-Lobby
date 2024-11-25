#include <stdio.h>

/* PRACTICE 1
int main(){
  int i, j = 10;
  i = 0;
  
  for(;i < 5;){
    j += i++ + 1;
  }
  printf("%d", j);
}
*/

/* PRACTICE 2
int main(){
  int i, j = 0;
  i = 10;
  
  while(1){
    i--;
    if (i == 0){
      break;
    }
    if ( i % 2 == 0){
      continue;
    }
    j += i;
  }
  printf("%d", j);
}
*/
  
/* PRACTICE 3
int main(){
  int i, j;
  
  for (i = 0; i < 3; i++){
    for (j = 0; j < 5; j++){
      printf("%3d", 5*i+j+1);
    }
    printf("\n");
  }
  return 0;
}
*/

/* PRACTICE 4
 int main(){
  int a, j;
  a = 20;
  for (j = 0; j < 6; j++){
    printf("%d ", a);
    a = a - 6;
  } 
  return 0;
 }
*/

/* PRACTICE 5  
 int main(){
  int a, j, k;
  a = 19;
  j = 0;
  k = 8;
  while(j < 5){
    printf("%d ", a);
    a = a + k;
    k = k - 1;
    j = j + 1;
  }
  return 0;
 }
*/

/* PRACTICE 6
int main(){
  int a,b;
  int multiplication = 1;
  scanf("%d %d", &a, &b);
  
  for(a; a <= b; a++){
    for(int i = 1; i <= a; i++){
      multiplication *= i;
    }
    printf("%d! = %d\n", a, multiplication);
    multiplication = 1;
  }
  return 0;
}
*/

/* PRACTICE 7
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
*/
