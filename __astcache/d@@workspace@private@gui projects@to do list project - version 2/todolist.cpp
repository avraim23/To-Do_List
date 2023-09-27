﻿//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "ToDoList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
float TForm1::get_percentage ()
{
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
	String taskText = TaskTextBox->Text ;
	if (taskText=="") { return ; }
	TasksListBox-> Items->Add(taskText);
	TaskTextBox->Text = "" ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)
{
	int index = Item->Index ;
	DoneTasksListBox->Items->Add(Item->Text);
	Progress->Text = Total ;
	TasksListBox->Items->Delete(index);

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

