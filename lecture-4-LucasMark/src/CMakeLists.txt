add_executable(exercise-4.1 exercise-4.1.c)
add_executable(exercise-4.2 exercise-4.2.c)
add_executable(exercise-4.3 exercise-4.3.c)
add_executable(exercise-4.5 exercise-4.5.c)

add_executable(exercise-PSPDC-226-1 exercise-PSPDC-266-1.c)
add_executable(exercise-PSPDC-267-1 exercise-PSPDC-267-1.c)
add_executable(exercise-PSPDC-227-1 exercise-PSPDC-267-3.c)
add_executable(exercise-PSPDC-275-1 exercise-PSPDC-275-1.c)
add_executable(exercise-PSPDC-275-6 exercise-PSPDC-275-6.c)
add_executable(exercise-PSPDC-281-1 exercise-PSPDC-281-1.c)
add_executable(exercise-PSPDC-292-2 exercise-PSPDC-292-2.c)
add_executable(exercise-PSPDC-292-P2 exercise-PSPDC-292-P2.c)

# Programmeringsopgave 1 side 275 benytter sin og cos funktionerne fra math biblioteket.
# Derfor skal vi 'linke' math biblioteket til programmet (executable) for denne opgave.
target_link_libraries(exercise-PSPDC-275-1 m)
