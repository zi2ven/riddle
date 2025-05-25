#pragma once
#include <filesystem>
#include <optional>
#include <string>
#include <vector>

namespace riddle {
    /**
     * Searches for the specified program in the system's PATH environment variable.
     *
     * This function attempts to locate the executable file associated with the given program name.
     * It leverages the system's search mechanism to find the program and returns the full path if found.
     * If the program cannot be located, the function returns an empty optional.
     *
     * @param program The name of the program to search for. This should be the executable name without any path.
     * @return std::optional<std::string> An optional containing the full path to the program if found, or an empty optional otherwise.
     */
    std::optional<std::string> findProgram(const std::string &program);

    std::string getSelfPath();

    std::vector<std::string> getCRT();

    std::vector<std::string> collectDefaultLibs();
}
