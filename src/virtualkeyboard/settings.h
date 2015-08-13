/******************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd
** All rights reserved.
** For any questions to The Qt Company, please use contact form at http://qt.io
**
** This file is part of the Qt Virtual Keyboard module.
**
** Licensees holding valid commercial license for Qt may use this file in
** accordance with the Qt License Agreement provided with the Software
** or, alternatively, in accordance with the terms contained in a written
** agreement between you and The Qt Company.
**
** If you have questions regarding the use of this file, please use
** contact form at http://qt.io
**
******************************************************************************/

#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>

class SettingsPrivate;

class Settings : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(Settings)
    Q_DECLARE_PRIVATE(Settings)

    Settings(QObject *parent = 0);

public:
    static Settings *instance();

    QString style() const;
    void setStyle(const QString &style);

    QString styleName() const;
    void setStyleName(const QString &name);

    QString locale() const;
    void setLocale(const QString &locale);

    QStringList availableLocales() const;
    void setAvailableLocales(const QStringList &availableLocales);

    QStringList activeLocales() const;
    void setActiveLocales(const QStringList &activeLocales);

signals:
    void styleChanged();
    void styleNameChanged();
    void localeChanged();
    void availableLocalesChanged();
    void activeLocalesChanged();
};

#endif // SETTINGS_H
