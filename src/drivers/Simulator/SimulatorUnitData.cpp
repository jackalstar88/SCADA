/**********************************************************************
--- Qt Architect generated file ---
File: SimulatorUnitData.cpp
Last generated: Wed May 10 09:34:43 2000
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#include <qt.h>
#include "simulatorunitdata.h"

SimulatorUnitData::SimulatorUnitData(QWidget *parent, const char *name)
: QDialog(parent, name, TRUE, 208)
{
	QPushButton *qtarch_PushButton_1 = new QPushButton(this, "PushButton_1");
	qtarch_PushButton_1->setGeometry(340, 240, 120, 30);
	qtarch_PushButton_1->setMinimumSize(0, 0);
	qtarch_PushButton_1->setMaximumSize(32767, 32767);
	qtarch_PushButton_1->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_1->setBackgroundMode(QWidget::PaletteButton);
	#if QT_VERSION < 300
	qtarch_PushButton_1->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_1->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_PushButton_1->setText( tr( "Exit" ) );
	qtarch_PushButton_1->setAutoRepeat( FALSE );
	qtarch_PushButton_1->setAutoResize( FALSE );
	qtarch_PushButton_1->setToggleButton( FALSE );
	qtarch_PushButton_1->setDefault( FALSE );
	qtarch_PushButton_1->setAutoDefault( FALSE );
	qtarch_PushButton_1->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_1, SIGNAL(clicked()), SLOT(accept()));
	QLabel *qtarch_Label_1 = new QLabel(this, "Label_1");
	qtarch_Label_1->setGeometry(30, 30, 420, 80);
	qtarch_Label_1->setMinimumSize(0, 0);
	qtarch_Label_1->setMaximumSize(32767, 32767);
	qtarch_Label_1->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_1->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	qtarch_Label_1->setFontPropagation(QWidget::SameFont);
	qtarch_Label_1->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_1->setFrameStyle( 0 );
	qtarch_Label_1->setLineWidth( 1 );
	qtarch_Label_1->setMidLineWidth( 0 );
	qtarch_Label_1->QFrame::setMargin( 0 );
	qtarch_Label_1->setText( tr( "The simulator generates random data for sample points. This is for test and demonstration purposes." ) );
	qtarch_Label_1->setAlignment( AlignLeft|AlignVCenter|ExpandTabs|WordBreak );
	qtarch_Label_1->setMargin( 0 );
	resize(470,280);
	setMinimumSize(0, 0);
	setMaximumSize(32767, 32767);
}
SimulatorUnitData::~SimulatorUnitData()
{
}

