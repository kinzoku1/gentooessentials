#include <stdio.h>
#include <stdlib.h>
#include "st.h"

extern void installst()
{
    printf("[CLONING REPOSITORY...]\n");
    system("cd ~ && git clone https://git.suckless.org/st");
    printf("[CONFIGURING...]\n");
    system("cd ~/st");
    system("cp ~/gentooessentials/stdiffs/* ~/st/");
    system("git apply st-scrollback-0.8.5.diff");
    system("git apply st-scrollback-reflow-0.8.5.diff");
    system("git apply st-scrollback-mouse-20220127-2c5edf2.diff");
    printf("[INSTALLING...]\n");
    system("make clean install");
    printf("Installation finished!");
    return;
}
