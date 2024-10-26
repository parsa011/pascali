#include "file.h"
#ifdef __WIN32__
	#include <windows.h>
#endif

bool file_exists(char *file_path)
{
	#ifdef __WIN32__
	
	WIN32_FIND_DATA FindFileData;
	HANDLE handle = FindFirstFile(file_path, &FindFileData) ;
	int found = handle != INVALID_HANDLE_VALUE;
	if(found) 
	{
		//FindClose(&handle); this will crash
		FindClose(handle);
	}
	return found;
	
	#else
	// linux here
	#endif
}
