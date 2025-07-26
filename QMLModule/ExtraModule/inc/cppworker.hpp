#ifndef CPPWORKER_HPP
#define CPPWORKER_HPP

#include <QObject>

class CppWorker : public QObject
{
    Q_OBJECT
public:
    explicit CppWorker(QObject *parent = nullptr);

signals:
};

#endif // CPPWORKER_HPP
