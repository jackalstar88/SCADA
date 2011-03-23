/**********************************************************************
--- Qt Architect generated file ---
File: TagCfgData.cpp
Last generated: Thu Jan 4 16:04:27 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#include <qt.h>
#include "TagCfgData.h"

TagCfgData::TagCfgData(QWidget *parent, const char *name)
: QDialog(parent, name, TRUE, 208)
{
	QLabel *qtarch_Label_20 = new QLabel(this, "Label_20");
	qtarch_Label_20->setGeometry(30, 20, 60, 30);
	qtarch_Label_20->setMinimumSize(0, 0);
	qtarch_Label_20->setMaximumSize(32767, 32767);
	qtarch_Label_20->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_20->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Label_20->setFontPropagation(QWidget::SameFont);
	qtarch_Label_20->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_20->setFrameStyle( 0 );
	qtarch_Label_20->setLineWidth( 1 );
	qtarch_Label_20->setMidLineWidth( 0 );
	qtarch_Label_20->QFrame::setMargin( 0 );
	qtarch_Label_20->setText( tr( "Name" ) );
	qtarch_Label_20->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_20->setMargin( 0 );
	Name = new QComboBox(FALSE, this, "ComboBox_10");
	Name->setGeometry(100, 20, 360, 30);
	Name->setMinimumSize(0, 0);
	Name->setMaximumSize(32767, 32767);
	Name->setFocusPolicy(QWidget::StrongFocus);
	Name->setBackgroundMode(QWidget::NoBackground);
#if QT_VERSION < 300
	Name->setFontPropagation(QWidget::SameFont);
	Name->setPalettePropagation(QWidget::SameFont);
	#endif
	Name->setSizeLimit( 10 );
	Name->setAutoResize( FALSE );
	Name->setMaxCount( 2147483647 );
	Name->setAutoCompletion( FALSE );
	connect(Name, SIGNAL(activated(int)), SLOT(SelChanged(int)));
	connect(Name, SIGNAL(highlighted(int)), SLOT(SelChanged(int)));
	QFrame *qtarch_Frame_4 = new QFrame(this, "Frame_4");
	qtarch_Frame_4->setGeometry(30, 60, 430, 210);
	qtarch_Frame_4->setMinimumSize(0, 0);
	qtarch_Frame_4->setMaximumSize(32767, 32767);
	qtarch_Frame_4->setFocusPolicy(QWidget::NoFocus);
	qtarch_Frame_4->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Frame_4->setFontPropagation(QWidget::SameFont);
	qtarch_Frame_4->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Frame_4->setFrameStyle( 51 );
	qtarch_Frame_4->setLineWidth( 2 );
	qtarch_Frame_4->setMidLineWidth( 0 );
	qtarch_Frame_4->QFrame::setMargin( 0 );
	UAEnabled = new QCheckBox(this, "CheckBox_8");
	UAEnabled->setGeometry(340, 90, 80, 30);
	UAEnabled->setMinimumSize(0, 0);
	UAEnabled->setMaximumSize(32767, 32767);
	UAEnabled->setFocusPolicy(QWidget::TabFocus);
	UAEnabled->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	UAEnabled->setFontPropagation(QWidget::SameFont);
	UAEnabled->setPalettePropagation(QWidget::SameFont);
	#endif
	UAEnabled->setText( tr( "Enabled" ) );
	UAEnabled->setAutoRepeat( FALSE );
	UAEnabled->setAutoResize( FALSE );
	UAEnabled->setChecked( FALSE );
	UpperAlarm = new QLineEdit(this, "LineEdit_7");
	UpperAlarm->setGeometry(180, 90, 140, 30);
	UpperAlarm->setMinimumSize(0, 0);
	UpperAlarm->setMaximumSize(32767, 32767);
	UpperAlarm->setFocusPolicy(QWidget::StrongFocus);
	UpperAlarm->setBackgroundMode(QWidget::PaletteBase);
#if QT_VERSION < 300
	UpperAlarm->setFontPropagation(QWidget::SameFont);
	UpperAlarm->setPalettePropagation(QWidget::SameFont);
	#endif
	UpperAlarm->setText( tr( "0" ) );
	UpperAlarm->setMaxLength( 16 );
	UpperAlarm->setFrame( QLineEdit::Normal );
	UpperAlarm->setFrame( TRUE );
	UpperAlarm->setAlignment( AlignLeft );
	QLabel *qtarch_Label_21 = new QLabel(this, "Label_21");
	qtarch_Label_21->setGeometry(50, 90, 100, 30);
	qtarch_Label_21->setMinimumSize(0, 0);
	qtarch_Label_21->setMaximumSize(32767, 32767);
	qtarch_Label_21->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_21->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Label_21->setFontPropagation(QWidget::SameFont);
	qtarch_Label_21->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_21->setFrameStyle( 0 );
	qtarch_Label_21->setLineWidth( 1 );
	qtarch_Label_21->setMidLineWidth( 0 );
	qtarch_Label_21->QFrame::setMargin( 0 );
	qtarch_Label_21->setText( tr( "Upper Alarm" ) );
	qtarch_Label_21->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_21->setMargin( 0 );
	UpperWarning = new QLineEdit(this, "LineEdit_8");
	UpperWarning->setGeometry(180, 130, 140, 30);
	UpperWarning->setMinimumSize(0, 0);
	UpperWarning->setMaximumSize(32767, 32767);
	UpperWarning->setFocusPolicy(QWidget::StrongFocus);
	UpperWarning->setBackgroundMode(QWidget::PaletteBase);
#if QT_VERSION < 300
	UpperWarning->setFontPropagation(QWidget::SameFont);
	UpperWarning->setPalettePropagation(QWidget::SameFont);
	#endif
	UpperWarning->setText( tr( "0" ) );
	UpperWarning->setMaxLength( 16 );
	UpperWarning->setFrame( QLineEdit::Normal );
	UpperWarning->setFrame( TRUE );
	UpperWarning->setAlignment( AlignLeft );
	UWEnabled = new QCheckBox(this, "CheckBox_9");
	UWEnabled->setGeometry(340, 130, 80, 30);
	UWEnabled->setMinimumSize(0, 0);
	UWEnabled->setMaximumSize(32767, 32767);
	UWEnabled->setFocusPolicy(QWidget::TabFocus);
	UWEnabled->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	UWEnabled->setFontPropagation(QWidget::SameFont);
	UWEnabled->setPalettePropagation(QWidget::SameFont);
	#endif
	UWEnabled->setText( tr( "Enabled" ) );
	UWEnabled->setAutoRepeat( FALSE );
	UWEnabled->setAutoResize( FALSE );
	UWEnabled->setChecked( FALSE );
	LowerWarning = new QLineEdit(this, "LineEdit_9");
	LowerWarning->setGeometry(180, 170, 140, 30);
	LowerWarning->setMinimumSize(0, 0);
	LowerWarning->setMaximumSize(32767, 32767);
	LowerWarning->setFocusPolicy(QWidget::StrongFocus);
	LowerWarning->setBackgroundMode(QWidget::PaletteBase);
#if QT_VERSION < 300
	LowerWarning->setFontPropagation(QWidget::SameFont);
	LowerWarning->setPalettePropagation(QWidget::SameFont);
	#endif
	LowerWarning->setText( tr( "0" ) );
	LowerWarning->setMaxLength( 16 );
	LowerWarning->setFrame( QLineEdit::Normal );
	LowerWarning->setFrame( TRUE );
	LowerWarning->setAlignment( AlignLeft );
	LWEnabled = new QCheckBox(this, "CheckBox_10");
	LWEnabled->setGeometry(340, 170, 80, 30);
	LWEnabled->setMinimumSize(0, 0);
	LWEnabled->setMaximumSize(32767, 32767);
	LWEnabled->setFocusPolicy(QWidget::TabFocus);
	LWEnabled->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	LWEnabled->setFontPropagation(QWidget::SameFont);
	LWEnabled->setPalettePropagation(QWidget::SameFont);
	#endif
	LWEnabled->setText( tr( "Enabled" ) );
	LWEnabled->setAutoRepeat( FALSE );
	LWEnabled->setAutoResize( FALSE );
	LWEnabled->setChecked( FALSE );
	LowerAlarm = new QLineEdit(this, "LineEdit_10");
	LowerAlarm->setGeometry(180, 210, 140, 30);
	LowerAlarm->setMinimumSize(0, 0);
	LowerAlarm->setMaximumSize(32767, 32767);
	LowerAlarm->setFocusPolicy(QWidget::StrongFocus);
	LowerAlarm->setBackgroundMode(QWidget::PaletteBase);
#if QT_VERSION < 300
	LowerAlarm->setFontPropagation(QWidget::SameFont);
	LowerAlarm->setPalettePropagation(QWidget::SameFont);
	#endif
	LowerAlarm->setText( tr( "0" ) );
	LowerAlarm->setMaxLength( 16 );
	LowerAlarm->setFrame( QLineEdit::Normal );
	LowerAlarm->setFrame( TRUE );
	LowerAlarm->setAlignment( AlignLeft );
	LAEnabled = new QCheckBox(this, "CheckBox_11");
	LAEnabled->setGeometry(340, 210, 80, 30);
	LAEnabled->setMinimumSize(0, 0);
	LAEnabled->setMaximumSize(32767, 32767);
	LAEnabled->setFocusPolicy(QWidget::TabFocus);
	LAEnabled->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	LAEnabled->setFontPropagation(QWidget::SameFont);
	LAEnabled->setPalettePropagation(QWidget::SameFont);
	#endif
	LAEnabled->setText( tr( "Enabled" ) );
	LAEnabled->setAutoRepeat( FALSE );
	LAEnabled->setAutoResize( FALSE );
	LAEnabled->setChecked( FALSE );
	QLabel *qtarch_Label_22 = new QLabel(this, "Label_22");
	qtarch_Label_22->setGeometry(50, 130, 100, 30);
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
	qtarch_Label_22->setText( tr( "Upper Warning" ) );
	qtarch_Label_22->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_22->setMargin( 0 );
	QLabel *qtarch_Label_23 = new QLabel(this, "Label_23");
	qtarch_Label_23->setGeometry(50, 170, 100, 30);
	qtarch_Label_23->setMinimumSize(0, 0);
	qtarch_Label_23->setMaximumSize(32767, 32767);
	qtarch_Label_23->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_23->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Label_23->setFontPropagation(QWidget::SameFont);
	qtarch_Label_23->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_23->setFrameStyle( 0 );
	qtarch_Label_23->setLineWidth( 1 );
	qtarch_Label_23->setMidLineWidth( 0 );
	qtarch_Label_23->QFrame::setMargin( 0 );
	qtarch_Label_23->setText( tr( "Lower Warning" ) );
	qtarch_Label_23->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_23->setMargin( 0 );
	QLabel *qtarch_Label_24 = new QLabel(this, "Label_24");
	qtarch_Label_24->setGeometry(50, 210, 100, 30);
	qtarch_Label_24->setMinimumSize(0, 0);
	qtarch_Label_24->setMaximumSize(32767, 32767);
	qtarch_Label_24->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_24->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Label_24->setFontPropagation(QWidget::SameFont);
	qtarch_Label_24->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_24->setFrameStyle( 0 );
	qtarch_Label_24->setLineWidth( 1 );
	qtarch_Label_24->setMidLineWidth( 0 );
	qtarch_Label_24->QFrame::setMargin( 0 );
	qtarch_Label_24->setText( tr( "Lower Alarm" ) );
	qtarch_Label_24->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_24->setMargin( 0 );
	ApplyButton = new QPushButton(this, "PushButton_20");
	ApplyButton->setGeometry(30, 300, 100, 30);
	ApplyButton->setMinimumSize(0, 0);
	ApplyButton->setMaximumSize(32767, 32767);
	ApplyButton->setFocusPolicy(QWidget::TabFocus);
	ApplyButton->setBackgroundMode(QWidget::PaletteButton);
#if QT_VERSION < 300
	ApplyButton->setFontPropagation(QWidget::SameFont);
	ApplyButton->setPalettePropagation(QWidget::SameFont);
	#endif
	ApplyButton->setText( tr( "Apply" ) );
	ApplyButton->setAutoRepeat( FALSE );
	ApplyButton->setAutoResize( FALSE );
	ApplyButton->setToggleButton( FALSE );
	ApplyButton->setDefault( FALSE );
	ApplyButton->setAutoDefault( FALSE );
	ApplyButton->setIsMenuButton( FALSE );
	connect(ApplyButton, SIGNAL(clicked()), SLOT(Apply()));
	QPushButton *qtarch_PushButton_21 = new QPushButton(this, "PushButton_21");
	qtarch_PushButton_21->setGeometry(200, 300, 100, 30);
	qtarch_PushButton_21->setMinimumSize(0, 0);
	qtarch_PushButton_21->setMaximumSize(32767, 32767);
	qtarch_PushButton_21->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_21->setBackgroundMode(QWidget::PaletteButton);
#if QT_VERSION < 300
	qtarch_PushButton_21->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_21->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_PushButton_21->setText( tr( "Help" ) );
	qtarch_PushButton_21->setAutoRepeat( FALSE );
	qtarch_PushButton_21->setAutoResize( FALSE );
	qtarch_PushButton_21->setToggleButton( FALSE );
	qtarch_PushButton_21->setDefault( FALSE );
	qtarch_PushButton_21->setAutoDefault( FALSE );
	qtarch_PushButton_21->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_21, SIGNAL(clicked()), SLOT(Help()));
	QPushButton *qtarch_PushButton_22 = new QPushButton(this, "PushButton_22");
	qtarch_PushButton_22->setGeometry(360, 300, 100, 30);
	qtarch_PushButton_22->setMinimumSize(0, 0);
	qtarch_PushButton_22->setMaximumSize(32767, 32767);
	qtarch_PushButton_22->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_22->setBackgroundMode(QWidget::PaletteButton);
#if QT_VERSION < 300
	qtarch_PushButton_22->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_22->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_PushButton_22->setText( tr( "Exit" ) );
	qtarch_PushButton_22->setAutoRepeat( FALSE );
	qtarch_PushButton_22->setAutoResize( FALSE );
	qtarch_PushButton_22->setToggleButton( FALSE );
	qtarch_PushButton_22->setDefault( FALSE );
	qtarch_PushButton_22->setAutoDefault( FALSE );
	qtarch_PushButton_22->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_22, SIGNAL(clicked()), SLOT(reject()));
	resize(490,350);
	setMinimumSize(0, 0);
	setMaximumSize(32767, 32767);
}
TagCfgData::~TagCfgData()
{
}

