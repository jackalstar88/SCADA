/**********************************************************************
--- Qt Architect generated file ---
File: Iec103driverConfigurationData.cpp
Last generated: Thu Jan 4 16:13:32 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#include <qt.h>
#include "Iec103driverConfigurationData.h"
Iec103driverConfigurationData::Iec103driverConfigurationData(QWidget *parent, const char *name)
: QDialog(parent, name, TRUE, 208)
{
	QLabel *qtarch_Label_7 = new QLabel(this, "Label_7");
	qtarch_Label_7->setGeometry(10, 0, 90, 30);
	qtarch_Label_7->setMinimumSize(0, 0);
	qtarch_Label_7->setMaximumSize(32767, 32767);
	qtarch_Label_7->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_7->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	qtarch_Label_7->setFontPropagation(QWidget::SameFont);
	qtarch_Label_7->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_7->setFrameStyle( 0 );
	qtarch_Label_7->setLineWidth( 1 );
	qtarch_Label_7->setMidLineWidth( 0 );
	qtarch_Label_7->QFrame::setMargin( 0 );
	qtarch_Label_7->setText( tr( "Name" ) );
	qtarch_Label_7->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_7->setMargin( 0 );
	Name = new QLabel(this, "Label_8");
	Name->setGeometry(200, 0, 250, 30);
	Name->setMinimumSize(0, 0);
	Name->setMaximumSize(32767, 32767);
	Name->setFocusPolicy(QWidget::NoFocus);
	Name->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	Name->setFontPropagation(QWidget::SameFont);
	Name->setPalettePropagation(QWidget::SameFont);
	#endif
	Name->setFrameStyle( 50 );
	Name->setLineWidth( 1 );
	Name->setMidLineWidth( 0 );
	Name->QFrame::setMargin( 0 );
	Name->setText( "" );
	Name->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	Name->setMargin( 0 );

	IEC103LinkAddressText = new QLineEdit(this, "LineEdit_7");
	IEC103LinkAddressText->setGeometry(200, 80, 100, 30);
	IEC103LinkAddressText->setMinimumSize(0, 0);
	IEC103LinkAddressText->setMaximumSize(32767, 32767);
	IEC103LinkAddressText->setFocusPolicy(QWidget::StrongFocus);
	IEC103LinkAddressText->setBackgroundMode(QWidget::PaletteBase);
#if QT_VERSION < 300
	IEC103LinkAddressText->setFontPropagation(QWidget::SameFont);
	IEC103LinkAddressText->setPalettePropagation(QWidget::SameFont);
	#endif
	IEC103LinkAddressText->setText( tr( "" ) );
	IEC103LinkAddressText->setMaxLength( 100 );
	IEC103LinkAddressText->setFrame( QLineEdit::Normal );
	IEC103LinkAddressText->setFrame( TRUE );
	IEC103LinkAddressText->setAlignment( AlignLeft );
	QLabel *qtarch_Label_22 = new QLabel(this, "Label_21");
	qtarch_Label_22->setGeometry(10, 80, 150, 30);
	qtarch_Label_22->setMinimumSize(0, 0);
	qtarch_Label_22->setMaximumSize(32767, 32767);
	qtarch_Label_22->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_22->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	qtarch_Label_22->setFontPropagation(QWidget::SameFont);
	qtarch_Label_22->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_22->setFrameStyle( 0 );
	qtarch_Label_22->setLineWidth( 1 );
	qtarch_Label_22->setMidLineWidth( 0 );
	qtarch_Label_22->QFrame::setMargin( 0 );
	qtarch_Label_22->setText( tr( "IEC 103 Link address of slave" ) );
	qtarch_Label_22->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_22->setMargin( 0 );
/////////////////////////////////////////////////////////////////////////
	
/////////////////////////////////////////////////////////////////////////
	QLabel *qtarch_Label_10 = new QLabel(this, "Label_10");
	qtarch_Label_10->setGeometry(10, 130, 100, 30);
	qtarch_Label_10->setMinimumSize(0, 0);
	qtarch_Label_10->setMaximumSize(32767, 32767);
	qtarch_Label_10->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_10->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	qtarch_Label_10->setFontPropagation(QWidget::SameFont);
	qtarch_Label_10->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_10->setFrameStyle( 0 );
	qtarch_Label_10->setLineWidth( 1 );
	qtarch_Label_10->setMidLineWidth( 0 );
	qtarch_Label_10->QFrame::setMargin( 0 );
	qtarch_Label_10->setText( tr( "N Items" ) );
	qtarch_Label_10->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_10->setMargin( 0 );

	NItems = new QSpinBox(this, "SpinBox_3");
	NItems->setGeometry(200, 130, 100, 30);
	NItems->setMinimumSize(0, 0);
	NItems->setMaximumSize(32767, 32767);
	NItems->setFocusPolicy(QWidget::StrongFocus);
	NItems->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	NItems->setFontPropagation(QWidget::SameFont);
	NItems->setPalettePropagation(QWidget::SameFont);
	NItems->setFrameStyle( 50 );
	NItems->setLineWidth( 2 );
	NItems->setMidLineWidth( 0 );
	NItems->QFrame::setMargin( 0 );
	#endif
	NItems->setRange(0, 5000);
	NItems->setSteps(1, 0);
	NItems->setPrefix( "" );
	NItems->setSuffix( "" );
	NItems->setSpecialValueText( "" );
	NItems->setWrapping( FALSE );
///////////////////////////////////////////////////////////////////////////
	
	QLabel *qtarch_Label_11 = new QLabel(this, "Label_11");
	qtarch_Label_11->setGeometry(10, 180, 200, 30);
	qtarch_Label_11->setMinimumSize(0, 0);
	qtarch_Label_11->setMaximumSize(32767, 32767);
	qtarch_Label_11->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_11->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	qtarch_Label_11->setFontPropagation(QWidget::SameFont);
	qtarch_Label_11->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_11->setFrameStyle( 0 );
	qtarch_Label_11->setLineWidth( 1 );
	qtarch_Label_11->setMidLineWidth( 0 );
	qtarch_Label_11->QFrame::setMargin( 0 );
	qtarch_Label_11->setText( tr( "Update Interval (ms)" ) );
	qtarch_Label_11->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_11->setMargin( 0 );

	PollInterval = new QSpinBox(this, "SpinBox_4");
	PollInterval->setGeometry(200, 180, 50, 30);
	PollInterval->setMinimumSize(0, 0);
	PollInterval->setMaximumSize(32767, 32767);
	PollInterval->setFocusPolicy(QWidget::StrongFocus);
	PollInterval->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	PollInterval->setFontPropagation(QWidget::SameFont);
	PollInterval->setPalettePropagation(QWidget::SameFont);
	PollInterval->setFrameStyle( 50 );
	PollInterval->setLineWidth( 2 );
	PollInterval->setMidLineWidth( 0 );
	PollInterval->QFrame::setMargin( 0 );
	#endif
	PollInterval->setRange( 0, 2000 );
	PollInterval->setSteps( 100, 0 );
	PollInterval->setPrefix( "" );
	PollInterval->setSuffix( "" );
	PollInterval->setSpecialValueText( "" );
	PollInterval->setWrapping( TRUE );
/////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////

	QPushButton *qtarch_PushButton_1 = new QPushButton(this, "PushButton_1");
	qtarch_PushButton_1->setGeometry(20, 230, 100, 30);
	qtarch_PushButton_1->setMinimumSize(0, 0);
	qtarch_PushButton_1->setMaximumSize(32767, 32767);
	qtarch_PushButton_1->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_1->setBackgroundMode(QWidget::PaletteButton);
	#if QT_VERSION < 300
	qtarch_PushButton_1->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_1->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_PushButton_1->setText( tr( "Ok" ) );
	qtarch_PushButton_1->setAutoRepeat( FALSE );
	qtarch_PushButton_1->setAutoResize( FALSE );
	qtarch_PushButton_1->setToggleButton( FALSE );
	qtarch_PushButton_1->setDefault( FALSE );
	qtarch_PushButton_1->setAutoDefault( FALSE );
	qtarch_PushButton_1->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_1, SIGNAL(clicked()), SLOT(OkClicked()));
	QPushButton *qtarch_PushButton_2 = new QPushButton(this, "PushButton_2");
	qtarch_PushButton_2->setGeometry(210, 230, 100, 30);
	qtarch_PushButton_2->setMinimumSize(0, 0);
	qtarch_PushButton_2->setMaximumSize(32767, 32767);
	qtarch_PushButton_2->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_2->setBackgroundMode(QWidget::PaletteButton);
	#if QT_VERSION < 300
	qtarch_PushButton_2->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_2->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_PushButton_2->setText( tr( "&Help" ) );
	qtarch_PushButton_2->setAutoRepeat( FALSE );
	qtarch_PushButton_2->setAutoResize( FALSE );
	qtarch_PushButton_2->setToggleButton( FALSE );
	qtarch_PushButton_2->setDefault( FALSE );
	qtarch_PushButton_2->setAutoDefault( FALSE );
	qtarch_PushButton_2->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_2, SIGNAL(clicked()), SLOT(Help()));
	QPushButton *qtarch_PushButton_3 = new QPushButton(this, "PushButton_3");
	qtarch_PushButton_3->setGeometry(360, 230, 100, 30);
	qtarch_PushButton_3->setMinimumSize(0, 0);
	qtarch_PushButton_3->setMaximumSize(32767, 32767);
	qtarch_PushButton_3->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_3->setBackgroundMode(QWidget::PaletteButton);
	#if QT_VERSION < 300
	qtarch_PushButton_3->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_3->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_PushButton_3->setText( tr( "Cancel" ) );
	qtarch_PushButton_3->setAutoRepeat( FALSE );
	qtarch_PushButton_3->setAutoResize( FALSE );
	qtarch_PushButton_3->setToggleButton( FALSE );
	qtarch_PushButton_3->setDefault( FALSE );
	qtarch_PushButton_3->setAutoDefault( FALSE );
	qtarch_PushButton_3->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_3, SIGNAL(clicked()), SLOT(reject()));

	resize(480,280);
	setMinimumSize(0, 0);
	setMaximumSize(32767, 32767);
}
Iec103driverConfigurationData::~Iec103driverConfigurationData()
{
}

