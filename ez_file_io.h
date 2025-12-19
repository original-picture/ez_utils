
#pragma once

#include <filesystem>
#include <string>

namespace ez {
    std::string file_to_string(const std::filesystem::path& p);
}