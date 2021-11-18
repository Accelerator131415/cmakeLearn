cmake_minimum_required(VERSION 3.13.0)

project(hello_install)

aux_source_directory(src DIR)

add_library(TOPS
        STATIC
        ${DIR}
)
target_include_directories(TOPS
        PUBLIC
        include)

add_executable(hello_install main.cpp)

target_link_libraries(hello_install
        PUBLIC
        TOPS)

set_property(TARGET hello_install
        APPEND
        PROPERTY LINK_FLAGS " -W1, --version-script=${VERSION_SCRIPT}"
        )
install(TARGETS hello_install
        LIBRARY DESTINATION output/lib
        RUNTIME DESTINATION output/app
        PUBLIC_HEADER DESTINATION include)
