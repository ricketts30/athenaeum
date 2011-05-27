# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=gcc

all: app

app: app.o app_common.o
	$(CC) app_common.o app.o -o app

app.o: app.c
	$(CC) -c app.c

app_common.o: app_common.c
	$(CC) -c app_common.c

clean:
	rm -rf *.o hello.exe