#pragma once

#include <LeifESPBase.h>
#include <LeifSimpleMQTT.h>

extern LeifSimpleMQTT lsm;

void LeifMqttSetupDefaults(bool bDebug=true);

