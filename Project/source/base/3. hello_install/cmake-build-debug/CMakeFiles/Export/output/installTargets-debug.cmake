#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Top::hello_install" for configuration "Debug"
set_property(TARGET Top::hello_install APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Top::hello_install PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/app/hello_install.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS Top::hello_install )
list(APPEND _IMPORT_CHECK_FILES_FOR_Top::hello_install "${_IMPORT_PREFIX}/app/hello_install.exe" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
