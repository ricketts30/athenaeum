# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=gcc

all: app problem

problem: problem.o app_common.o
	$(CC) app_common.o problem.o -o problem

app: app.o app_common.o
	$(CC) app_common.o app.o -o app

problem.o: problem.c
	$(CC) -c problem.c

app.o: app.c
	$(CC) -c app.c

app_common.o: app_common.c
	$(CC) -c app_common.c

clean:
	rm -rf *.o app.exe app problem.exe problem
