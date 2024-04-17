#include <Iron.h>

class Sandbox: public Iron::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox() 
	{

	}
};

Iron::Application* Iron::CreateApplication()
{
	return new Sandbox();
}