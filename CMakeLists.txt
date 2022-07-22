cmake_minimum_required(VERSION 3.10)

# set the project name
project(gentooessentials)

add_subdirectory(st)

# add the executable
add_executable(gentooessentials Main.c)

target_link_libraries(gentooessentials PUBLIC ${PROJECT_SOURCE_DIR}/Main.h)
target_link_libraries(gentooessentials PUBLIC st)

target_include_directories(gentooessentials PUBLIC
                                            "${PROJECT_BINARY_DIR}"
                                            "${PROJECT_SOURCE_DIR/st}"
                                            )

install(TARGETS gentooessentials DESTINATION bin)
