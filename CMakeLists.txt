cmake_minimum_required(VERSION 3.1)
project (test)  //プロジェクト名
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall") //コンパイルオプション
find_package(OpenCV REQUIRED)  
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable(main main.cpp)
target_link_libraries(main ${OpenCV_LIBS})