CC=g++                  #переменная (макрос) с именем компилятора
CFLAGS=-c -std=c99      #переменная с перечислением флагов
OUTPUT=complex          #имя исполняемого файла

goal: main.o complex.o
        $(CC) main.o complex.o -o $(OUTPUT)

main.o: main.cpp
        $(CC) main.cpp $(CFLAGS)

complex.o: complex.cpp
        $(CC) complex.cpp $(CFLAGS)

clean:
        rm -rf *.o $(OUTPUT)

