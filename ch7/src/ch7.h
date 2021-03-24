#ifndef CH7_H
#define CH7_H

#include <interfaces/iplugin.h>

class ch7 : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    ch7(QObject* parent, const QVariantList& args);
};

#endif // CH7_H
