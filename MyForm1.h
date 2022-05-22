#pragma once
#include "ParesOrdenados.h"
#include "ArrElemento.h"

namespace Project53 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		CDivisores* objDivisores = new CDivisores();
	private: System::Windows::Forms::ListBox^ R;





		   ParesOrdenados* objPares = new ParesOrdenados();
		   ArrElemento* Hasse = new ArrElemento();
		   Graphics^ g;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
		   BufferedGraphics^ buffer;

		   //g = this->CreateGraphics();
		   //buffer = context->Allocate(g, this->panel1);

	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ TxtNumero;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ A;






	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->TxtNumero = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->A = (gcnew System::Windows::Forms::ListBox());
			this->R = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Menu;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese un número:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// TxtNumero
			// 
			this->TxtNumero->Location = System::Drawing::Point(252, 40);
			this->TxtNumero->Name = L"TxtNumero";
			this->TxtNumero->Size = System::Drawing::Size(56, 20);
			this->TxtNumero->TabIndex = 1;
			this->TxtNumero->TextChanged += gcnew System::EventHandler(this, &MyForm1::TxtNumero_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(336, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Divisores\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// A
			// 
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A->FormattingEnabled = true;
			this->A->ItemHeight = 21;
			this->A->Location = System::Drawing::Point(40, 117);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(144, 214);
			this->A->TabIndex = 4;
			// 
			// R
			// 
			this->R->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R->FormattingEnabled = true;
			this->R->ItemHeight = 21;
			this->R->Location = System::Drawing::Point(560, 32);
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(144, 424);
			this->R->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(207, 102);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Diagrama de Hasse";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(560, 11);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Pares ordenados";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 93);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Conjunto original";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(852, 573);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->R);
			this->Controls->Add(this->A);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TxtNumero);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   bool Primo(int n) {
			   if (n == 4) { return false; }
			   for (int i = 2; i < n/2; i++)  {
				   if (n % i == 0) { return false; }
			   }

			   return true;
		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		g = this->CreateGraphics();
		BufferedGraphicsContext^ context = BufferedGraphicsManager::Current;
		buffer = context->Allocate(g, this->ClientRectangle);

		buffer->Graphics->Clear(Color::White);

		int n;

		A->Items->Clear();
		R->Items->Clear();

		objPares = new ParesOrdenados();
		objDivisores = new CDivisores();
		Hasse = new ArrElemento();

		n = Convert::ToDouble(TxtNumero->Text);

		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				A->Items->Add(i);
				objDivisores->setn(i);
			}
		}
		objPares->SetDivisores(objDivisores);

		for (int i = 0; i < objPares->getSizeA(); i++) {
			R->Items->Add("[" + Convert::ToString(objPares->getA(i)) + ";" + Convert::ToString(objPares->getB(i)) + "]");
		}
		int cPrim = 0; int posx = 0; int PrimPrev; int posy = 0;
		for (int i = 0; i < objDivisores->getSize(); i++) {
			if (objDivisores->getn(i) != 1) {
				cPrim = 0;
				int aux = objDivisores->getn(i);
				int divi = 2;
				while (aux != 1) {
					if (aux % divi == 0) {
						cPrim++;
						aux = aux / divi;
					}
					else { divi++; }
				}
				if (PrimPrev == cPrim) {
					posx += 1;
				}
				else {
					if (PrimPrev > cPrim) {
						posx += 1;
						posy -= 1;
					}
					if (PrimPrev < cPrim) {
						posx += 1;
						posy += 1;
					}
					PrimPrev = cPrim;
				}
				Hasse->agregarElemento(new Elemento(objDivisores->getn(i), 240 + (posx * 32), 400 - (64 * posy), cPrim));
			}
			else {
				Hasse->agregarElemento(new Elemento(objDivisores->getn(i), 240 + (posx * 32), 400 - (64 * posy), cPrim));
			}
		}
		Hasse->Dibujar(buffer->Graphics);
		buffer->Render(g);
	}
	private: System::Void TxtNumero_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
