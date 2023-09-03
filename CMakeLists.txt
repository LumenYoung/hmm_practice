cmake_minimum_required(VERSION "3.15") # set minimum requirement
project("HMM algorithms") # set project name
add_executable("forward" src/main.cpp src/hmm.h src/hmm.cpp) # add executable
