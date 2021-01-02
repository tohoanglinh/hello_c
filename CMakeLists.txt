cmake_minimum_required(VERSION 3.14)

project(HelloC)

set(PROJ_SOURCES
    src/myLib.c
    main.c
    )

set(PROJ_HEADERS
    inc/
    )

include_directories(${PROJ_HEADERS})

add_executable(helloC
    ${PROJ_SOURCES}
)