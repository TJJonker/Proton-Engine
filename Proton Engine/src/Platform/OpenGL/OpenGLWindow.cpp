#include "ppch.h"
#include <glad/glad.h>
#include "Platform/OpenGL/OpenGLWindow.h"

namespace Proton {
	OpenGLWindow::OpenGLWindow(const WindowProps& props) {
		Initialize(props);
	}

	OpenGLWindow::~OpenGLWindow() {
		Shutdown();
	}

	void OpenGLWindow::OnUpdate()
	{
		GLCall(glfwSwapBuffers(m_Window));
		GLCall(glfwPollEvents());
	}

	void OpenGLWindow::SetVSync(bool enabled)
	{
		GLCall(glfwSwapInterval(enabled));
		m_WindowData.VSync = enabled;
	}
	
	void APIENTRY glDebugOutput(GLenum source, GLenum type, unsigned int id, GLenum severity, GLsizei length, const char* message, const void* userParam) {
		std::cout << "Something went wrong" << std::endl;
	}

	void OpenGLWindow::Initialize(const WindowProps& props) {
		m_WindowData.Title = props.Title;
		m_WindowData.Height = props.Height;
		m_WindowData.Width = props.Width;

		static bool GLFWInitialized;

		if (!GLFWInitialized) {
			GLFWInitialized = glfwInit();
			ASSERT(GLFWInitialized);
			// Assert GLFWInitialized
		}

		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4); // Set major version
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6); // Set minor version
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // Switch to core profile

		m_Window = glfwCreateWindow((int)props.Width, (int)props.Height, m_WindowData.Title.c_str(), nullptr, nullptr);
		glfwMakeContextCurrent(m_Window);

		gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

		GLint flags;
		glGetIntegerv(GL_CONTEXT_FLAGS, &flags);
		if (flags & GL_CONTEXT_FLAG_DEBUG_BIT) {
			glEnable(GL_DEBUG_OUTPUT);
			glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);
			glDebugMessageCallback(glDebugOutput, nullptr);
			glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, GL_DONT_CARE, 0, nullptr, GL_TRUE);
		}

		glViewport(0, 0, 1280, 720);
	}



	void OpenGLWindow::Shutdown()
	{
		GLCall(glfwDestroyWindow(m_Window));
	}

	void OpenGLWindow::SetSize(uint16_t width, uint16_t height)
	{
		glfwSetWindowSize(m_Window, width, height);
	}

	void OpenGLWindow::SetTitle(const char* title)
	{
		glfwSetWindowTitle(m_Window, title);
	}
}