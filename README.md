# Leetcode #

[![Build Status](https://travis-ci.org/adsk-shanghai/leetcode.svg?branch=master)](https://travis-ci.org/adsk-shanghai/leetcode)
[![Build status](https://ci.appveyor.com/api/projects/status/?svg=true)](https://ci.appveyor.com/project/adsk-shanghai/leetcode)

C++ solutions and unit tests for [LeetCode](https://leetcode.com/).

## Categories ##

* [Array](src/array)
* [String](src/string)
* [Search](src/search)
* [Backtracking](src/backtracking)
* [Binary Search](src/binary_search)
* [Bit Manipulation](src/bit_manipulation)
* [Dynamic Programming](src/dp)
* [Greedy](src/greedy)
* [Hash](src/hash)
* [List](src/list)
* [Math](src/math)
* [Sort](src/sort)
* [Stack](src/stack)
* [Queue](src/queue)
* [Graph](src/graph)
* [Tree](src/tree)

## Requirements ##

Leetcode's unit test has very strong dependency on [Google Test](https://github.com/google/googletest), so the basic requirements to build and run it are exactly the same. Currently, we have official supports and rolling build for Windows, Mac OS X and Linux.

### General Requirements ###

* Install latest [Git Client](https://git-scm.com/downloads).
* Install latest version of [CMake](https://cmake.org/download).

### Linux Requirements ###

* GNU-compatible Make or gmake
* POSIX-standard shell
* POSIX(-2) Regular Expressions (regex.h)
* A C++98-standard-compliant compiler

### Mac OS X Requirements ###

* Mac OS X v10.4 Tiger or newer
* Xcode Developer Tools

### Windows Requirements ###

* Microsoft Visual Studio 2015 or newer.

## How to run the unit test ##

* `make test`

Happy coding !
