cmake_minimum_required(VERSION 3.16)
project(EventObserver VERSION 1.0 LANGUAGES CXX)

set(MAIN main.cpp)
set(TESTS EventObserver.ut.cpp)
set(SOURCE IEventInformer.cpp IEventListener.cpp DragonsEventInformer.cpp DarkElvesEventInformer.cpp Player.cpp)
set(COMPILE_FLAGS -Wall -Wextra -Werror -Wconversion -pedantic -O3)

set(CMAKE_BUILD_TYPE Debug)

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} ${MAIN} ${SOURCE})
add_executable(${PROJECT_NAME}-ut ${TESTS} ${SOURCE})

target_compile_options(${PROJECT_NAME} PRIVATE ${COMPILE_FLAGS})
target_compile_options(${PROJECT_NAME}-ut PRIVATE ${COMPILE_FLAGS})

set_target_properties(${PROJECT_NAME} PROPERTIES
                        CXX_STANDARD 17
                        CXX_STANDARD_REQUIRED ON)

set_target_properties(${PROJECT_NAME}-ut PROPERTIES
                        CXX_STANDARD 17
                        CXX_STANDARD_REQUIRED ON)

enable_testing()
add_test(NAME ${PROJECT_NAME}-tests COMMAND ${PROJECT_NAME}-ut)
