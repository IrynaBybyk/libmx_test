NAME = test_libmx

NLIB = libmx.a

HDR = tests.h

SRC = *.c

OBJ = $(SRC:.c=.o)

CFLAG = -std=c11 -Wall -Wextra -Wpedantic -Werror

all: install clean

install:
	@cd .. && make -f Makefile install
	@cp ./src/*.c ./inc/*.h ../inc/*.h ../libmx.a .
	@clang $(CFLGS) -c *.c -I *.h
	@mkdir obj
	@clang $(CFLAG) *.o $(NLIB) -o $(NAME)
	@mv *.o ./obj
	@rm libmx.h *.c

uninstall:
	@rm -rf $(NLIB)

clean: 
	@cd .. && make -f Makefile clean
	@rm -rf *.c *.h *.o libmx.a test.h.gch
	@rm -rf ./obj

reinstall: uninstall install