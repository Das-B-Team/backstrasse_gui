//#include "MyForm.h"
#include "Form.h"
#include "Plaetzchen.h"
#include "MyForm.h"
#include "Guss.h"
#include "Streusel.h"
#include "Nuesse.h"
#include "Backblech.h"



using namespace BackGUI1;
using namespace System;

[STAThreadAttribute]
int main()
{

	MyForm^ mf = gcnew MyForm();
	mf->ShowDialog();
	
	/* my testing----------------------------------------------------------------- 
	Plaetzchen^ pl = gcnew Plaetzchen(15.0, 15.0, 35.0, 250.0, Stern, true);
	Verzierung^ deco = gcnew Guss(pl, Guss::Color::White);
	pl->addVerzierung(deco);
	Verzierung^ deco2 = gcnew Nuesse(pl, Nuesse::Color::White);
	//pl->addVerzierung(deco2);
	Verzierung^ deco3 = gcnew Nuesse(pl, Nuesse::Color::Blue);
	//pl->addVerzierung(deco3);
	Verzierung^ deco1 = gcnew Streusel(pl, Streusel::Color::Green);
	if(pl->addVerzierung(deco1))
	{
		//List<Verzierung^>^ ver = pl->getVerzierung();
		MessageBox::Show(pl->getVerzierung()->Count.ToString() + " " + pl->getVerzierung()->Capacity.ToString());
	}
	else
	{
		MessageBox::Show(pl->getVerzierung()->Count.ToString(), "Liste voll");
	}
	//String^ str = pl->hat_verzierung()==true ? "eine Verz." : "keine Verz.";
	MessageBox::Show(pl->hat_verzierung() ? "eine Verz." : "keine Verz.", "hat's eine Verzierung ?");
	MessageBox::Show(pl->berecheGewicht() + " Mehl: " + pl->getTeig()->getMehl() + "\r\n"
					+ "Eier: " + pl->getTeig()->getEier() + " Zucker: " + pl->getTeig()->getZucker());

	for each (auto v in pl->getVerzierung())
	{
		String^ s = v->getName();
		MessageBox::Show(s);
	}
	List<Verzierung^>^ pv = pl->getVerzierung();
	MessageBox::Show(pv[0]->getName()+ " " + pv[0]->getZucker().ToString(), "Verzierung");
	MessageBox::Show(Backblech::getPlaetzchen_per_blade(pl).ToString(), "soviel Plaetzchen passen auf ein Blech"); */
	return 0;
}