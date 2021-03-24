#ifndef CH6_H
#define CH6_H

#include <interfaces/iplugin.h>

class ch6 : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    ch6(QObject* parent, const QVariantList& args);
};

#endif // CH6_H
