cmake_minimum_required(VERSION 3.10)

project(Tutorial VERSION 2.0)

option(USE_MYMATH "use tutoiral provided math implementation" ON)

if(USE_MYMATH)
    add_subdirectory(MathFunctions)
    list(APPEND EXTRA_LIABS MathFunctions)
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/MathFunctions")
endif()

configure_file(TutorialConfig.h.in TutorialConfig.h)

add_executable(Tutorial Tutorial.cpp)

target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}" ${EXTRA_INCLUDES})

