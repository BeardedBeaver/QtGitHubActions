#ifndef DUMMYPRINTERTESTS_H
#define DUMMYPRINTERTESTS_H

#include <QObject>
#include <QtTest>

#include "dummyprinter.h"

class DummyPrinterTests : public QObject
{
    Q_OBJECT
public:
    explicit DummyPrinterTests(QObject *parent = nullptr);

private slots:
    void printTest();

};

#endif // DUMMYPRINTERTESTS_H
