cmake_minimum_required(VERSION 2.8.12.2)
project(CPrimerPlus6E_code)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

add_executable(practice_1_7 Ch01/practice/practice_1_7.c)

add_executable(escape Ch03/escape.c)

add_executable(defines Ch04/defines.c)
add_executable(flags Ch04/flags.c)
add_executable(floatcnv Ch04/floatcnv.c)
add_executable(floats Ch04/floats.c)
add_executable(input Ch04/input.c)
add_executable(intconv Ch04/intconv.c)
add_executable(longstrg Ch04/longstrg.c)
add_executable(pizza Ch04/pizza.c)
add_executable(praise1 Ch04/praise1.c)
add_executable(praise2 Ch04/praise2.c)
add_executable(printout Ch04/printout.c)
add_executable(prntval Ch04/prntval.c)
add_executable(skiptwo Ch04/skiptwo.c)
add_executable(stringf Ch04/stringf.c)
add_executable(talkback Ch04/talkback.c)
add_executable(varwid Ch04/varwid.c)
add_executable(width Ch04/width.c)

add_executable(practice_4_7_3 Ch04/practice/practice_4_7_3.c)

add_executable(guess Ch08/guess.c)
add_executable(showchar1 Ch08/showchar1.c)
add_executable(echo Ch08/echo.c)

add_executable(test Ch10/test.c)

add_executable(book Ch14/book.c)
add_executable(manybook Ch14/manybook.c)



