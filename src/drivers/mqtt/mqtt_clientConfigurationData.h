/**********************************************************************
--- Qt Architect generated file ---
File: MQTT_clientConfigurationData.h
Last generated: Thu Jan 4 16:13:32 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef MQTT_clientConfigurationData_included
#define MQTT_clientConfigurationData_included

#include <qt.h>

class MQTT_clientConfigurationData : public QDialog
{
	Q_OBJECT
	public:
	MQTT_clientConfigurationData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~MQTT_clientConfigurationData();
	protected slots:
	virtual void Help() =0;
	virtual void OkClicked() =0;
	protected:
	QLabel *Name;
	QSpinBox *NItems;
	QLineEdit *MqttBrokerHostNameText;
	QLineEdit *SubscribeTopicNameText;
	QLineEdit *UserNameText;
	QLineEdit *PasswordText;
	QLineEdit *PortText;
};
#endif // MQTT_clientConfigurationData_included

