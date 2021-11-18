aux_source_directory(. SOURCE)

add_library(topObj OBJECT ${SOURCE})

target_include_directories(topObj
                        PUBLIC
                        ../include)
