//---------------------------------------------------------------------------

#ifndef ToDoListH
#define ToDoListH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *TaskTextBox;
	TLabel *Label1;
	TListBox *TasksListBox;
	TListBox *DoneTasksListBox;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Progress;
	TLabel *Label5;
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
    float get_percentage () ;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
