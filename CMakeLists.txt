
Message("Hominlinx-->${PROJECT_SOURCE_DIR}")
LIST(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/CMake)
INCLUDE(CPack)
INCLUDE(CMakeModule)
INSTALL(FILES ${PROJECT_SOURCE_DIR}/media/overlays/ShrewMouse.overlay DESTINATION ./media/overlays)

PRE_BUILD(OgreShrewMouse)
ADD_SUBDIRECTORY(day1)
ADD_SUBDIRECTORY(day2)
