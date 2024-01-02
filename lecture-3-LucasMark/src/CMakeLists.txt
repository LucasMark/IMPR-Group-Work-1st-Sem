add_executable(exercise-3.1 exercise-3.1.c)
add_executable(exercise-3.2 exercise-3.2.c)
add_executable(exercise-3.3 exercise-3.3.c)
add_executable(exercise-3.5 exercise-3.5.c)

add_executable(exercise-PSPDC-204-2 exercise-PSPDC-204-2.c)
add_executable(exercise-PSPDC-205-1 exercise-PSPDC-205-1.c)
add_executable(exercise-PSPDC-205-2 exercise-PSPDC-205-2.c)
add_executable(exercise-PSPDC-205-5 exercise-PSPDC-205-5.c)
add_executable(exercise-PSPDC-236-3 exercise-PSPDC-236-3.c)
add_executable(exercise-PSPDC-242-P1 exercise-PSPDC-242-P1.c)
add_executable(exercise-PSPDC-242-P2 exercise-PSPDC-242-P2.c)
add_executable(exercise-PSPDC-242-SC1 exercise-PSPDC-242-SC1.c)
add_executable(exercise-PSPDC-252-6 exercise-PSPDC-252-6.c)

# I Opgave 3.1 vil du måske gøre brug af <math.h>.
# For nogle compilere skal math biblioteket eksplicit 'linkes'.
# Det klares med følgende CMake kommando.
target_link_libraries(exercise-3.1 m)  # Tilføjer compiler option '-lm'
