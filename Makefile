CXX=gcc

CFLAGS =  -c -Wall -Werror -std=c99

FLAGS  =  -Wall -Werror -std=c99

OBJECTS = build/main.o build/menu.o build/Game_Process.o build/otris.o

OB = build/menu.o build/Game_Process.o build/otris.o

TEST_O = build/test.o

.PHONY: clean all bin build default test

all: default test

default: bin build bin/Samiy_Umniy

test: bin build bin/Samiy_Umniy_Test
	bin/Samiy_Umniy_Test

bin/Samiy_Umniy: $(OBJECTS)

	$(CXX) $(FLAGS) $(OBJECTS) -o bin/Samiy_Umniy

bin/Samiy_Umniy_Test: $(TEST_O)
	$(CXX) $(FLAGS) $(TEST_O) $(OB) -o bin/Samiy_Umniy_Test

build/test.o: src/test/test.c
	$(CXX) $(CFLAGS) src/test/test.c -I thirdparty/ -I src/main/ -o build/test.o

build/main.o: src/main/main.c src/main/menu.h src/main/Game_Process.h src/main/otris.h

	$(CXX) $(CFLAGS) src/main/main.c -o build/main.o

build/menu.o: src/main/menu.c src/main/menu.h

	$(CXX) $(CFLAGS) src/main/menu.c -o build/menu.o

build/Game_Process.o: src/main/Game_Process.c src/main/Game_Process.h src/main/otris.h

	$(CXX) $(CFLAGS) src/main/Game_Process.c -o build/Game_Process.o

build/otris.o: src/main/otris.c src/main/otris.h

	$(CXX) $(CFLAGS) src/main/otris.c -o build/otris.o

build: 

	mkdir -p build

bin:

	mkdir -p bin

clean:

	-rm -rf build bin

run:

	bin/Samiy_Umniy
