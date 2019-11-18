SRC_DIR=./RetroGaming
BUILD_DIR=./build
APP_NAME=RetroGamingApp
CXX_FLAGS=--std=c++17 -g -O0 -Werror -Wextra -Wall
INCLUDE_PATHS=-I ./stduuid/include

SOURCE_FILES=$(wildcard ${SRC_DIR}/*.cpp)
OBJECTS=$(SOURCE_FILES:${SRC_DIR}/%.cpp=${BUILD_DIR}/%.o)

# https://stackoverflow.com/questions/714100/os-detecting-makefile
ifeq '$(findstring ;,$(PATH))' ';'
    detected_OS := Windows
else
    detected_OS := $(shell uname 2>/dev/null || echo Unknown)
    detected_OS := $(patsubst CYGWIN%,Cygwin,$(detected_OS))
    detected_OS := $(patsubst MSYS%,MSYS,$(detected_OS))
    detected_OS := $(patsubst MINGW%,MSYS,$(detected_OS))
endif

ifeq ($(detected_OS),Windows)
    CFLAGS += -D WIN32
endif
ifeq ($(detected_OS),Darwin)        # Mac OS X
    CFLAGS += -D OSX
	LINK_FLAGS= -framework CoreServices
endif
ifeq ($(detected_OS),Linux)
    CFLAGS   +=   -D LINUX
endif

${APP_NAME}: ${OBJECTS}
	${CXX} -o $@ $^ ${CXX_FLAGS} ${INCLUDE_PATHS} ${LINK_FLAGS}

${BUILD_DIR}/%.o : ${SRC_DIR}/%.cpp
	${CXX} -c -o $@ $< ${CXX_FLAGS} ${INCLUDE_PATHS}

clean:
	-rm ${BUILD_DIR}/*
	-rm -r ${APP_NAME}

lint:
	@echo "Disabled until clang-format file is created"
	#clang-format ${SOURCE_FILES}

analyse:
	cppcheck --std=c++17 --inline-suppr --enable=all ${SOURCE_FILES}
