cmake_minimum_required(VERSION 3.24)
project(Blackjack)

set(CMAKE_CXX_STANDARD 17)

add_executable(Blackjack main.cpp Card.cpp supportFunc.cpp test.cpp BlackJack.cpp BlackJack.h)
