-- premake5.lua
workspace "TDF2017"

    configurations { "Debug", "Release" }
    platforms { "x86_64", "x86" }

    filter { "platforms:x86" }
        architecture "x86"

    filter { "platforms:x86_64" }
        architecture "x86_64"

    filter "configurations:Debug"
        defines { "DEBUG" }
        flags { "Symbols" }

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"

    project "TDF2017"
        kind "ConsoleApp"
        language "C++"

        files { "./src/**.hpp", "./src/**.cpp" }