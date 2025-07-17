cmake_minimum_required (VERSION 3.14)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(RaylibTesting)

# From Raylib project building examples
set(RAYLIB_VERSION 5.5)
find_package(raylib ${RAYLIB_VERSION} QUIET) # QUIET or REQUIRED
if (NOT raylib_FOUND) # If there's none, fetch and build raylib
  include(FetchContent)
  FetchContent_Declare(
    raylib
    DOWNLOAD_EXTRACT_TIMESTAMP OFF
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
  )
  FetchContent_GetProperties(raylib)
  if (NOT raylib_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    FetchContent_MakeAvailable(raylib)
  endif()
endif()

# Get all source files
file(GLOB_RECURSE source "src/*.cpp" "src/*.h")
set(ALL_SOURCE ${source}) # Add all source files

add_executable(${PROJECT_NAME} ${ALL_SOURCE}) 
include_directories(${CMAKE_SOURCE_DIR}/includes)
target_link_libraries(${PROJECT_NAME} raylib)