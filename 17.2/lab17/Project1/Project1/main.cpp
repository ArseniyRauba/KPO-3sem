#include "stdafx.h"
using namespace std;

int _tmain(int argc, const _TCHAR* argv[])
{
    setlocale(LC_ALL, "Russian");
    Log::LOG log = Log::INITLOG;
    try
    {
        Parm::PARM parm = Parm::getparm(argc, argv);
        log = Log::getlog(parm.log);
        Log::WriteLog(log);
        Log::WriteParm(log, parm);
        In::INTAB in = In::getin(parm.in, parm.out);

        vector<pair<string, IT::Entry>> ids;
        LT::LexTable lextable = LT::Create(in.size);
        IT::IdTable idtable = IT::Create(in.size);
        IT::Entry enter;

        LA::LexAnalize(in, lextable, idtable, ids);
        LA::printLexTable(lextable);
        LA::printIdTable(idtable);

        Log::WriteIn(log, in);
        Log::Close(log);
    }
    catch (Error::ERRORS e)
    {
        Log::WriteError(log, e);
    }
    system("pause");
    return 0;
}
