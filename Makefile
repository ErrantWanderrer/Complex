CC=g++ # указываем компилятор
LDFLAGS= # флаги линковщика
CFLAGS=-c  # флаги компилятора
SOURCES= main.cpp complex.cpp # список исходников
OBJECTS=$(SOURCES:.c=.o)
TARGET= complex # имя бинарника

all: $(TARGET)

$(TARGET): $(OBJECTS)
        $(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cpp
        $(CC) $(CFLAGS) $<

include $(wildcard   *.d)

clean:
        rm *.o *.d $(TARGET)
