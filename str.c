#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char *str = "England is my city.";
  char c = ' ';
  char c2 = 'z';
  char *str2 = "my";
  char *str3 = "skrrra";
  
  printf("Str after first instance of a space: %s\n",strchr(str,c));
  printf("Str after first instance of a z: %s\n",strchr(str,c2));
  printf("Str after first instance of my: %s\n",strstr(str,str2));
  printf("Str after first instance of skrrra: %s\n",strstr(str,str3));
  


  return 0;


}
