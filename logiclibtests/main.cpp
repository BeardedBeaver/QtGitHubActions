#include <QCoreApplication>
#include <iostream>
#include "dummyprintertests.h"

#define RUN_TESTS(x) {x member; result += QTest::qExec(&member, argc, argv); if (result > 0) {std::cout << "Some tests failed" << std::endl; return 1; }; QThread::msleep(100); }

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Q_UNUSED(a);
    int result = 0;

    RUN_TESTS(DummyPrinterTests);

    if (result == 0)
        std::cout << "All tests passed successfully" << std::endl;
    else
        std::cout << "Some tests failed" << std::endl;
}
