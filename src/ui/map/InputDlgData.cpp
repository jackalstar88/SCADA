/**********************************************************************
--- Qt Architect generated file ---
File: InputDlgData.cpp
Last generated: Tue Apr 18 15:50:33 2000
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#include <qt.h>
#include "InputDlgData.h"

InputDlgData::InputDlgData(QWidget *parent, const char *name)
: QDialog(parent, name, TRUE, 208)
{
	Name = new QLineEdit(this, "LineEdit_1");
	Name->setGeometry(20, 20, 620, 30);
	Name->setMinimumSize(0, 0);
	Name->setMaximumSize(32767, 32767);
	Name->setFocusPolicy(QWidget::StrongFocus);
	Name->setBackgroundMode(QWidget::PaletteBase);
#if QT_VERSION < 300
	Name->setFontPropagation(QWidget::SameFont);
	Name->setPalettePropagation(QWidget::SameFont);
	#endif
	Name->setText( "" );
	Name->setMaxLength( 32767 );
	Name->setFrame( QLineEdit::Normal );
	Name->setFrame( TRUE );
	Name->setAlignment( AlignLeft );
	QPushButton *qtarch_PushButton_1 = new QPushButton(this, "PushButton_1");
	qtarch_PushButton_1->setGeometry(20, 60, 100, 30);
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
	qtarch_PushButton_1->setAutoDefault( TRUE );
	qtarch_PushButton_1->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_1, SIGNAL(clicked()), SLOT(accept()));
	QPushButton *qtarch_PushButton_2 = new QPushButton(this, "PushButton_2");
	qtarch_PushButton_2->setGeometry(540, 60, 100, 30);
	qtarch_PushButton_2->setMinimumSize(0, 0);
	qtarch_PushButton_2->setMaximumSize(32767, 32767);
	qtarch_PushButton_2->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_2->setBackgroundMode(QWidget::PaletteButton);
#if QT_VERSION < 300
	qtarch_PushButton_2->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_2->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_PushButton_2->setText( tr( "Cancel" ) );
	qtarch_PushButton_2->setAutoRepeat( FALSE );
	qtarch_PushButton_2->setAutoResize( FALSE );
	qtarch_PushButton_2->setToggleButton( FALSE );
	qtarch_PushButton_2->setDefault( FALSE );
	qtarch_PushButton_2->setAutoDefault( TRUE );
	qtarch_PushButton_2->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_2, SIGNAL(clicked()), SLOT(reject()));
	resize(660,100);
	setMinimumSize(0, 0);
	setMaximumSize(32767, 32767);
}
InputDlgData::~InputDlgData()
{
}

