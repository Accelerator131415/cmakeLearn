cmake_minimum_required(VERSION 3.13.0)

project(helloWorld)

# 查找目标目录下的所有源文件，并且保存到SOURCE变量里
aux_source_directory(src SOURCE)

# add_executable用来生成目标可执行文件
# 普通可执行文件：
# add_executable (<name> [WIN32] [MACOSX_BUNDLE]
#               [EXCLUDE_FROM_ALL]
#               [source1] [source2 ...])
# name:可执行目标文件的名字，全局唯一
# WIN32:用于windows系统下创建一个以WinMain为入口的可执行目标文件（通常入口函数为main）。当WIN32选项使用时，可执行目标的WIN32_EXECUTABLE会被置
# 位ON
# MACOSX_BUNDLE：用于mac系统或IOS系统下创建一个可执行的GUI程序。当该选项使用时，MACOSX_BUNDLE会被置位ON
# EXCLUDE_FROM_ALL：用于指定可执行目标是否会被构建，当该选项使用的时候，可执行目标不会被构建
# [source1] [source2] 构建可执行目标文件所需要的源文件，也可以通过target_source 继续为可执行目标文件添加源文件
# 导入可执行目标文件：
# add_executable(<name> IMPORTED [ GLOBAL ])
# 别名可执行目标文件：
# add_executable（<name> ALIAS <target>)
add_executable(helloWorld main.cpp)
target_sources(helloWorld
        PUBLIC
        ${SOURCE})

target_include_directories(helloWorld
        PUBLIC
        include)
