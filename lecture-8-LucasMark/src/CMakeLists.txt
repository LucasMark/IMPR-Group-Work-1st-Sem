
# This defines a library `point_distance` with the source file `point_distance.c`
add_library(point_distance point_distance.c)
target_link_libraries(point_distance m)
target_include_directories(point_distance PUBLIC .)


add_executable(menu menu.c)

add_executable(exercise-PSPDC-391-7 exercise-PSPDC-391-7.c)
target_link_libraries(exercise-PSPDC-391-7 m)
