#include <QYHS.h>


class Sandbox :public QYHS::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


QYHS::Application* QYHS::CreateApplication()
{
	return new Sandbox();
}