cmake_minimum_required(VERSION 2.8.9)

project(yago)

find_package(Qt5Widgets REQUIRED)

include_directories(include/)

set(SRC
	src/app.cpp
	src/mainwindow.cpp
)

# add moc code
qt5_wrap_cpp(SRC
	include/mainwindow.h
)

add_executable(yago ${SRC})

target_link_libraries(yago Qt5::Widgets)
