cmake_minimum_required(VERSION 3.5)
project(c_problems)

add_executable(problema1 problema1/problema1.c)

add_executable(problema2 problema2/problema2.c)

add_executable(problema3 problema3/problema3.c)
target_link_libraries(problema3 m)

add_executable(problema4 problema4/problema4.c)
target_link_libraries(problema4 m)

add_executable(problema5 problema5/problema5.c)
target_link_libraries(problema5 m)

add_executable(problema6 problema6/problema6.c)