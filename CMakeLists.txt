cmake_minimum_required(VERSION 3.10)

project(HelloC)

set(PROJ_SOURCES
    src/myLib.c
    main.c
    )

set(PROJ_HEADERS
    inc/
    )

set(CMAKE_EXE_LINKER_FLAGS
    "${CMAKE_EXE_LINKER_FLAGS} \
    --coverage"
)

set(CMAKE_C_FLAGS
    "${CMAKE_EXE_LINKER_FLAGS} \
    -O0 \
    -fprofile-arcs \
    -ftest-coverage"
)

include_directories(${PROJ_HEADERS})

add_executable(helloC
    ${PROJ_SOURCES}
)