include_directories(${CMAKE_CURRENT_SOURCE_DIR}/..)

file(GLOB EXECUTABLES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

foreach(EXECUTABLE ${EXECUTABLES})
    get_filename_component (EXECUTABLE_NAME ${EXECUTABLE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${EXECUTABLE})
    target_link_libraries(${EXECUTABLE_NAME} wip_library)
endforeach()
