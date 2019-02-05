#pragma once

//--------------------------------------------------------------------------------------------------
#ifdef DATA_STRUCTURES_LIBRARY_EXPORTS
#define DATA_STRUCTURES_API __declspec(dllexport)
#else
#define DATA_STRUCTURES_API __declspec(dllimport)
// Specify the import library to link in for the DLL.
#pragma comment(lib, "DataStructures.lib")
#endif
