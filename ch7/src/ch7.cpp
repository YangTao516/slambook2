#include "ch7.h"

#include <debug.h>

#include <KPluginFactory>

K_PLUGIN_FACTORY_WITH_JSON(ch7Factory, "ch7.json", registerPlugin<ch7>(); )

ch7::ch7(QObject *parent, const QVariantList& args)
    : KDevelop::IPlugin(QStringLiteral("ch7"), parent)
{
    Q_UNUSED(args);

    qCDebug(PLUGIN_CH7) << "Hello world, my plugin is loaded!";
}

// needed for QObject class created from K_PLUGIN_FACTORY_WITH_JSON
#include "ch7.moc"
