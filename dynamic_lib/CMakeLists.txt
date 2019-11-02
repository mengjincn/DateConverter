project(dynamic_lib)

set(HEADER_FILES
        dynamic.h
        )

set(SOURCE_FILES
        dynamic.cpp
        )

add_library(dynamic_lib SHARED ${SOURCE_FILES} ${HEADER_FILES})