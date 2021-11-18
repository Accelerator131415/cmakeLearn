aux_soruce_directory(. SOURCE)

add_library(tp STATIC ${SOURCE})

target_include_directories(tp
                        PUBLIC
                        ../include
                        )