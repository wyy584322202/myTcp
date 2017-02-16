    cmake_minimum_required(VERSION 2.8)  
    set(CMAKE_BUILD_TYPE Debug)  
    set(PROJECT_INCLUDE_DIR ../include)  
      
    find_package(Boost COMPONENTS system filesystem thread REQUIRED)  
    include_directories(${Boost_INCLUDE_DIR} ${PROJECT_INCLUDE_DIR})  
    AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src CPP_LIST1)   
      
    add_executable(service ${CPP_LIST1})  
    target_link_libraries(service ${Boost_LIBRARIES})  
      
    add_definitions(-Wall)  