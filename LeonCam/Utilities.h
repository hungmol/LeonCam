#pragma once
#include <QMessageBox>
#include <qicon.h>

#define iconPath ":/Resources/Images/logo.ico"

class Utilities
{
public:
	Utilities();
	~Utilities();
	static void MBAlarm(QString error, bool errorOrSuccess);
};
