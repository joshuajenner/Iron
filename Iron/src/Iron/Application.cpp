#include "Application.h"

#include "Iron/Events/ApplicationEvent.h"
#include "Iron/Log.h"

namespace Iron {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run() 
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			IRN_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			IRN_TRACE(e);
		}
		

		while (true);
	}
}

