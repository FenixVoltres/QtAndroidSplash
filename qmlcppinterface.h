#ifndef QMLCPPINTERFACE_H
#define QMLCPPINTERFACE_H

#include <QObject>

class QmlCppInterface : public QObject
{
    Q_OBJECT

public:
    explicit QmlCppInterface(QObject *parent = 0);

public slots:
    void hideNativeSplash() const;

};

#endif // QMLCPPINTERFACE_H
