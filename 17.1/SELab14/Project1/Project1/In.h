#pragma once
#define IN_MAX_LEN_TEXT 1024*1024
#define IN_CODE_ENDL '|'
#define IN_CODE_TABLE {\
	INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, '|', INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F,\
	INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F,\
	INTAB::I, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::F, INTAB::F, INTAB::F,\
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::F,\
	INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F,\
	INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F, INTAB::F,\
	INTAB::F, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
																																								   \
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
	INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T, INTAB::T,\
}

namespace In
{
	struct INTAB
	{
		enum codes {T = 1024, F = 2048, I = 4096};
		int size;
		int lines;
		int ignor;
		unsigned char* text;
		int code[256];
	};
	INTAB getin(wchar_t infile[], wchar_t outfile[]);
}