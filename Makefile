# Makefile
CC = gcc
CFLAGS = -Wall -Wextra -g -I.

pingpong-tasks1: pingpong.o pingpong-tasks1.o
	$(CC) -o pingpong-tasks1 pingpong.c pingpong-tasks1.c
	
pingpong-tasks2: pingpong.o pingpong-tasks2.o
	$(CC) -o pingpong-tasks2 pingpong.c pingpong-tasks2.c
	
pingpong-tasks3: pingpong.o pingpong-tasks3.o
	$(CC) -o pingpong-tasks3 pingpong.c pingpong-tasks3.c
	
clean:
	rm *.o contexts pingpong-tasks1 pingpong-tasks2 pingpong-tasks3
