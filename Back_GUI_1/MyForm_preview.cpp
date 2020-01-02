#include "MyForm_preview.h"

 System::Void BackGUI1::MyForm_preview::Button1_ok_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
 /* System::Void BackGUI1::MyForm_preview::MyForm_preview_EnabledChanged(System::Object^ sender, System::EventArgs^ e)
 {
	 this->Refresh();
 } */
 /** this event occure when the window is moved, resized etc.*/
 System::Void BackGUI1::MyForm_preview::MyForm_preview_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
 {
	 //this->Refresh();
	 Graphics^ gr = this->CreateGraphics();

	 Pen^ pen_black = gcnew Pen(Color::Black);
	 gr->DrawLine(pen_black, 10, 10, 300, 300);
	 this->MyForm_preview_zeichne();
	

	 
 }

 System::Void BackGUI1::MyForm_preview::MyForm_preview_zeichne()
 {
	 Graphics^ pg = this->CreateGraphics();
	 Pen^ pen_black = gcnew Pen(Color::Black);
	 Pen^ pen_blue_5 = gcnew Pen(Color::Blue, 15);
	 Pen^ pen_red = gcnew Pen(Color::Red, 1);
	 System::Drawing::Font^ fd = gcnew System::Drawing::Font(this->Font, FontStyle::Bold);
	 SolidBrush^ sbrush_yellow = gcnew SolidBrush(Color::Yellow);
	 SolidBrush^ sbrush_white = gcnew SolidBrush(Color::White);



	 pg->DrawLine(pen_black, 10, 10, 300, 300);

	 pg->FillEllipse(sbrush_white, 10, 100, 150, 80);


	 for (int x2 = 150, y2 = 80, x = 10, y = 10; x2 >= 0; x2 -= 2, y2--, x++, y++)
	 {
		 pg->DrawEllipse(pen_red, x, y, x2, y2);
	 }

	 pg->DrawString("Hallo Benutzer", fd, sbrush_yellow, 10, 40);
	 pg->DrawString(p->getTeig()->getMehl().ToString(), fd, sbrush_yellow, 20,60);
 }