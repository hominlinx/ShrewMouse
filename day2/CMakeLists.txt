PRE_BUILD_EVENT(day2)
include_directories("include")

include_directories( ${OIS_INCLUDE_DIRS}
            ${OGRE_INCLUDE_DIRS}
            ${OGRE_SAMPLES_INCLUDEPATH}
            )

SET_PROJECT_FILES(include include/ .h)
SET_PROJECT_FILES(src src/ .cpp)

add_executable(${EXE_NAME} ${${EXE_NAME}_FILE})

target_link_libraries(${EXE_NAME} ${Boost_LIBRARIES} ${OGRE_LIBRARIES} ${OIS_LIBRARIES})
POST_BUILD_EVENT()
