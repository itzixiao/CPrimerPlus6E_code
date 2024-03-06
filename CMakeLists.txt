cmake_minimum_required(VERSION 2.8.12.2)
project(CPrimerPlus6E_code)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")


add_executable(review_1_7 src/Ch01/review/review_1_7.c)

add_executable(escape src/Ch03/escape.c)

add_executable(defines src/Ch04/defines.c)
add_executable(flags src/Ch04/flags.c)
add_executable(floatcnv src/Ch04/floatcnv.c)
add_executable(floats src/Ch04/floats.c)
add_executable(input src/Ch04/input.c)
add_executable(intconv src/Ch04/intconv.c)
add_executable(longstrg src/Ch04/longstrg.c)
add_executable(pizza src/Ch04/pizza.c)
add_executable(praise1 src/Ch04/praise1.c)
add_executable(praise2 src/Ch04/praise2.c)
add_executable(printout src/Ch04/printout.c)
add_executable(prntval src/Ch04/prntval.c)
add_executable(skiptwo src/Ch04/skiptwo.c)
add_executable(stringf src/Ch04/stringf.c)
add_executable(talkback src/Ch04/talkback.c)
add_executable(varwid src/Ch04/varwid.c)
add_executable(width src/Ch04/width.c)

add_executable(review_4_7_3 src/Ch04/review/review_4_7_3.c)
add_executable(review_4_7_4 src/Ch04/review/review_4_7_4.c)
add_executable(review_4_7_5 src/Ch04/review/review_4_7_5.c)

add_executable(guess src/Ch08/guess.c)
add_executable(showchar1 src/Ch08/showchar1.c)
add_executable(echo src/Ch08/echo.c)

add_executable(test src/Ch10/test.c)
add_executable(book src/Ch14/book.c)
add_executable(manybook src/Ch14/manybook.c)
