#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
  printf("What would you like to do? ");
  char *a = calloc(1, 256);
  fgets(a, 255, stdin);
  //printf("%s", a);
  char *s;
  char *ans[20];
  int i = 0;
  a = strsep(&a, "\n");
  while(a != NULL){
    s = strsep(&a, " ");
    ans[i] = s;
    //printf("%s %s\n", s, ans[i]);
    i++;
  }
  ans[i] = 0;
  execvp(ans[0], ans);
  return 0;
}
