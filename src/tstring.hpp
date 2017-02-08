#pragma once

using tstring = std::basic_string<TCHAR>;

#if defined(UNICODE) || defined(_UNICODE)
#define TCOUT std::wcout
#else
#define TCOUT std::cout
#endif