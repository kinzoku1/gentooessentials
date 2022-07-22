CC = gcc
CFLAGS = -o
OUTOBJ = gentooessentials
STOBJS = st/st.c st/st.h

TARGET_EXEC = Main

BUILD_DIR = ./build

$(OUTOBJ): Main.o st.o
	@echo Building...
	@$(CC) Main.o st.o $(CFLAGS) $(OUTOBJ) -g

Main.o: Main.c Main.h
	@$(CC) -c Main.c

st.o: $(STOBJS)
	@$(CC) -c st/st.c

install:
	@echo Installing...
	@sudo mv $(OUTOBJ) /usr/local/bin
	@sudo cp -r gntessential ~

clean:
	@rm -rf st.o Main.o
