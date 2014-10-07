#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQmlContext>

#include "qmlcppinterface.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    QmlCppInterface interface;
    engine.rootContext()->setContextProperty("_cpp", &interface);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
