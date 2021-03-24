#include "ch6.h"

#include <debug.h>

#include <KPluginFactory>

K_PLUGIN_FACTORY_WITH_JSON(ch6Factory, "ch6.json", registerPlugin<ch6>(); )

ch6::ch6(QObject *parent, const QVariantList& args)
    : KDevelop::IPlugin(QStringLiteral("ch6"), parent)
{
    Q_UNUSED(args);

    qCDebug(PLUGIN_CH6) << "Hello world, my plugin is loaded!";
}

// needed for QObject class created from K_PLUGIN_FACTORY_WITH_JSON
#include "ch6.moc"
