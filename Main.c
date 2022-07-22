#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "st/st.h"
#include "Main.h"

int main(int argc, char *argv[]){
  int pkg = 0;
  if (strcmp(argv[1], "--install") == 0){
    mode = "install";
  } else if (strcmp(argv[1], "--info") == 0){
      mode = "info";
  }else{
    printf("ERROR: Incorrect Arguments\n");
    return 0;
  }

  if (strcmp(argv[2], "st") == 0){
    pkg = ST;
  }else if(strcmp(argv[2], "dwm") == 0){
    pkg = DWM;
  }else if(strcmp(argv[2], "slstatus") == 0){
    pkg = SLSTATUS;
  }else{
    printf("%s\n", errorargv);
  }

  if(strcmp("install", mode) == 0){
   switch(pkg){
     case ST:
       installst();
       break;
     default:
       printf("%s\n", errorargv);
   }
  }
  return 0;
}
