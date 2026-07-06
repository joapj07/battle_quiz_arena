cmake_minimum_required(VERSION 3.19)

project(battle_quiz_arena LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(battle_quiz_arena
    WIN32
    MACOSX_BUNDLE

    # Main
    src/main.cpp

    # Interface
    include/mainwindow.h
    src/mainwindow.cpp

    # Character
    include/character.h
    src/character.cpp

    include/warrior.h
    src/warrior.cpp

    include/mage.h
    src/mage.cpp

    include/archer.h
    src/archer.cpp

    include/boss.h
    src/boss.cpp

    # Question Manager
    include/questionmanager.h
    src/questionmanager.cpp

    # Items
    include/item.h
    src/item.cpp

    include/healthpotion.h
    src/healthpotion.cpp

    include/attackbuff.h
    src/attackbuff.cpp
)

target_include_directories(battle_quiz_arena PRIVATE
    include
)

target_link_libraries(battle_quiz_arena PRIVATE
    Qt6::Core
    Qt6::Widgets
)
