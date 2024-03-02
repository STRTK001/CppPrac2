# CMakeList.txt : CMake project for CppPrac2, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CppPrac2 "CppPrac2.cpp" "CppPrac2.h" "Pie.h" "ApricotPie.h" "ApricotPie.cpp" "ApplePie.cpp" "RaspberryPie.cpp" "ApplePie.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CppPrac2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
