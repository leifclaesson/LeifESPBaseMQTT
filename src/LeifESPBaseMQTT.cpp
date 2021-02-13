#include "LeifESPBase.h"
#include "LeifESPBaseMQTT.h"

#include "..\environment_setup.h"

LeifSimpleMQTT lsm;

bool bLeifMqttSetupDefaults_DeferID=false;

void LeifMqttSetupDefaults(bool bDebug)
{

	if(bDebug)
	{
	MqttLibRegisterDebugPrintCallback([](const char * szText){
		csprintf("%s",szText);
		});
	}


	if(!bLeifMqttSetupDefaults_DeferID)
	{
		lsm.strFriendlyName=GetHeadingText();
		lsm.strID=MqttDeviceName(GetHostName());
	}

	lsm.strMqttServerIP=mqtt_server;
	lsm.strMqttUserName=mqtt_user;
	lsm.strMqttPassword=mqtt_password;



	LeifRegisterOnShutdownCallback([](const char * pszReason){
		if(pszReason) {}
		lsm.Quit();
		});


}

void LeifEnableMQTT(bool bEnable)
{
	lsm.SetEnableMQTT(bEnable);
}

/*
void LeifPublishMQTT(const char* topic, const char* payload, bool retain)
{

	String strTopic;
	strTopic="home/mcu/";
	strTopic+=GetHostName();
	strTopic+="/";
	strTopic+=topic;

	if(homie.IsConnected())
	{
		csprintf("MQTT publish [%s]: %s%s\n",strTopic.c_str(),payload,retain?" (retained)":" (volatile)");
		homie.PublishDirect(strTopic, 2, retain, String(payload));
	}
	else
	{
		csprintf("MQTT not connected, can't publish [%s]: %s\n",strTopic.c_str(),payload);
	}
}
*/
