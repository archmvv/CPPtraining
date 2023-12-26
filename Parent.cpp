//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Parent.h"
#include "Child.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TParentForm *ParentForm;
//---------------------------------------------------------------------------
__fastcall TParentForm::TParentForm(TComponent* Owner)
	: TForm(Owner)
{
}

 void TParentForm::showMessageOnParent(AnsiString message){
	MessageLabel->Text=message;
 }


//---------------------------------------------------------------------------
void __fastcall TParentForm::SendMessageToChildButtonClick(TObject *Sender)
{
	void (__closure *funcPtr)(AnsiString) = showMessageOnParent;

	TChildForm *childForm = new TChildForm(nullptr, ParentInputField -> Text, funcPtr);
	childForm->Show();
}
//---------------------------------------------------------------------------
