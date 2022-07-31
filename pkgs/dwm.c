#include <stdio.h>
#include <stdlib.h>
#include "dwm.h"

extern void installdwm(){
  printf("[CLONING REPOSITORY...]\n");
  system("cd ~ && git clone https://git.suckless.org/dwm");
  printf("[INSTALLING...]\n");
  system("cd ~/dwm && make clean install");
  system("echo 'exec dwm > ~/.dwm.log' >> ~/.xinitrc");
  printf("Installation finished!");
}

extern void infodwm(){
  printf("dwm is a dynamic window manager for X made by suckless.\n");
  printf("It manages windows in tiled, monocle and floating layouts. All of the layouts can be applied dynamically, optimising the environment for the application in use and the task performed.\n");
  printf("Configuration file available in 'dwm' folder in home directory after installation (config.h)\n");
  printf("Patches available at https://dwm.suckless.org/patches/\n");
  printf("Read more at https://dwm.suckless.org/\n");
}
