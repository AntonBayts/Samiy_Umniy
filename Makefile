CXX=gcc

CFLAGS =  -c -Wall -Werror -std=c99

FLAGS  =  -Wall -Werror -std=c99

OBJECTS = build/main.o build/menu.o build/Game_Process.o build/otris.o

OB = build/menu.o build/Game_process.o build/otris.o

.PHONY: clean all bin build default

all: bin build default

default: bin/Samiy_Umniy.exe

bin/Samiy_Umniy.exe: $(OBJECTS)

	$(CXX) $(FLAGS) $(OBJECTS) -o bin/Samiy_Umniy.exe

build/main.o: src/main.c src/Game_Process.h src/menu.h src/otris.h

	$(CXX) $(CFLAGS) src/main.c -o build/main.o

build/menu.o: src/menu.c src/menu.h

	$(CXX) $(CFLAGS) src/menu.c -o build/menu.o

build/Game_Process.o: src/Game_Process.c src/Game_Procces.h src/otris.h

	$(CXX) $(CFLAGS) src/Game_Process.c -o build/Game_Procces.o

build/otris.o: src/otris.c src/otris.h

	$(CXX) $(CFLAGS) src/otris.c -o build/otris.o

build: 

	mkdir -p build

bin:

	mkdir -p bin

clean:

	-rm -rf build bin

