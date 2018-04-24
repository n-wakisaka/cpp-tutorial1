cmake_minimum_required(VERSION 3.1)
set(PROJECT_NAME cpp-tutorial1)
project(${PROJECT_NAME})

# バージョン名
set(MAJOR_VERSION 0)
set(MINOR_VERSION 1)
set(PATCH_VERSION 0)
set(VERSION ${MAJOR_VERSION}.${MINOR_VERSION})
set(FULL_VERSION ${MAJOR_VERSION}.${MINOR_VERSION}.${PATCH_VERSION})

# c++コンパイラの設定
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ビルドタイプデフォルトはReleaseに
if (NOT CMAKE_BUILD_TYPE)
	set(
    CMAKE_BUILD_TYPE Release CACHE STRING
    "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
    FORCE)
endif()

add_subdirectory(src)
