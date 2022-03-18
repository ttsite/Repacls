#pragma once

#include "Object.h"

class ObjectAds : public Object
{
private:

	constexpr static ULONG MAX_DIRECTORY_BUFFER = 65536;

public:

	// overrides
	void GetBaseObject(std::wstring_view sPath) override;
	void GetChildObjects(ObjectEntry& oEntry) override;

	// constructors
	ObjectAds(Processor& poProcessor) : Object(poProcessor) {}
};

