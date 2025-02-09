#include "stdafx.h"
namespace Error
{
    ERRORS errors[ERROR_MAX_ENTRY] = 
    {
        ERROR_ENTRY(0, "������������ ��� ������"),
        ERROR_ENTRY(1, "��������� ����"),
        ERROR_ENTRY(2, "���������� ������� �������. ������� ������� ������"),
        ERROR_ENTRY(3, "���������� �������� �������. ������� ���������"),
        ERROR_ENTRY(4, "�������� ������"),
        ERROR_ENTRY_NODEF(5),
        ERROR_ENTRY_NODEF(6), ERROR_ENTRY_NODEF(8), ERROR_ENTRY_NODEF(9),
        ERROR_ENTRY_NODEF(10), ERROR_ENTRY_NODEF(20),
        ERROR_ENTRY_NODEF(11), ERROR_ENTRY_NODEF(30), ERROR_ENTRY_NODEF10(40), ERROR_ENTRY_NODEF10(50),
        ERROR_ENTRY_NODEF(60), ERROR_ENTRY_NODEF(70), ERROR_ENTRY_NODEF(80), ERROR_ENTRY_NODEF(90),
        ERROR_ENTRY(100, "�������� -in ������ ���� �����"),
        ERROR_ENTRY_NODEF(101),
        ERROR_ENTRY_NODEF(102),
        ERROR_ENTRY(103, "������������ ������ ���������"),
        ERROR_ENTRY(104, "��������� ����� �������� ���������"),
        ERROR_ENTRY_NODEF(105),
        ERROR_ENTRY_NODEF(106),
        ERROR_ENTRY_NODEF(107),
        ERROR_ENTRY_NODEF(108),
        ERROR_ENTRY_NODEF(109),
        ERROR_ENTRY(110, "�� ������� ������� ���� � �������� ����� (-in)"),
        ERROR_ENTRY(111, "������������ ������ � �������� �����(-in)"),
        ERROR_ENTRY(112, "������ ��� �������� ����� ���������(-log)"),
        ERROR_ENTRY(113, "������ ��� ������� ��������� ����"),
        ERROR_ENTRY(114, "������ ��� ������� �������"),
        ERROR_ENTRY_NODEF(115),
        ERROR_ENTRY_NODEF(116), ERROR_ENTRY_NODEF(117), ERROR_ENTRY_NODEF(118), ERROR_ENTRY_NODEF(119),
        ERROR_ENTRY_NODEF10(120), ERROR_ENTRY_NODEF10(130), ERROR_ENTRY_NODEF10(140), ERROR_ENTRY_NODEF10(150),
        ERROR_ENTRY_NODEF10(160), ERROR_ENTRY_NODEF10(170), ERROR_ENTRY_NODEF10(180), ERROR_ENTRY_NODEF10(190),
        ERROR_ENTRY_NODEF10(200), ERROR_ENTRY_NODEF10(300), ERROR_ENTRY_NODEF10(400), ERROR_ENTRY_NODEF10(500),
        ERROR_ENTRY_NODEF10(600), ERROR_ENTRY_NODEF10(700), ERROR_ENTRY_NODEF10(800), ERROR_ENTRY_NODEF10(900)
    };

    ERRORS geterror(int id)
    {
        for (int i = 0; i < ERROR_MAX_ENTRY; i++)
        {
            if (errors[i].id == id)
                return errors[i];
        }
        return errors[0];
    }

    ERRORS geterrorin(int id, int line, int col)
    {
        ERRORS err = geterror(id);
        err.inext.line = line;
        err.inext.col = col;
        return err;
    }
}
