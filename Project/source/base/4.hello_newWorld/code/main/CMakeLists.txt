aux_source_directory(. MAIN)

add_executable(newWolrd ${MAIN})

target_link_libraries(newWolrd
                    PUBLIC
                    topObj)