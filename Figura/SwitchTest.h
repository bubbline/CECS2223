#pragma once
#include <iostream>
#include "Rectangulo.h"
#include "Circulo.h"
using namespace std;
class SwitchTest {
	public:
		SwitchTest();
		~SwitchTest();
		void static menu();
		void static testRectangulo();
		void static testCirculo();
};