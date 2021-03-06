#include <ios>
#include <iostream>
#include "tdf2017.hpp"

#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "winmm.lib")

int main(void)
{
	// ロケールを設定
	std::ios_base::sync_with_stdio(false);
	std::locale default_loc("");
	std::locale::global(default_loc);
	std::locale ctype_default(std::locale::classic(), default_loc, std::locale::ctype); //※
	std::wcout.imbue(ctype_default);
	std::wcin.imbue(ctype_default);

	// 実行
	TDF2017 screen;
	screen.Run();
	return 0;
}
