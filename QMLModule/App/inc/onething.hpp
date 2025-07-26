#ifndef ONETHING_HPP
#define ONETHING_HPP

#include <QObject>

class OneThing : public QObject
{
    Q_OBJECT
public:
    explicit OneThing(QObject *parent = nullptr);

signals:
};

#endif // ONETHING_HPP
