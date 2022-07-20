#include <stdio.h>
#include <string.h>
#include "pkgs/st.h"
#include "Main.h"

int main(int argc, char **argv){
  for(int i = 0; i < argc; i++){
    if (strcmp("--install", argv[1])){
      mode = "install";
    } else if (strcmp("--info", argv[1])){
      mode = "info";
    }else{
      printf("ERROR: Incorrect Arguments\n");
      return 0;
    }


  }

  if (mode == "install" && strcmp("st", argv[2])){
    installst();
  }

  return 0;
}
