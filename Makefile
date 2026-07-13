SRC_DIR = src
BOARD = arduino:avr:uno
PORT = /dev/ttyUSB0

all: compile

compile:
	arduino-cli compile --fqbn $(BOARD) $(SRC_DIR)

upload:
	arduino-cli upload -p $(PORT) --fqbn $(BOARD) -v $(SRC_DIR)