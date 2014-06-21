#include <QtCore>
#include <cstring>
#include <string>
#include "QZXing.h"

extern "C" Q_DECL_EXPORT bool GetQrStr(const char* file, char* buffer, int buffer_size)
{
    QZXing dec;
    dec.setDecoder(QZXing::DecoderFormat_QR_CODE);

    QString strTmp = dec.decodeImageFromFile(file);
    if (strTmp.length())
    {
        strcpy_s(buffer, buffer_size, strTmp.toStdString().c_str());
        return true;
    }
    return false;
}
