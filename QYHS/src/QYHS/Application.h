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
	//�÷�����Ҫ��client����
	Application * CreateApplication();
}




