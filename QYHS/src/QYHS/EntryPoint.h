#pragma once

#ifdef QYHS_PLATFORM_WINDOWS
extern QYHS::Application*  QYHS::CreateApplication();   //return application
int main(int argc, char **argv)
{
	printf("QYHS Engine\n");
	auto app = QYHS::CreateApplication();
	app->Run();
	delete app;


}


#endif // QYHS_PLATFORM_WINDOW
