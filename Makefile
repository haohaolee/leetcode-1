all: build

prepare:
	@echo "===> Generating CMake files for building..."
	@test -s ./build || mkdir build
	@cmake . -B ./build

clean:
	@echo "===> Cleaning temporary build files..."
	@rm -rf ./build

build: prepare
	@echo "===> Building target..."
	@cmake --build ./build

rebuild: clean build

test: build
	@echo "===> Testing target..."
	@cd build && ctest --progress -VV --output-on-failure
	@cd ..

.PHONY: all build test