//---------------------------------------------------------------------------

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
	int Tasks  = TasksListBox->Items->Count ;
	int Done  = DoneTasksListBox->Items->Count ;
	int Total = Tasks + Done ;
	return ((Done*100)/Total) ;
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
    Progress->Text = get_percentage() ;
	TaskTextBox->Text = "" ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)
{
	int index = Item->Index ;
	DoneTasksListBox->Items->Add(Item->Text);
	TasksListBox->Items->Delete(index);
	Progress->Text = get_percentage() ;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

