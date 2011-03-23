/**********************************************************************
--- Qt Architect generated file ---
File: ScheduleCfgData.h
Last generated: Thu Jan 4 16:01:05 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef ScheduleCfgData_included
#define ScheduleCfgData_included
#include <qt.h>
#include "valedit.h"

class ScheduleCfgData : public QDialog
{
	Q_OBJECT
	public:
	ScheduleCfgData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~ScheduleCfgData();
	protected slots:
	virtual void Help() =0;
	virtual void EditReport() =0;
	virtual void SpChanged(int) =0;
	virtual void EditReceipe() =0;
	virtual void Delete() =0;
	virtual void SelChanged(int) =0;
	virtual void Apply() =0;
	virtual void New() =0;
	virtual void FreqChange(int) =0;
	protected:
	QComboBox *Name;
	QLineEdit *Comment;
	QComboBox *FrequencyMode;
	TIMEEDIT *Time;
	QComboBox *SamplePointList;
	QComboBox *RelOp;
	QLineEdit *TriggerValue;
	QComboBox *TagList;
	QComboBox *ReportList;
	QPushButton *ApplyButton;
	QPushButton *NewButton;
	QPushButton *DeleteButton;
	QCheckBox *PrintReport;
	QComboBox *ReceipeList;
	QPushButton *EditReportButton;
	QPushButton *EditReceipeButton;
	QLineEdit *Action;
};
#endif // ScheduleCfgData_included

