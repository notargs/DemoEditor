#pragma once

class PrivateConstructors
{
protected:
	PrivateConstructors()
	{
	}

	~PrivateConstructors()
	{
	}

	void operator =(const PrivateConstructors& src) const
	{
	}

	PrivateConstructors(const PrivateConstructors& src)
	{
	}
};
