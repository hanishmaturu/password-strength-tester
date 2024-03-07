#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
   char string[100], ch;
   bool low=false, up=false, s=false, n=false;
   int i, score;
   printf("enter string[10]: ");
   scanf("%s", string);
   for(i=0;i<strlen(string) ;i++)  
   {
     printf("%c",string[i]);
     ch = string[i];
     if(ch>='a' && ch<='z'){
     low = true;
     }
     else if(ch>='A' && ch<='Z'){
        up = true;
        }
     else if(ch>='0' && ch<='9'){
       n = true;
       }
     else {
      s = true;
    }
       
   }
   printf("\n low %d ",low) ;
   printf("\n up %d",up) ;
   printf("\n n  %d",n) ;
   printf("\n s %d",s);
   
   if(low && up && n && s){
        score = 9;
   }
   else if( (low && up) && s) {
       score = 8;
   }  
   else if(n && s) {
        score = 7;
   }
   else if((low && s ) || (up && s)){
        score = 6;
   }
   else if(s) {
        score = 5;
   }
   else if(low && up && n){
        score = 4;
   }
   else if((low && n) ||(up && n)){
        score = 3;
   }
   else if( low && up) {
        score = 2;
   }
   else if(low || up || n) {
        score = 1;
   } 
   
   
   if(strlen(string) <=7) {
        printf("\n score = %d", score) ;
   }
   else{
        printf("\n score = %d", score+1) ;
   }
   
   char passwordStrength[10];
   if(score<=3) {
       strcpy(passwordStrength,"Weak") ;
   }
   else if(score>3 && score <7) {
      strcpy(passwordStrength, "Medium");
   }
   else{
      strcpy(passwordStrength,"Strong") ;
   }
  printf("\n Password Strength: %s", passwordStrength) ;
   return 0;
}
    