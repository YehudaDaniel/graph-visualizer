include(FetchContent)

FetchContent_Declare(
    sfml
    URL https://github.com/SFML/SFML/archive/refs/tags/2.5.1.zip
    URL_HASH MD5=2c4438b3e5b2d81a6e626ecf72bf75be
)
add_subdirectory(sfml)

FetchContent_Declare(
  imgui
  URL https://github.com/ocornut/imgui/archive/refs/tags/v1.90.zip
)
FetchContent_MakeAvailable(imgui)


FetchContent_Declare(
  imgui-sfml
  URL https://github.com/SFML/imgui-sfml/archive/refs/tags/v2.6.zip
)
add_subdirectory(imgui-sfml)