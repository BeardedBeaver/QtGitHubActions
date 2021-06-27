#include "dummyprintertests.h"

DummyPrinterTests::DummyPrinterTests(QObject *parent) : QObject(parent)
{

}

void DummyPrinterTests::printTest()
{
    DummyPrinter printer;
    QCOMPARE(printer.print(), "Hello world");
}
