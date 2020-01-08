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
	 //gr->DrawLine(pen_black, 10, 10, 300, 300);
	 this->MyForm_preview_zeichne();
	

	 
 }

 System::Void BackGUI1::MyForm_preview::MyForm_preview_zeichne()
 {
	 Graphics^ pg = this->CreateGraphics();
	 Pen^ pen_black = gcnew Pen(Color::Black);
	 Pen^ pen_blue_15 = gcnew Pen(Color::Blue, 15);
	 Pen^ pen_blue_10 = gcnew Pen(Color::Blue, 10);
	 Pen^ pen_blue_5 = gcnew Pen(Color::Blue, 5);
	 Pen^ pen_green_15 = gcnew Pen(Color::Green, 15);
	 Pen^ pen_green_10 = gcnew Pen(Color::Green, 10);
	 Pen^ pen_green_5 = gcnew Pen(Color::Green, 5);
	 Pen^ pen_pink_15 = gcnew Pen(Color::Pink, 15);
	 Pen^ pen_pink_10 = gcnew Pen(Color::Pink, 10);
	 Pen^ pen_pink_5 = gcnew Pen(Color::Pink, 5);
	 Pen^ pen_red_15 = gcnew Pen(Color::Red, 15);
	 Pen^ pen_red_10 = gcnew Pen(Color::Red, 10);
	 Pen^ pen_red_5 = gcnew Pen(Color::Red, 5);
	 Pen^ pen_white_15 = gcnew Pen(Color::White, 15);
	 Pen^ pen_white_10 = gcnew Pen(Color::White, 10);
	 Pen^ pen_white_5 = gcnew Pen(Color::White, 5);
	 Pen^ pen_red_1 = gcnew Pen(Color::Red, 1);
	 Pen^ pen_brown_45 = gcnew Pen(Color::Brown, 45);
	 Pen^ pen_beige_45 = gcnew Pen(Color::Beige, 45);
	 System::Drawing::Font^ fd = gcnew System::Drawing::Font(this->Font, FontStyle::Bold);
	 SolidBrush^ sbrush_yellow = gcnew SolidBrush(Color::Yellow);
	 SolidBrush^ sbrush_white = gcnew SolidBrush(Color::White);
	 SolidBrush^ sbrush_darkmagenta = gcnew SolidBrush(Color::DarkMagenta);
	 SolidBrush^ sbrush_brown = gcnew SolidBrush(Color::Brown);
	 SolidBrush^ sbrush_beige = gcnew SolidBrush(Color::Beige);
	 SolidBrush^ sbrush_blue = gcnew SolidBrush(Color::Blue);
	 SolidBrush^ sbrush_green = gcnew SolidBrush(Color::Green);
	 SolidBrush^ sbrush_pink = gcnew SolidBrush(Color::Pink);
	 SolidBrush^ sbrush_red = gcnew SolidBrush(Color::Red);




	 //pg->DrawLine(pen_black, 10, 10, 300, 300);

	 //pg->FillEllipse(sbrush_white, 10, 100, 150, 80);


	/* for (int x2 = 150, y2 = 80, x = 10, y = 10; x2 >= 0; x2 -= 2, y2--, x++, y++)
	 {
		 pg->DrawEllipse(pen_red, x, y, x2, y2);
	 }

	 pg->DrawString("Hallo Benutzer", fd, sbrush_yellow, 10, 40);
	 pg->DrawString(p->getTeig()->getMehl().ToString(), fd, sbrush_yellow, 20,60); */
	 //Ab hier gehts los ;-)
	 // infos aus Plaetzchen holen
	 String^ Form = p->getShape_as_String();
	 bool brownie = p->getTeig()->hasKakao() ? brownie = true : brownie = false;
	 //brownie? pg->DrawString("True", fd, sbrush_yellow, 20, 70): pg->DrawString("Fail", fd, sbrush_yellow, 20, 70);
	 //List<Verzierung^>
	/* if (p->hat_verzierung())
	 {
		 int i=70;
		 for each (auto v in p->getVerzierung())
		 {
			 v->getFarbe();
			 pg->DrawString(v->getName(), fd,sbrush_darkmagenta, 20, i);
			 i += 10;
		 }
	 } */
	 Single x = 1, y = 1, s = 16; //scale factor
	 Single offset_x = 70.0, offset_y = 50.0;
	 if (Form == "Stern")
	 {


		 //try to build a star
		 // first 
		 Int32 pa_x, pa_y, pe_x, pe_y, pc_x, pc_y;
		 pa_x = offset_x + (x + 5) * s / 2;
		 pa_y = offset_y - (y * -s);
		 pe_x = offset_x + x * -s / 2;
		 pe_y = offset_y + y * 8 * s;
		 pc_x = offset_x + (x + 9) * s / 2;
		 pc_y = offset_y + (y * 8) * s;
		 /*Point point_a = Point((x+5)*s + offset_x, (y) *-s +offset_y);
		 Point point_e = Point((x+1) *-s + offset_x, (y + 8) *s + offset_y);
		 Point point_c = Point((x + 9) *s + offset_x, (y + 8) *s + offset_y); */
		 Point point_a = Point(pa_x, pa_y);
		 Point point_e = Point(pe_x, pe_y);
		 Point point_c = Point(pc_x, pc_y);
		 System::Console::WriteLine("P_a x\t" + (pa_x).ToString() + " Y\t" + (pa_y).ToString());
		 System::Console::WriteLine("P_e x\t" + (pe_x).ToString() + " Y\t" + (pe_y).ToString());
		 System::Console::WriteLine("P_c x\t" + (pc_x).ToString() + " Y\t" + (pc_y).ToString());
		 // second
		 Point point_f = Point(x * -s + offset_x, (y + 3) * -s + offset_y);
		 Point point_b = Point((x + 9) * s + offset_x, (y + 3) * -s + offset_y);
		 Point point_d = Point((x + 5) + offset_x, (y + 11) * s + offset_y);

		 array<Point>^ Dreieck1 = { point_a, point_c, point_e };
		 array<Point>^ Dreieck2 = { point_f, point_b, point_d };

		 pg->FillPolygon(sbrush_darkmagenta, Dreieck1);
		 // pg->FillPolygon(sbrush_yellow, Dreieck2);
		 pg->FillEllipse(sbrush_yellow, offset_x - 5, offset_y - 5.0, 10.0, 10.0);
	 }
	 if (Form == "Gringel")
	 {
		 // Gringel zeichnen

		 brownie ? pg->DrawEllipse(pen_brown_45, offset_x, offset_y, 120.0, 120.0) : pg->DrawEllipse(pen_beige_45, offset_x, offset_y, 120.0, 120.0);
		 if (p->hat_verzierung())
		 {
			 Int16 i = 0;
			 for each (auto v in p->getVerzierung())
			 {
				 pg->DrawString(v->getName(), fd, sbrush_darkmagenta, 15, i * 15 + 70);
				 switch (v->getFarbe())
				 {
				 case(Verzierung::Color::Blue):
					 if (i == 0) // erste verzierung
					 {
						 pg->DrawEllipse(pen_blue_15, offset_x, offset_y, 120.0, 120.0);

					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->DrawEllipse(pen_blue_10, offset_x, offset_y, 120.0, 120.0);
					 }
					 if (i == 2) // erste verzierung
					 {
						 pg->DrawEllipse(pen_blue_5, offset_x, offset_y, 120.0, 120.0);
					 }
					 break;
				 case(Verzierung::Color::Green):
					 if (i == 0) // erste verzierung
					 {
						 pg->DrawEllipse(pen_green_15, offset_x, offset_y, 120.0, 120.0);
					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->DrawEllipse(pen_green_10, offset_x, offset_y, 120.0, 120.0);
					 }
					 if (i == 2) // erste verzierung
					 {
						 pg->DrawEllipse(pen_green_5, offset_x, offset_y, 120.0, 120.0);
					 }
					 break;
				 case(Verzierung::Color::Pink):
					 if (i == 0) // erste verzierung
					 {
						 pg->DrawEllipse(pen_pink_15, offset_x, offset_y, 120.0, 120.0);
					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->DrawEllipse(pen_pink_10, offset_x, offset_y, 120.0, 120.0);
					 }
					 if (i == 2) // erste verzierung
					 {
						 pg->DrawEllipse(pen_pink_5, offset_x, offset_y, 120.0, 120.0);
					 }
					 break;
				 case(Verzierung::Color::Red):
					 if (i == 0) // erste verzierung
					 {
						 pg->DrawEllipse(pen_red_15, offset_x, offset_y, 120.0, 120.0);
					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->DrawEllipse(pen_red_10, offset_x, offset_y, 120.0, 120.0);
					 }
					 if (i == 2) // erste verzierung
					 {
						 pg->DrawEllipse(pen_red_5, offset_x, offset_y, 120.0, 120.0);
					 }
					 break;
				 case(Verzierung::Color::White):
					 if (i == 0) // erste verzierung
					 {
						 pg->DrawEllipse(pen_white_15, offset_x, offset_y, 120.0, 120.0);
					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->DrawEllipse(pen_white_10, offset_x, offset_y, 120.0, 120.0);
					 }
					 if (i == 2) // erste verzierung
					 {
						 pg->DrawEllipse(pen_white_5, offset_x, offset_y, 120.0, 120.0);
					 }
					 break;


				 }
				 i++;
			 }
		 }
	 }
	 if (Form == "Rund")
	 {
		 // Rundes Plaetzchen zeichnen
		 brownie ? pg->FillEllipse(sbrush_brown, offset_x, offset_y, 120.0, 120.0) : pg->FillEllipse(sbrush_beige, offset_x, offset_y, 120.0, 120.0);
		 if (p->hat_verzierung())
		 {
			 Int16 i = 0;
			 for each (auto v in p->getVerzierung())
			 {
				 pg->DrawString(v->getName(), fd, sbrush_darkmagenta, 15, i * 15 + 70);
				 switch (v->getFarbe())
				 {
				 case(Verzierung::Color::Blue):
					 if (i == 0) // erste verzierung
					 {
						 pg->FillEllipse(sbrush_blue, offset_x+5, offset_y+5, 110.0, 110.0);

					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->FillEllipse(sbrush_blue, offset_x+10, offset_y+10, 100.0, 100.0);
					 }
					 if (i == 2) // dritte verzierung
					 {
						 pg->FillEllipse(sbrush_blue, offset_x+15, offset_y+15, 90.0, 90.0);
					 }
					 break;
				 case(Verzierung::Color::Green):
					 if (i == 0) // erste verzierung
					 {
						 pg->FillEllipse(sbrush_green, offset_x+5, offset_y+5, 110.0, 110.0);
					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->FillEllipse(sbrush_green, offset_x+10, offset_y+10, 100.0, 100.0);
					 }
					 if (i == 2) // dritte verzierung
					 {
						 pg->FillEllipse(sbrush_green, offset_x+15, offset_y+15, 90.0, 90.0);
					 }
					 break;
				 case(Verzierung::Color::Pink):
					 if (i == 0) // erste verzierung
					 {
						 pg->FillEllipse(sbrush_pink, offset_x+5, offset_y+5, 110.0, 110.0);
					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->FillEllipse(sbrush_pink, offset_x+10, offset_y+10, 100.0, 100.0);
					 }
					 if (i == 2) // dritte verzierung
					 {
						 pg->FillEllipse(sbrush_pink, offset_x+15, offset_y+15, 90.0, 90.0);
					 }
					 break;
				 case(Verzierung::Color::Red):
					 if (i == 0) // erste verzierung
					 {
						 pg->FillEllipse(sbrush_red, offset_x+5, offset_y+5, 110.0, 110.0);
					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->FillEllipse(sbrush_red, offset_x+10, offset_y+10, 100.0, 100.0);
					 }
					 if (i == 2) // dritte verzierung
					 {
						 pg->FillEllipse(sbrush_red, offset_x+15, offset_y+15, 90.0, 90.0);
					 }
					 break;
				 case(Verzierung::Color::White):
					 if (i == 0) // erste verzierung
					 {
						 pg->FillEllipse(sbrush_white, offset_x+5, offset_y+5, 110.0, 110.0);
					 }
					 if (i == 1) // zweite verzierung
					 {
						 pg->FillEllipse(sbrush_white, offset_x+10, offset_y+10, 100.0, 100.0);
					 }
					 if (i == 2) // dritte verzierung
					 {
						 pg->FillEllipse(sbrush_white, offset_x+15, offset_y+15, 90.0, 90.0);
					 }
					 break;


				 }
				 i++;
			 }
		 }

	 }
	 if (Form == "Quadrat")
	 {
		 // Quatratisches Plaetzchen zeichnen
		
			 brownie ? pg->FillRectangle(sbrush_brown, offset_x, offset_y, 120.0, 120.0) : pg->FillRectangle(sbrush_beige, offset_x, offset_y, 120.0, 120.0);
			 if (p->hat_verzierung())
			 {
				 Int16 i = 0;
				 for each (auto v in p->getVerzierung())
				 {
					 pg->DrawString(v->getName(), fd, sbrush_darkmagenta, 15, i * 15 + 70);
					 switch (v->getFarbe())
					 {
					 case(Verzierung::Color::Blue):
						 if (i == 0) // erste verzierung
						 {
							 pg->FillRectangle(sbrush_blue, offset_x + 5, offset_y + 5, 110.0, 110.0);

						 }
						 if (i == 1) // zweite verzierung
						 {
							 pg->FillRectangle(sbrush_blue, offset_x + 10, offset_y + 10, 100.0, 100.0);
						 }
						 if (i == 2) // dritte verzierung
						 {
							 pg->FillRectangle(sbrush_blue, offset_x + 15, offset_y + 15, 90.0, 90.0);
						 }
						 break;
					 case(Verzierung::Color::Green):
						 if (i == 0) // erste verzierung
						 {
							 pg->FillRectangle(sbrush_green, offset_x + 5, offset_y + 5, 110.0, 110.0);
						 }
						 if (i == 1) // zweite verzierung
						 {
							 pg->FillRectangle(sbrush_green, offset_x + 10, offset_y + 10, 100.0, 100.0);
						 }
						 if (i == 2) // dritte verzierung
						 {
							 pg->FillRectangle(sbrush_green, offset_x + 15, offset_y + 15, 90.0, 90.0);
						 }
						 break;
					 case(Verzierung::Color::Pink):
						 if (i == 0) // erste verzierung
						 {
							 pg->FillRectangle(sbrush_pink, offset_x + 5, offset_y + 5, 110.0, 110.0);
						 }
						 if (i == 1) // zweite verzierung
						 {
							 pg->FillRectangle(sbrush_pink, offset_x + 10, offset_y + 10, 100.0, 100.0);
						 }
						 if (i == 2) // dritte verzierung
						 {
							 pg->FillRectangle(sbrush_pink, offset_x + 15, offset_y + 15, 90.0, 90.0);
						 }
						 break;
					 case(Verzierung::Color::Red):
						 if (i == 0) // erste verzierung
						 {
							 pg->FillRectangle(sbrush_red, offset_x + 5, offset_y + 5, 110.0, 110.0);
						 }
						 if (i == 1) // zweite verzierung
						 {
							 pg->FillRectangle(sbrush_red, offset_x + 10, offset_y + 10, 100.0, 100.0);
						 }
						 if (i == 2) // dritte verzierung
						 {
							 pg->FillRectangle(sbrush_red, offset_x + 15, offset_y + 15, 90.0, 90.0);
						 }
						 break;
					 case(Verzierung::Color::White):
						 if (i == 0) // erste verzierung
						 {
							 pg->FillRectangle(sbrush_white, offset_x + 5, offset_y + 5, 110.0, 110.0);
						 }
						 if (i == 1) // zweite verzierung
						 {
							 pg->FillRectangle(sbrush_white, offset_x + 10, offset_y + 10, 100.0, 100.0);
						 }
						 if (i == 2) // dritte verzierung
						 {
							 pg->FillRectangle(sbrush_white, offset_x + 15, offset_y + 15, 90.0, 90.0);
						 }
						 break;


					 }
					 i++;
				 }
			 }

		 }
	 }
 