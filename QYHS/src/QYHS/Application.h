#pragma once
#include "Core.h"
namespace QYHS {
	class QYHS_API  Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//该方法需要在client声明
	Application * CreateApplication();
}




