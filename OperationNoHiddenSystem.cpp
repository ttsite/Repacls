#include "OperationNoHiddenSystem.h"
#include "InputOutput.h"

ClassFactory<OperationNoHiddenSystem> OperationNoHiddenSystem::RegisteredFactory(GetCommand());

OperationNoHiddenSystem::OperationNoHiddenSystem(std::queue<std::wstring> & oArgList, std::wstring sCommand) : Operation(oArgList)
{
	InputOutput::ExcludeHiddenSystem() = true;
}