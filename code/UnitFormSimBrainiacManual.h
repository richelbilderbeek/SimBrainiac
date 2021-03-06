/*
  SimBrainiac, a simulation of Brainiacs interacting
  Copyright (C) 2008  Richel Bilderbeek

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
// From http://www.richelbilderbeek.nl
//---------------------------------------------------------------------------
#ifndef UnitFormSimBrainiacManualH
#define UnitFormSimBrainiacManualH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFormSimBrainiacManual : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheetGeneral;
        TTabSheet *TabSheetControls;
        TTabSheet *TabSheetHistory;
        TRichEdit *RichEditGeneral;
        TTabSheet *TabSheetTeachingForm;
        TRichEdit *RichEdit1;
        TRichEdit *RichEdit2;
        TRichEdit *RichEdit3;
        TTabSheet *TabSheetMenu;
        TRichEdit *RichEdit4;
private:	// User declarations
public:		// User declarations
        __fastcall TFormSimBrainiacManual(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSimBrainiacManual *FormSimBrainiacManual;
//---------------------------------------------------------------------------
#endif
