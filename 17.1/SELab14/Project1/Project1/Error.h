#pragma once
#define ERROR_THROW(id) throw Error::geterror(id);
#define ERROR_THROW_IN(id, l, c) throw Error::geterrorin(id, l, c);
#define ERROR_ENTRY(id, m) {id, m, {-1, -1}}
#define ERROR_MAXSIZE_MESSAGE 200
#define ERROR_ENTRY_NODEF(id) ERROR_ENTRY(id, "�������������� ������")
#define ERROR_ENTRY_NODEF10(id) ERROR_ENTRY_NODEF(id+0), ERROR_ENTRY_NODEF(id+1), \
                                ERROR_ENTRY_NODEF(id+2), ERROR_ENTRY_NODEF(id+3), \
                                ERROR_ENTRY_NODEF(id+4), ERROR_ENTRY_NODEF(id+5), \
                                ERROR_ENTRY_NODEF(id+6), ERROR_ENTRY_NODEF(id+7), \
                                ERROR_ENTRY_NODEF(id+8), ERROR_ENTRY_NODEF(id+9)
#define ERROR_MAX_ENTRY 1000

namespace Error
{
    struct ERRORS
    {
        int id;
        char message[ERROR_MAXSIZE_MESSAGE];
        struct IN
        {
            short line;
            short col;
        } inext;
    };

    ERRORS geterror(int id);
    ERRORS geterrorin(int id, int line, int col);
}
