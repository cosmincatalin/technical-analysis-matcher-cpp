cmake_minimum_required(VERSION 3.15)

project(TechnicalAnalysisMatcher
        VERSION 1.0.0
        DESCRIPTION "Detect Technical Analysis patterns present in chronological sequences of OHLC data."
        HOMEPAGE_URL ""
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
set(DBG_MACRO_NO_WARNING)

include_directories(src)

add_library(TechnicalAnalysisMatcher SHARED src/TechnicalAnalysisMatcher.cpp)

add_executable(Detect runners/Detect.cpp)

# Link the executable and the library together
target_link_libraries(Detect TechnicalAnalysisMatcher)
