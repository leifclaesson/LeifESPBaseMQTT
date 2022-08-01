#pragma once

#include <LeifESPBase.h>
#include <LeifSimpleMQTT.h>

extern LeifSimpleMQTT lsm;

void LeifMqttSetupDefaults(bool bDebug=true);
void LeifEnableMQTT(bool bEnable);

MqttSubscription * NewSubscription(const String & strTopic);

