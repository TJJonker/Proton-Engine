project "Proton Engine"
	kind "StaticLib"
	language "C++"

	targetdir (solutionDir .. "/bin/" .. outputdir .. "/%{prj.name}")
	objdir (solutionDir .. "/bin-int/" .. outputdir .. "/%{prj.name}")

	-- pchheader "pch.h"
	-- pchsource "src/pch.cpp" 

	files {
		"include/**.h",
		"src/**.cpp"
	}

	includedirs {
		"include",
		solutionDir .. "%{includeDirs.SPDLOG}",
		solutionDir .. "%{includeDirs.GLFW}",
		solutionDir .. "%{includeDirs.GLAD}",
		solutionDir .. "%{includeDirs.GLM}",
		solutionDir .. "%{includeDirs.ASSIMP}",
	}

	libdirs {
		solutionDir .. "%{libraryDirs.ASSIMP}"
	}

	links {
		"GLFW",
		"opengl32",
		"GLAD"
	}


	filter "system:windows"
		cppdialect "C++17"
		systemversion "latest"
		staticruntime "on"

		defines {
		}


	filter "configurations:Debug"
		defines "PROTON_DEBUG"
		symbols "On"
		links { "assimp-vc143-mtd.lib" }

	filter "configurations:Release"
		defines "PROTON_RELEASE"
		optimize "On"
		links { "assimp-vc143-mt.lib" }

	filter "configurations:Dist"
		defines "PROTON_DIST"
		optimize "On"
		links { "assimp-vc143-mt.lib" }

	
