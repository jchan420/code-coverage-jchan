This repository is used to demonstrate how to use gcov to generate code coverage reports.

# Code-Coverage-Demo

How to manually generate code coverage on the main executable:

1. Compile using the following flag: `g++ -Wall -fprofile-arcs -ftest-coverage src/math.cpp main.cpp -o main`

	* `-Wall` enables all compiler warnings, which as good coders we should always do.
	* `-fprofile-arcs` is the flag that enables the recording of which lines of codes are executed and how many times.
	* `-ftest-coverage` generates a report that can be read by Gcov.

2. Run the `main` executable once.

	* Note: every time you run the executable, it adds the line counts from the current execution onto the previous executions. to reset the line counts to zero, type `lcov --zerocounters --directory .`

3. Run `gcov main.cpp` and `gcov math.cpp` to generate .gcov files

4. View code coverage within `main.cpp.gcov` and `math.cpp.gcov`


How to generate code coverage using unit tests:

1. Run `cmake .` and `make` for this repo

	* CMakeLists.txt.in has special information for using the googletest submodule with gcov

2. Run the `./bin/test` executable once.

3. Enter the `CMakeFiles/test.dir/src` directory in your terminal.

4. Run `gcov math.cpp.gcno`

5. generate html report within `CMakeFiles/test.dir/src` by using the following terminal commands:

```
lcov --capture --directory . --output-file gtest_coverage.info
genhtml gtest_coverage.info --output-directory CODE_COVERAGE
```

6. download the `CODE_COVERAGE` folder that was just generated to your local computer.

7. double click and run `index.html` on your local computer.
