cmake_minimum_required(VERSION 3.5.0)

project(hello_world)
set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/output)
aux_source_directory(src DIR)
aux_source_directory(dll DLL_DIR)
aux_source_directory(ndll NDLL_DIR)

message("nihao shijie")
# add_library 指令的主要作用就是将指定的源文件生成链接文件，然后添加到工程中去，
# add_library(<name> [STATIC|SHARED|MODULE]
#                    [EXCLUDE_FROM_ALL]
#                    [source1] [source2][...])
# <name>表示库文件的名字，该库文件会根据命令里列出的源文件来创建。而STATIC，SHARED和MODULE的作用是指定生成的库文件的类型。STATIC库目标文件的归档
# 文件，在链接其他目标的时候使用。SHARED库是动态链接库。MODULE库是一种不会被链接到其他目标中的插件，但是可能会在运行时使用dlopen-系列的函数。默认状态
# 下库文件将会在于源文件目标树的构建目录树的位置被创建。
add_library(hello_lib STATIC
        ${DIR}
        )

target_include_directories(hello_lib
        PUBLIC
        include)

add_library(hello_dll SHARED
        ${DLL_DIR}
        )

add_library(hello_ndll SHARED
        ${NDLL_DIR}
        )
target_include_directories(hello_ndll
        PUBLIC
        include)
add_library(hello::dll ALIAS hello_dll)
find_library(h_dll cmake-build-debug)


add_executable(hello_world main.cpp)

# target_link_libraries(<target> [item1][item2][...]
#                                [[debug|optimized|general]<item>]...)
# 将目标文件与库文件进行链接
# 这个貌似只能链接静态库，动态库似乎链接不了:把cmake工具换成minGw 就可以了
target_link_libraries(hello_world
        PRIVATE
        hello_lib)

target_link_libraries(hello_world
        PRIVATE
        hello::dll)

install(TARGETS hello_world hello_ndll hello_lib
        RUNTIME DESTINATION output/bin
        ARCHIVE DESTINATION output/lib
        LIBRARY DESTINATION output/dll
        )

install(DIRECTORY cmake-build-debug-mingw DESTINATION output)