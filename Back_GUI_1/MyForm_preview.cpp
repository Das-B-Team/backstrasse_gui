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
	 
	 // Dispose of the Graphics object
	 delete gr;
	

	 
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

		 Int32 pa_x, pa_y, pb_x, pb_y, pc_x, pc_y;
		 Int32 pd_x, pd_y, pe_x, pe_y, pf_x, pf_y;

		 Int32 pg_x, pg_y, ph_x, ph_y, pi_x, pi_y;
		 Int32 pj_x, pj_y, pk_x, pk_y, pl_x, pl_y;

		 Int32 pm_x, pm_y, pn_x, pn_y, po_x, po_y;
		 Int32 pp_x, pp_y, pq_x, pq_y, pr_x, pr_y;

		 Int32 ps_x, ps_y, pt_x, pt_y, pu_x, pu_y;
		 Int32 pv_x, pv_y, pw_x, pw_y, px_x, px_y;

		 pa_x = 58; pa_y = 66; pb_x = 210; pb_y = 66; pc_x = 134; pc_y = 196;		 
		 pd_x = 58; pd_y = 154; pe_x = 134; pe_y = 20; pf_x = 210; pf_y = 154;

		 pg_x = 64; pg_y = 72; ph_x = 204; ph_y = 72; pi_x = 134; pi_y = 190;
		 pj_x = 64; pj_y = 148; pk_x = 134; pk_y = 26; pl_x = 204; pl_y = 148;

		 pm_x = 70; pm_y = 78; pn_x = 198; pn_y = 78; po_x = 134; po_y = 184;
		 pp_x = 70; pp_y = 142; pq_x = 134; pq_y = 30; pr_x = 198; pr_y = 142;

		 ps_x = 76; ps_y = 84; pt_x = 192; pt_y = 84; pu_x = 134; pu_y = 178;
		 pv_x = 76; pv_y = 136; pw_x = 134; pw_y = 36; px_x = 192; px_y = 136;
		 		
		 Point point_a = Point(pa_x, pa_y);
		 Point point_b = Point(pb_x, pb_y);
		 Point point_c = Point(pc_x, pc_y);
		 Point point_d = Point(pd_x, pd_y);
		 Point point_e = Point(pe_x, pe_y);
		 Point point_f = Point(pf_x, pf_y);

		 Point point_g = Point(pg_x, pg_y);
		 Point point_h = Point(ph_x, ph_y);
		 Point point_i = Point(pi_x, pi_y);
		 Point point_j = Point(pj_x, pj_y);
		 Point point_k = Point(pk_x, pk_y);
		 Point point_l = Point(pl_x, pl_y);

		 Point point_m = Point(pm_x, pm_y);
		 Point point_n = Point(pn_x, pn_y);
		 Point point_o = Point(po_x, po_y);
		 Point point_p = Point(pp_x, pp_y);
		 Point point_q = Point(pq_x, pq_y);
		 Point point_r = Point(pr_x, pr_y);

		 Point point_s = Point(ps_x, ps_y);
		 Point point_t = Point(pt_x, pt_y);
		 Point point_u = Point(pu_x, pu_y);
		 Point point_v = Point(pv_x, pv_y);
		 Point point_w = Point(pw_x, pw_y);
		 Point point_x = Point(px_x, px_y);

		 array<Point>^ Dreieck1 = { point_a, point_b, point_c };
		 array<Point>^ Dreieck2 = { point_d, point_e, point_f };

		 array<Point>^ Dreieck3 = { point_g, point_h, point_i };
		 array<Point>^ Dreieck4 = { point_j, point_k, point_l };

		 array<Point>^ Dreieck5 = { point_m, point_n, point_o };
		 array<Point>^ Dreieck6 = { point_p, point_q, point_r };

		 array<Point>^ Dreieck7 = { point_s, point_t, point_u };
		 array<Point>^ Dreieck8 = { point_v, point_w, point_x };

		// pg->FillPolygon(sbrush_beige, Dreieck1);
		// pg->FillPolygon(sbrush_beige, Dreieck2);

		 //System::Console::WriteLine("P_a x\t" + (pa_x).ToString() + " y\t" + (pa_y).ToString());
		 //System::Console::WriteLine("P_b x\t" + (pb_x).ToString() + " y\t" + (pb_y).ToString());
		 //System::Console::WriteLine("P_c x\t" + (pc_x).ToString() + " y\t" + (pc_y).ToString());

		 brownie ? pg->FillPolygon(sbrush_brown, Dreieck1)
		 : pg->FillPolygon(sbrush_beige, Dreieck1) ;
		 brownie ? pg->FillPolygon(sbrush_brown, Dreieck2)
		 : pg->FillPolygon(sbrush_beige, Dreieck2) ;

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
					 
					 pg->FillPolygon(sbrush_blue, Dreieck3);
					 pg->FillPolygon(sbrush_blue, Dreieck4);

					 }
					 if (i == 1) // zweite verzierung
					 {

					 pg->FillPolygon(sbrush_blue, Dreieck5);
					 pg->FillPolygon(sbrush_blue, Dreieck6);

					 }
					 if (i == 2) // erste verzierung
					 {
			
					 pg->FillPolygon(sbrush_blue, Dreieck7);
					 pg->FillPolygon(sbrush_blue, Dreieck8);

					 }
					 break;
				 case(Verzierung::Color::Green):
					 if (i == 0) // erste verzierung
					 {
					 
					 pg->FillPolygon(sbrush_green, Dreieck3);
					 pg->FillPolygon(sbrush_green, Dreieck4);

					 }
					 if (i == 1) // zweite verzierung
					 {
					 

					 pg->FillPolygon(sbrush_green, Dreieck5);
					 pg->FillPolygon(sbrush_green, Dreieck6);

					 }
					 if (i == 2) // erste verzierung
					 {

					 pg->FillPolygon(sbrush_green, Dreieck7);
					 pg->FillPolygon(sbrush_green, Dreieck8);

					 }
					 break;
				 case(Verzierung::Color::Pink):
					 if (i == 0) // erste verzierung
					 {

					 pg->FillPolygon(sbrush_pink, Dreieck3);
					 pg->FillPolygon(sbrush_pink, Dreieck4);

					 }
					 if (i == 1) // zweite verzierung
					 {

					 pg->FillPolygon(sbrush_pink, Dreieck5);
					 pg->FillPolygon(sbrush_pink, Dreieck6);

					 }
					 if (i == 2) // erste verzierung
					 {

					 pg->FillPolygon(sbrush_pink, Dreieck7);
					 pg->FillPolygon(sbrush_pink, Dreieck8);

					 }
					 break;
				case(Verzierung::Color::Red):
					 if (i == 0) // erste verzierung
					 {

					 pg->FillPolygon(sbrush_red, Dreieck3);
					 pg->FillPolygon(sbrush_red, Dreieck4);

					 }
					 if (i == 1) // zweite verzierung
					 {

					 pg->FillPolygon(sbrush_red, Dreieck5);
					 pg->FillPolygon(sbrush_red, Dreieck6);

					 }
					 if (i == 2) // erste verzierung
					 {

					 pg->FillPolygon(sbrush_red, Dreieck7);
					 pg->FillPolygon(sbrush_red, Dreieck8);

					 }
					 break;
				case(Verzierung::Color::White):
					 if (i == 0) // erste verzierung
					 {

					 pg->FillPolygon(sbrush_white, Dreieck3);
					 pg->FillPolygon(sbrush_white, Dreieck4);

					 }
					 if (i == 1) // zweite verzierung
					 {

					 pg->FillPolygon(sbrush_white, Dreieck5);
					 pg->FillPolygon(sbrush_white, Dreieck6);

					 }
					 if (i == 2) // erste verzierung
					 {

					 pg->FillPolygon(sbrush_white, Dreieck7);
					 pg->FillPolygon(sbrush_white, Dreieck8);

					 }
					 break;
				

				 }
				 i++;
			 }
		 }

	 }
	 if (Form == "Gringel")
	 {
		 // Gringel zeichnen

		 brownie ? pg->DrawEllipse(pen_brown_45, offset_x, offset_y, 120.0, 120.0) 
			 : pg->DrawEllipse(pen_beige_45, offset_x, offset_y, 120.0, 120.0);
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
		 brownie ? pg->FillEllipse(sbrush_brown, offset_x, offset_y, 120.0, 120.0) 
			 : pg->FillEllipse(sbrush_beige, offset_x, offset_y, 120.0, 120.0);
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
		
			 brownie ? pg->FillRectangle(sbrush_brown, offset_x, offset_y, 120.0, 120.0) 
				 : pg->FillRectangle(sbrush_beige, offset_x, offset_y, 120.0, 120.0);
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

	 
 