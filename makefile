CXX			:= g++

EXE_NAME	:= Lab2

MSG_START	:= "Build Started"
MSG_END		:= "Build Complete"
MSG_CLEAN	:= "Cleaning up"

BUILD_DIR	:= ./bin
SRC_DIR		:= ./src
INCL_DIR	:= ./include

SRC			:= ${SRC_DIR}/*

all			:= build

build:
	@echo ${MSG_START}

	#remove directory if it exits and then create directory
	rm -rf ${BUILD_DIR} || true

	#create bin directory
	mkdir ${BUILD_DIR}

	${CXX} -o ${EXE_NAME} ${SRC} -I${INCL_DIR}

	@echo ${MSG_END}
	./${EXE_NAME}

.PHONY: clean

clean:
	@echo ${MSG_CLEAN}
	rm -rf ${BUILD_DIR} || true