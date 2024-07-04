list(
    APPEND EXECUTABLES
    main
    another_main
)

foreach(EXECUTABLE IN LISTS EXECUTABLES)
    add_executable(${EXECUTABLE} ${EXECUTABLE}.cpp)
    target_include_directories(${EXECUTABLE} PRIVATE ${CMAKE_SOURCE_DIR}/include)
    install(TARGETS ${EXECUTABLE} DESTINATION ${EXECUTABLE} COMPONENT ${EXECUTABLE})
    target_compile_options(${EXECUTABLE} PRIVATE
    -Wall 
    -Wextra 
    -Wno-changes-meaning 
    -Wdouble-promotion
    )
    target_compile_features(${EXECUTABLE} PRIVATE
    cxx_std_20
    )
endforeach()

