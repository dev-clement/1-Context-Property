#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml/QQmlExtensionPlugin>

Q_IMPORT_QML_PLUGIN(ExtraModulePlugin)

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("ContextProperty", "Main");

    return app.exec();
}
