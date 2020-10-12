#include "calculator.h"

// Add some changes

namespace Lab {
	#define TMPL template <class T>
	#define CL Calculator<T>

	TMPL T CL::Add(T a, T b)
	{
		return a + b + 0.5;
	}

	TMPL T CL::Sub(T a, T b)
	{
		return Add(a, -b);
	}
}