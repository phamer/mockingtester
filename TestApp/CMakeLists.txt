add_library(mocking_tester
  src/library.cpp)

target_include_directories(mocking_tester
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  PUBILC $<INSTALL_INTERFACE:include>
  PUBLIC ${SFML_INCLUDE_DIR})

target_link_libraries(mocking_tester
  PUBLIC ${SFML_LIBRARIES})

add_executable(mocking_main
  src/main.cpp)

target_link_libraries(mocking_main
  mocking_tester)

add_subdirectory(test)


