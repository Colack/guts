# Just run gcc guts.c guts-core/core.c guts-core/run-command.c -o guts

CC=gcc
CFLAGS=-I.

guts: guts.c guts-core/core.c guts-core/run-command.c
	$(CC) -o guts guts.c guts-core/core.c guts-core/run-command.c $(CFLAGS)