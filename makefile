PROJ = towerdefense
OUT = towerdefense
BIN = bin
BUILD = build
CC = g++ -std=gnu++11 -msse -msse2 -msse3 -msse4 -mavx -mstackrealign -pthread -Wl,--no-as-needed
#WARN = -Wall -fpermissive -Wno-write-strings -Wno-unused-result -Wno-unknown-pragmas -Wno-format-security -Wno-parentheses
WARN = -w -fpermissive
DEFINE =
INCLUDE = -I"../core/core" -I"../core-game/core-game" -I"../core-forms/core-forms" -I"/usr/include" -I"./source"
FLAGS = -O2 $(INCLUDE) $(WARN) $(DEFINE)
LIBS = -L"lib" -lpthread -lfreetype -lSDL2 -lGL -lGLU -lcore -lcore-game -lcore-forms 

OBJ = \
	program/main.o \
	program/program.o \
	mainWindow/mainWindow.o

	

all: $(OBJ)
	$(CC) $(BIN)/* -o build/$(OUT) $(LIBS)

$(OBJ): %.o: source/%.cpp
	$(CC) -c $< -o $(BIN)/$(notdir $@) $(FLAGS)

reset:
	rm $(BUILD)/$(OUT)

clean:
	rm -rf $(BUILD)
	rm -rf $(BIN)

init:
	mkdir $(BUILD)
	mkdir $(BIN)

run:
	./$(BUILD)/$(OUT)
