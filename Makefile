CC = gcc
CFLAGS = -o
OUTOBJ = gentooessentials
STOBJS = pkgs/st.c pkgs/st.h
DWMOBJS = pkgs/dwm.c pkgs/dwm.h

TARGET_EXEC = Main

BUILD_DIR = ./build

$(OUTOBJ): Main.o st.o dwm.o
	@echo Building...
	@$(CC) Main.o st.o dwm.o $(CFLAGS) $(OUTOBJ) -g

Main.o: Main.c Main.h
	@$(CC) -c Main.c

st.o: $(STOBJS)
	@$(CC) -c pkgs/st.c

dwm.o: $(DWMOBJS)
	@$(CC) -c pkgs/dwm.c

install:
	@echo Installing...
	@sudo mv $(OUTOBJ) /usr/local/bin
	@sudo cp -r gntessential ~

clean:
	@rm -rf st.o Main.o dwm.o
