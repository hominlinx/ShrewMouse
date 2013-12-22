macro(ADD_PROJECT type group dir)
    foreach(var ${ARGN})
        list(APPEND ${LIB_NAME}_${type} ${dir}${var})
        source_group(${group} FILES ${dir}${var})
    endforeach(var)
endmacro(ADD_PROJECT)

macro(SET_PROJECT type group dir match)
    file(GLOB var ${dir}*${match})

    foreach(f ${var})
        get_filename_component(f ${f} NAME_WE)
        ADD_PROJECT(${type} ${group} ${dir} "${f}${match}")
    endforeach()
endmacro(SET_PROJECT)

macro(ADD_PROJECT_FILE group dir)
    foreach(var ${ARGN})
        list(APPEND ${LIB_NAME}_FILE ${dir}${var})
        source_group(${group} FILES ${dir}${var})
    endforeach(var)
endmacro(ADD_PROJECT_FILE)

macro(SET_PROJECT_FILES group dir match)
    file(GLOB hominlinx_files ${dir}*${match})

    foreach(f ${hominlinx_files})
        get_filename_component(f ${f} NAME_WE)
        ADD_PROJECT_FILE(${group} ${dir} "${f}${match}")
    endforeach()
endmacro(SET_PROJECT_FILES)

macro(PRE_BUILD_EVENT target)
    set( LIB_NAME ${target} )
    set( EXE_NAME ${target} )
    string(TOUPPER ${LIB_NAME} LIB_NAME_TOUPPER)
endmacro(PRE_BUILD_EVENT)

macro(POST_BUILD_EVENT)
    install(TARGETS ${LIB_NAME}
            RUNTIME DESTINATION bin/debug
            CONFIGURATIONS Debug
            LIBRARY DESTINATION lib/debug
            CONFIGURATIONS Debug
            ARCHIVE DESTINATION lib/debug
            CONFIGURATIONS Debug
            PERMISSIONS WORLD_READ
        )
endmacro(POST_BUILD_EVENT)

macro(PRE_BUILD project)
    project(${project})
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../dist/bin)
    set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
    
    set(CMAKE_MODULE_PATH "/usr/local/lib/OGRE/cmake;${CMAKE_MODULE_PATH}")
    set(OGRE_SAMPLES_INCLUDEPATH "/usr/local/share/OGRE/samples/Common/include/")

    find_package(OGRE REQUIRED)
    find_package(OIS REQUIRED)
    find_package(Boost REQUIRED)
endmacro(PRE_BUILD)


