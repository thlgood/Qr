#include <QCoreApplication>
#include <QLibrary>
#include <QDebug>

#define QR_IMAGE_PATH "test.png"

typedef bool (*fpGetQrStr)(const char* file, char* rec, int rec_size);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLibrary lib("qr.dll");

    if (lib.load())
    {
        fpGetQrStr GetQrStr = (fpGetQrStr)lib.resolve("GetQrStr");
        if (GetQrStr)
        {
            char buffer[BUFSIZ] = {0};
            if (GetQrStr(QR_IMAGE_PATH, buffer, BUFSIZ))
            {
                qDebug() << "Content is:" << buffer;
            }
            else
            {
                qDebug() << "resolve failure";
            }

        }

    }
    else
    {
        qDebug() << "Load lib failure!";
    }

    return a.exec();
}
