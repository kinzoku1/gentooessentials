#ifndef MAIN_H
#define MAIN_H

enum PKG {
  ST = 1,
  DWM,
  SLSTATUS,
};

char *error = "ERROR: Operation failed\n";
char *errorargv= "ERROR: Incorrect Arguments\n";
char *errorargc = "ERROR: Too many arguments\n";

char *mode;

#endif
