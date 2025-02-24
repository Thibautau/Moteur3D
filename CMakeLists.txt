cmake_minimum_required(VERSION 3.28)
project(Moteur3D)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_C_FLAGS_DEBUG "-g -O0")

include_directories(.)  # Inclure le répertoire courant

# Inclure GoogleTest via FetchContent
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

FetchContent_Declare(
        spdlog
        GIT_REPOSITORY https://github.com/gabime/spdlog.git
        GIT_TAG        v1.12.0  # Vous pouvez choisir une autre version ici
)
FetchContent_MakeAvailable(spdlog)

include_directories(${spdlog_SOURCE_DIR}/include)

enable_testing()

# Activer les fonctionnalités automatiques de Qt
# set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTORCC ON)
# set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

# Créer l'exécutable principal
add_executable(Moteur3D src/main/main.cpp
        src/main/Data.h
        src/main/Data.h
        src/main/Mesh/Mesh.cpp
        src/main/Mesh/Mesh.h
        src/main/Mesh/IMesh.cpp
        src/main/Mesh/IMesh.h
        src/main/Math/Projection/Projection.cpp
        src/main/Math/Projection/Projection.h
        src/main/Math/Matrix/MatrixOperations.cpp
        src/main/Math/Matrix/MatrixOperations.h
)

# Lier GoogleTest à l'exécutable de tests
# target_link_libraries(runTests gtest gtest_main)
# target_link_libraries(runTestBotAI gtest gtest_main)
# target_link_libraries(runTestZobrist gtest gtest_main)
# target_link_libraries(Moteur3D PRIVATE spdlog::spdlog)
# target_link_libraries(Moteur3D PRIVATE Qt6::Core Qt6::Widgets Qt6::Gui)

target_link_libraries(Moteur3D PRIVATE Qt6::Widgets)