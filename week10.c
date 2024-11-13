#include <stdio.h>

/* PRACTICE 1
int main()
{
  int noise;
  scanf("%d", &noise);
  
  if(noise <= 50) printf("Quiet\n", noise);
  if(noise <= 70) printf("Intrusive\n", noise);
  if(noise <= 90) printf("Annoying\n", noise);
  if(noise <= 110) printf("Very Annoying\n", noise);
  else printf("Uncomfortable\n", noise);
  
  return 0;
}

*/
  
/* PRACTICE 2
int main(){
  int grade;
  
  scanf("%d", &grade);
  
  if (grade >= 55)
    printf("Passed\n");
  else
    printf("Failed\n");
    printf("You must take this course again\n");
    
  return 0;
}
*/
  
  
/* PRACTICE 3
 int main(){
   char color;
   
   color = getchar();
   switch(color){
     case 'R': printf("Red\n");
     case 'G': printf("Green\n");
     case 'B': printf("Blue\n");
   }
   return 0;
 }
 */
   
   
/* PRACTICE 4
 int main(){
   int ph;
   
   scanf("%d", &ph);
   
   if(ph > 7){
     if(ph < 12)
       printf("Alkaline");
     else
       printf("Very Alkaline");
   }
   else{
     if(ph == 7){
       printf("Neutral");
     }
     else{
       if(ph > 2){
         printf("Acidic");
       }
       else{
         printf("Very Acidic");
       }
     }
   }
   return 0;
 }
 */
 
 /* PRACTICE 5
 int main(){
   int watt;
   
   scanf("%d", &watt);
   
   switch(watt){
     case '15': printf("125"); break;
     case '25': printf("215"); break;
     case '40': printf("500"); break;
     case '60': printf("880"); break;
     case '75': printf("1000"); break;
     case '100': printf("1675"); break;
     default : printf("-1"); break;
   }
   return 0;
 }
 */

/* PRACTICE 6
int main(){
  int wind;
  
  scanf("%d", &wind);
  
  if (wind < 25){
    printf("Not a strong wind");
  }
  else if(wind <= 38)
    printf("Strong wind");
    else if(wind <= 54)
      printf("Gale");
      else if(wind <=72)
        printf("Whole gale");
        else if(wind > 72)
          printf("Hurricane");
  return 0;
}
*/
