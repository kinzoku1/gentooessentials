#include <stdio.h>
#include <string.h>
#include "st/st.h"
#include "Main.h"

int main(int argc, char **argv){
  int pkg = 0;
  if (strcmp("--install", argv[1])){
    mode = "install";
  } else if (strcmp("--info", argv[1])){
    mode = "info";
  }else{
    printf("ERROR: Incorrect Arguments\n");
    return 0;
  }

  if (strcmp("st", argv[2])){
    pkg = ST;
  }else if(strcmp("dwm", argv[2])){
    pkg = DWM;
  }else if(strcmp("slstatus", argv[2])){
    pkg = SLSTATUS;
  }else{
    printf("%s\n", errorargv);
  }

  if (mode == "install"){
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
