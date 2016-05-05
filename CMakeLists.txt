cmake_minimum_required(VERSION 3.5)
project(c_problems)

add_executable(problema1 problema001/problema1.c)

add_executable(problema2 problema002/problema2.c)

add_executable(problema3 problema003/problema3.c)
target_link_libraries(problema3 m)

add_executable(problema4 problema004/problema4.c)
target_link_libraries(problema4 m)

add_executable(problema5 problema005/problema5.c)
target_link_libraries(problema5 m)

add_executable(problema6 problema006/problema6.c)

add_executable(problema7 problema007/problema7.c)
target_link_libraries(problema7 m)

add_executable(problema8 problema008/problema8.c)

add_executable(problema9 problema009/problema9.c)
target_link_libraries(problema9 m)

add_executable(problema10 problema010/problema10.c)

add_executable(problema11 problema011/problema11.c)

add_executable(problema12 problema012/problema12.c)

add_executable(problema13 problema013/problema13.c)
target_link_libraries(problema13 m)

add_executable(problema14 problema014/problema14.c)
