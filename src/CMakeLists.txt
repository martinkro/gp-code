set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(GP_SOURCES 
    main.cpp
    )

include_directories("include" ".")    

add_executable(gp ${GP_SOURCES})