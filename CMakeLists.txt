cmake_minimum_required(VERSION 3.16)

project(graph-visualizer VERSION 1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")

set(FILES src/main.cpp
            )

add_executable(main ${FILES})

# set(TEST_FILES tests/testMain.cpp
#                 tests/testCharacter.cpp
#                 tests/testSpriteAnimation.cpp

                # spriteAnimation.cpp
                # character.cpp
                # drawable.cpp)

# add_executable(tests ${TEST_FILES})

target_include_directories(main PUBLIC ${CMAKE_SOURCE_DIR}/include)
# target_include_directories(tests PUBLIC ${CMAKE_SOURCE_DIR}/internal)

# find_library(OPENGL GL)
# find_library(GLEW GLEW)
# find_library(GLFW glfw)

# target_link_libraries(main GL GLEW glfw)