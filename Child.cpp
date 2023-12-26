//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Child.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TChildForm *ChildForm;


  void (__closure *showMessageOnParentCallback)(AnsiString);


//---------------------------------------------------------------------------
__fastcall TChildForm::TChildForm(TComponent* Owner, AnsiString message, void (__closure *funcPtr)(AnsiString))
	: TForm(Owner)
{
	MessageLabel->Text=message;
    showMessageOnParentCallback = funcPtr;
}
//---------------------------------------------------------------------------
void __fastcall TChildForm::SendMessageToParentClick(TObject *Sender)
{
	  showMessageOnParentCallback(ChildInputField->Text);
	  this->Close();
}
//---------------------------------------------------------------------------

