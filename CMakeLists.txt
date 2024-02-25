cmake_minimum_required(VERSION 3.22)

add_library(gsm_link 
            STATIC "src/gsm_link.cpp")

target_include_directories(gsm_link 
                           PUBLIC include)

target_link_libraries(gsm_link lmf abstract_link)
