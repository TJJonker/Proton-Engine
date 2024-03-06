workspace "Proton Workspace"
	architecture "x64"
	startproject "Sandbox" 

	configurations {
		"Debug",
		"Release",
		"Dist"
	}

solutionDir = "%{wks.location}/"
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

includeDirs = {}
includeDirs["GLAD"] = "vendor/glad/include"
includeDirs["GLFW"] = "vendor/glfw/include"
includeDirs["GLM"] = "vendor/glm"
includeDirs["SPDLOG"] = "vendor/spdlog/include"
includeDirs["ASSIMP"] = "vendor/assimp/include"
includeDirs["PROTON"] = "Proton Engine/include"

libraryDirs = {}
libraryDirs["ASSIMP"] = "vendor/assimp/libs/%{cfg.buildcfg}"

include "vendor/glfw"
include "vendor/glad"
include "Proton Engine"
include "Sandbox"