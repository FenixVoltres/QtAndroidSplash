#include <QAndroidJniEnvironment>
#include <QAndroidJniObject>
#include <QtAndroid>
#include <QDebug>

#include "qmlcppinterface.h"

QmlCppInterface::QmlCppInterface(QObject *parent) :
    QObject(parent)
{
}

void QmlCppInterface::hideNativeSplash() const
{
    QAndroidJniObject activity = QtAndroid::androidActivity();
    activity.callMethod<void>("hideNativeSplash", "()V");

    QAndroidJniEnvironment env;
    if (env->ExceptionCheck())
    {
        env->ExceptionClear();

        qCritical() << "Something went wrong!";
        // Handle the exception
    }
}
