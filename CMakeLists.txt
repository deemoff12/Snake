cmake_minimum_required(VERSION 3.14)
project(Snake)

set(CMAKE_CXX_STANDARD 14)
set(SFML_DIR "D:/Pobrane/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics window system)
add_executable(Snake main.cpp Snake.cpp Snake.h SnakeView.cpp SnakeView.h SnakeController.cpp SnakeController.h IntroView.cpp IntroView.h IntroController.cpp IntroController.h ScoreView.cpp ScoreView.h ScoreController.cpp ScoreController.h GameManager.cpp GameManager.h)
target_link_libraries(Snake sfml-graphics sfml-window sfml-system)