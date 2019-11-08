# Main program
PROGNAME = libft
SRC_MAIN = main.c
OBJ_MAIN = main.o
# Library libft.a
LIBRUSH = libft.a
SRCS_RUSH = $(shell find rush -name "*.c")
OBJS_RUSH = $(patsubst %.c, %.o, $(SRCS_RUSH))
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCFLAGS = -I includes
LIBFLAGS = -L lib
AR = ar -rc

all: $(PROGNAME)

$(PROGNAME): $(LIBRUSH) $(OBJ_MAIN)
	@echo Compiling Binary File: $@ ...
	$(CC) $(CFLAGS) $(LIBFLAGS) -l $(OBJ_MAIN) $(LIBRUSH) -o $@

$(LIBRUSH): $(OBJS_RUSH) $(INCS_RUSH)
	@echo Compiling Library: $@ ...
	$(AR) $@ $^

$(OBJ_MAIN): $(SRC_MAIN) $(INCS_RUSH)
	@echo Compiling Main File: $@ ...
	$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

%.o: %.c $(INCS_RUSH)
	@echo Compiling Objects Files: $@ ...
	$(CC) -c $< $(CFLAGS) $(INCFLAGS) -o $@

clean:
	@echo Deleting Objects Files: $@ ...
	rm $(OBJS_RUSH) $(OBJ_MAIN)

fclean: clean
	@echo Library and Binary Files: $@ ...
	rm $(LIBRUSH) $(PROGNAME)

re: fclean all
