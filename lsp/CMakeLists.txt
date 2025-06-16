find_package(nlohmann_json CONFIG REQUIRED)

include_directories(./)

add_executable(riddle-lsp main.cpp)

target_link_libraries(riddle-lsp PRIVATE nlohmann_json::nlohmann_json)