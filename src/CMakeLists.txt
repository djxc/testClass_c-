find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS})
link_directories(${GLUT_LIBRARY_DIRS})
add_definitions(${GLUT_DEFINITIONS})
if(NOT GLUT_FOUND)
    message(ERROR " GLUT not found!")
endif(NOT GLUT_FOUND)

find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})
if(NOT OPENGL_FOUND)
    message(ERROR " OPENGL not found!")
endif(NOT OPENGL_FOUND)

#find_package(GLUTXmu REQUIRED)
#include_directories(${GLUTXmu_INCLUDE_DIRS})
#link_directories(${GLUTXmu_LIBRARY_DIRS})
#add_definitions(${GLUTXmu_DEFINITIONS})
#if(NOT GLUTXmu_FOUND)
 #   message(ERROR " GLutxmu not found!")
#endif(NOT GLUTXmu_FOUND)

#GLUT_Xmu_LIBRARY

AUX_SOURCE_DIRECTORY(. DIR_TEST1_SRCS)
ADD_LIBRARY (tool ${DIR_TEST1_SRCS})
target_link_libraries(tool ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
