#include "MyForm.h"
#include "MyForm_preview.h"

System::Void BackGUI1::MyForm::showStatusMsg(String^ s)
{
	textBox5->Text = s;
	return System::Void();
}

System::Void BackGUI1::MyForm::clearStatusMsg()
{
	textBox5->Text = "";
	return System::Void();
}
/**funktion return a enum Color from the string s*/
Verzierung::Color BackGUI1::MyForm::getColor_as_enum(String^ s)
{
	
	if (s == "Weiss")
	{
		return Verzierung::Color::White;
	}
	if (s == "Rot")
	{
		return Verzierung::Color::Red;
	}
	if (s == "Blau")
	{
		return Verzierung::Color::Blue;
	}
	if (s == "Gruen")
	{
		return Verzierung::Color::Green;
	}
	if (s == "Pink")
	{
		return Verzierung::Color::Pink;
	}
	return Verzierung::Color::White; // if no color found change to white
}

Plaetzchen^ BackGUI1::MyForm::createPlaetzchen()
{
	// Plaetzchenobject erstellen
	Form_cookie shape;
	if (textBox1_anz_blaetz->Text != "" && textBox1_sizeX->Text != "" &&
		textBox2_sizeY->Text != "" && textBox3_Backtemp->Text != "" &&
		textBox4_Backzeit->Text != "" && 
		(radioButton1_Stern->Checked || radioButton2_Gringel->Checked || radioButton3_Quadrat->Checked || radioButton4_Kreis->Checked))  // nur wenn diese felder ausgefuellt sind
	{
		if(radioButton1_Stern->Checked )
		{
			shape = Stern;
		}
		if (radioButton2_Gringel->Checked)
		{
			shape = Gringel;
		}
		if (radioButton3_Quadrat->Checked)
		{
			shape = Quadrat;
		}
		if (radioButton4_Kreis->Checked)
		{
			shape = Rund;
		}

		p = gcnew Plaetzchen(Convert::ToSingle(textBox1_sizeX->Text), Convert::ToSingle(textBox2_sizeY->Text),
			Convert::ToSingle(textBox4_Backzeit->Text), Convert::ToSingle(textBox3_Backtemp->Text),
			shape, checkBox1_dunkler_Teig->Checked ? true : false);
		//Verzierungen hinzufuegen
		if (radioButton1_Verz1_Guss->Checked)
		{  
			//comboBox3_Verz1->SelectedText = "Weiss"; // wird gesetzt aber nicht angezeigt aber benutzt
			//Object^ o = gcnew Object();
			//o = comboBox3_Verz1->SelectedItem;
			try
			{
				if (!String::IsNullOrWhiteSpace(comboBox3_Verz1->SelectedItem->ToString())) // wenn Farbe ausgewaehlt ist
				{
					p->addVerzierung(v1 = gcnew Guss(p, getColor_as_enum(comboBox3_Verz1->SelectedItem->ToString())));
					MessageBox::Show(comboBox3_Verz1->SelectedItem->ToString() + " Guss v1");
				}
			}
			catch (NullReferenceException^ e)
			{
				showStatusMsg(e->Message + "Farbe auswaehlen fuer Verzierung 1");
			}
			//MessageBox::Show(o->ToString());
		}
		if (radioButton2_Verz1_Streusel->Checked)
		{
			
			try
			{
			
			if (!String::IsNullOrWhiteSpace(comboBox3_Verz1->SelectedItem->ToString())) // wenn Farbe ausgewaehlt ist
			{
				p->addVerzierung(v1 = gcnew Streusel(p, getColor_as_enum(comboBox3_Verz1->SelectedItem->ToString())));
				MessageBox::Show(comboBox3_Verz1->SelectedItem->ToString(), "Streusel v1");
			}
			}
			catch (NullReferenceException ^ e)
			{
				showStatusMsg(e->Message + "Farbe auswaehlen fuer Verzierung 1");
			}
			
		}
		if (radioButton3_Verz1_Nuesse->Checked)
		{			
			try
			{
				if (!String::IsNullOrWhiteSpace(comboBox3_Verz1->SelectedItem->ToString())) // wenn Farbe ausgewaehlt ist
				{
					p->addVerzierung(v1 = gcnew Nuesse(p, getColor_as_enum(comboBox3_Verz1->SelectedItem->ToString())));
					MessageBox::Show(comboBox3_Verz1->SelectedItem->ToString(), " Nuesse v1");
				}
			}catch(NullReferenceException ^ e)
			{
				showStatusMsg(e->Message + "Farbe auswaehlen fuer Verzierung 1");
			}
			
		}
		//2. Verzierung
		if (radioButton3_Verz2_Guss->Checked)
		{
			try
			{

				if (!String::IsNullOrWhiteSpace(comboBox1_Verz2->SelectedItem->ToString())) // wenn Farbe ausgewaehlt ist
				{
					p->addVerzierung(v2 = gcnew Guss(p, getColor_as_enum(comboBox1_Verz2->SelectedItem->ToString())));
					MessageBox::Show(comboBox1_Verz2->SelectedItem->ToString(), " Guss v2");
				}
			}catch (NullReferenceException ^ e)
			{
				showStatusMsg(e->Message + "Farbe auswaehlen fuer Verzierung 2");
			}
			
		}
		if (radioButton2_Verz2_Streusel->Checked)
		{
		
			try
			{
				if (!String::IsNullOrWhiteSpace(comboBox1_Verz2->SelectedItem->ToString())) // wenn Farbe ausgewaehlt ist
				{
					p->addVerzierung(v2 = gcnew Streusel(p, getColor_as_enum(comboBox1_Verz2->SelectedItem->ToString())));
					MessageBox::Show(comboBox1_Verz2->SelectedItem->ToString(), " Streusel v2");
				}
			}catch (NullReferenceException ^ e)
			{
				showStatusMsg(e->Message + "Farbe auswaehlen fuer Verzierung 2");
			}
			
		}
		if (radioButton1_Verz2_Nuesse->Checked)
		{
			try
			{
				if (!String::IsNullOrWhiteSpace(comboBox1_Verz2->SelectedItem->ToString())) // wenn Farbe ausgewaehlt ist
				{
					p->addVerzierung(v2 = gcnew Nuesse(p, getColor_as_enum(comboBox1_Verz2->SelectedItem->ToString())));
					MessageBox::Show(comboBox1_Verz2->SelectedItem->ToString(), " Nuesse v2");
				}
			}catch (NullReferenceException ^ e)
			{
				showStatusMsg(e->Message + "Farbe auswaehlen fuer Verzierung 2");
			}
			
		}
		//3. Verzierung
		if (radioButton6_Verz3_Guss->Checked)
		{
			try
			{
				if (!String::IsNullOrWhiteSpace(comboBox2_Verz3->SelectedItem->ToString())) // wenn Farbe ausgewaehlt ist
				{
					p->addVerzierung(v3 = gcnew Guss(p, getColor_as_enum(comboBox2_Verz3->SelectedItem->ToString())));
					MessageBox::Show(comboBox2_Verz3->SelectedItem->ToString(), " Guss v3");
				}
			}catch (NullReferenceException ^ e)
			{
				showStatusMsg(e->Message + "Farbe auswaehlen fuer Verzierung 3");
			}
			
		}
		if (radioButton5_Verz3_Streusel->Checked)
		{
			try
			{

				if (!String::IsNullOrWhiteSpace(comboBox2_Verz3->SelectedItem->ToString())) // wenn Farbe ausgewaehlt ist
				{
					p->addVerzierung(v3 = gcnew Streusel(p, getColor_as_enum(comboBox2_Verz3->SelectedItem->ToString())));
					MessageBox::Show(comboBox2_Verz3->SelectedItem->ToString(), " Streusel v3");
				}
			}catch (NullReferenceException ^ e)
			{
				showStatusMsg(e->Message + "Farbe auswaehlen fuer Verzierung 3");
			}
			
		}
		if (radioButton4_Verz3_Nuesse->Checked)
		{
			try
			{

				if (!String::IsNullOrWhiteSpace(comboBox2_Verz3->SelectedItem->ToString())) // wenn Farbe ausgewaehlt ist
				{
					p->addVerzierung(v3 = gcnew Nuesse(p, getColor_as_enum(comboBox2_Verz3->SelectedItem->ToString())));
					MessageBox::Show(comboBox2_Verz3->SelectedItem->ToString(), " Nuesse v3");
				}
			}catch (NullReferenceException ^ e)
			{
				showStatusMsg(e->Message + "Farbe auswaehlen fuer Verzierung 3");
			}
		
		}
		showStatusMsg(p->berecheGewicht() + " Mehl: " + p->getTeig()->getMehl() + "\r\n"
			+ "Eier: " + p->getTeig()->getEier() + "\r\n Zucker: " + p->getTeig()->getZucker());
		MessageBox::Show("Konfig geschreiben");
		
		
		return p;
	}
	else
	{
		if (radioButton1_Stern->Checked || radioButton2_Gringel->Checked || radioButton3_Quadrat->Checked || radioButton4_Kreis->Checked)
		{//TODO: Stern must be exchanged with the real selected idem
			p = gcnew Plaetzchen(10, 10,
				0.0, 0.0,
				Stern, checkBox1_dunkler_Teig->Checked ? true : false);
			return p;
		}
		//String zum schreiben in Datei erstellen ?
		MessageBox::Show("Konfig nicht geschreiben");
	}
	//throw gcnew System::NotImplementedException();
	// TODO: insert return statement here
}

System::Void BackGUI1::MyForm::Button1_vorschau_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	mf2 = gcnew MyForm_preview(p);
	
	mf2->ShowDialog();
	

}

System::Void BackGUI1::MyForm::textBox1_anz_blaetz_Leave(System::Object^ sender, System::EventArgs^ e)
{
	// Ueberpruefung ob es sich um eine Ganzzahl handelt mit Regex
	String^ s = textBox1_anz_blaetz->Text;
	Regex^ rgx = gcnew Regex("^[0-9]+$"); //only integer allowed
	if (rgx->IsMatch(s))
	{
		//Stausmeldung loeschen
		clearStatusMsg();
		
	}
	else
	{
		//loeschen des Eingabefelds
		textBox1_anz_blaetz->Text = "";
		//Statusmeldung anzeigen
		showStatusMsg("Anzahl Plaetzchen: Nur ganzahlige Werte eingeben z.B. 234, denn wir backen keine halbe Sachen...");
		textBox1_anz_blaetz->Focus();
	}
	return System::Void();
}

System::Void BackGUI1::MyForm::textBox1_sizeX_Leave(System::Object^ sender, System::EventArgs^ e)
{
	String^ s = textBox1_sizeX->Text;
	Regex^ rgx = gcnew Regex("^[1-7][0-9]$"); //only integer allowed
	if (rgx->IsMatch(s))
	{
		//Stausmeldung loeschen
		clearStatusMsg();

	}
	else
	{
		//loeschen des Eingabefelds
		textBox1_sizeX->Text = "";
		//Statusmeldung anzeigen
		showStatusMsg("X: Bitte Werte fuer X zwischen 10 und 79 mm waehlen");
		textBox1_sizeX->Focus();
	}
	return System::Void();
}

System::Void BackGUI1::MyForm::textBox2_sizeY_Leave(System::Object^ sender, System::EventArgs^ e)
{
	
	Regex^ rgx = gcnew Regex("^[1-7][0-9]$"); //only integer allowed
	if (rgx->IsMatch(textBox2_sizeY->Text))
	{
		//Stausmeldung loeschen
		clearStatusMsg();

	}
	else
	{
		//loeschen des Eingabefelds
		textBox2_sizeY->Text = "";
		//Statusmeldung anzeigen
		showStatusMsg("Y: Bitte Werte fuer Y zwischen 10 und 79 mm waehlen");
		textBox2_sizeY->Focus();
	}
	return System::Void();
}

System::Void BackGUI1::MyForm::button1_Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	// close the GUI
	this->Close();
	return System::Void();
}

System::Void BackGUI1::MyForm::textBox3_Backtemp_Leave(System::Object^ sender, System::EventArgs^ e)
{
	Regex^ rgx = gcnew Regex("^([1][0-9][0-9]|200)$"); //only integer allowed
	if (rgx->IsMatch(textBox3_Backtemp->Text))
	{
		//Stausmeldung loeschen
		clearStatusMsg();

	}
	else
	{
		//loeschen des Eingabefelds
		textBox3_Backtemp->Text = "";
		//Statusmeldung anzeigen
		showStatusMsg("Backtemperatur: Bitte Werte zwischen 100 und 200  waehlen");
		textBox3_Backtemp->Focus();
	}
	return System::Void();
}

System::Void BackGUI1::MyForm::textBox4_Backzeit_Leave(System::Object^ sender, System::EventArgs^ e)
{
	Regex^ rgx = gcnew Regex("^([1,2][0-9]|30)$"); //only integer allowed in range 10 - 30
	if (rgx->IsMatch(textBox4_Backzeit->Text))
	{
		//Stausmeldung loeschen
		clearStatusMsg();

	}
	else
	{
		//loeschen des Eingabefelds
		textBox4_Backzeit->Text = "";
		//Statusmeldung anzeigen
		showStatusMsg("Backdauer: Bitte Werte zwischen 10 und 30  waehlen");
		this->textBox4_Backzeit->Focus();
	}
	return System::Void();
}

System::Void BackGUI1::MyForm::radioButton1_Stern_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	button1_vorschau->Enabled= true;
	return System::Void();
}

System::Void BackGUI1::MyForm::radioButton2_Gringel_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	button1_vorschau->Enabled = true;
	return System::Void();
}

System::Void BackGUI1::MyForm::radioButton3_Quadrat_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	button1_vorschau->Enabled = true;
	return System::Void();
}

System::Void BackGUI1::MyForm::radioButton4_Kreis_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	button1_vorschau->Enabled = true;
	return System::Void();
}

System::Void BackGUI1::MyForm::button1_konfig_schreiben_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Einsammeln der Daten aus GUI
	// Plaetzchenobject erstellen
	p = createPlaetzchen();
	return System::Void();
}
