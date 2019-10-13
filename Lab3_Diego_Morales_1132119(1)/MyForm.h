#pragma once
#include "Carta.h"
#include "Pila.h"
namespace Lab3DiegoMorales11321191 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblCartaMazo;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ cbDestino;
	private: System::Windows::Forms::ComboBox^ cbOrigen;
	private: System::Windows::Forms::ComboBox^ cbCantCartas;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::Button^ moverbtn;
	private: System::Windows::Forms::RichTextBox^ grupo1;
	private: System::Windows::Forms::RichTextBox^ grupo2;
	private: System::Windows::Forms::RichTextBox^ grupo3;
	private: System::Windows::Forms::RichTextBox^ grupo4;
	private: System::Windows::Forms::RichTextBox^ grupo5;
	private: System::Windows::Forms::RichTextBox^ grupo6;
	private: System::Windows::Forms::RichTextBox^ grupo7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ poslbl;
	private: System::Windows::Forms::Button^ btnRepartirCartas;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblCartaMazo = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cbDestino = (gcnew System::Windows::Forms::ComboBox());
			this->cbOrigen = (gcnew System::Windows::Forms::ComboBox());
			this->cbCantCartas = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->moverbtn = (gcnew System::Windows::Forms::Button());
			this->grupo1 = (gcnew System::Windows::Forms::RichTextBox());
			this->grupo2 = (gcnew System::Windows::Forms::RichTextBox());
			this->grupo3 = (gcnew System::Windows::Forms::RichTextBox());
			this->grupo4 = (gcnew System::Windows::Forms::RichTextBox());
			this->grupo5 = (gcnew System::Windows::Forms::RichTextBox());
			this->grupo6 = (gcnew System::Windows::Forms::RichTextBox());
			this->grupo7 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->poslbl = (gcnew System::Windows::Forms::Label());
			this->btnRepartirCartas = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblCartaMazo
			// 
			this->lblCartaMazo->AutoSize = true;
			this->lblCartaMazo->Location = System::Drawing::Point(680, 114);
			this->lblCartaMazo->Name = L"lblCartaMazo";
			this->lblCartaMazo->Size = System::Drawing::Size(38, 13);
			this->lblCartaMazo->TabIndex = 64;
			this->lblCartaMazo->Text = L"[Carta]";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(628, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(148, 13);
			this->label10->TabIndex = 63;
			this->label10->Text = L"Carta del mazo para usar";
			// 
			// cbDestino
			// 
			this->cbDestino->FormattingEnabled = true;
			this->cbDestino->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->cbDestino->Location = System::Drawing::Point(468, 327);
			this->cbDestino->Name = L"cbDestino";
			this->cbDestino->Size = System::Drawing::Size(121, 21);
			this->cbDestino->TabIndex = 62;
			// 
			// cbOrigen
			// 
			this->cbOrigen->FormattingEnabled = true;
			this->cbOrigen->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->cbOrigen->Location = System::Drawing::Point(266, 327);
			this->cbOrigen->Name = L"cbOrigen";
			this->cbOrigen->Size = System::Drawing::Size(121, 21);
			this->cbOrigen->TabIndex = 61;
			// 
			// cbCantCartas
			// 
			this->cbCantCartas->FormattingEnabled = true;
			this->cbCantCartas->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9"
			});
			this->cbCantCartas->Location = System::Drawing::Point(56, 327);
			this->cbCantCartas->Name = L"cbCantCartas";
			this->cbCantCartas->Size = System::Drawing::Size(121, 21);
			this->cbCantCartas->TabIndex = 60;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(33, 288);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Pila 7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(122, 288);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 58;
			this->label8->Text = L"Pila 6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(209, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Pila 5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(296, 288);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 56;
			this->label6->Text = L"Pila 4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(380, 288);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Pila 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(465, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Pila 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(550, 288);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Pila 1";
			// 
			// btnIniciar
			// 
			this->btnIniciar->Location = System::Drawing::Point(628, 21);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(76, 29);
			this->btnIniciar->TabIndex = 52;
			this->btnIniciar->Text = L"Iniciar";
			this->btnIniciar->UseVisualStyleBackColor = true;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &MyForm::BtnIniciar_Click);
			// 
			// moverbtn
			// 
			this->moverbtn->Location = System::Drawing::Point(628, 321);
			this->moverbtn->Name = L"moverbtn";
			this->moverbtn->Size = System::Drawing::Size(76, 29);
			this->moverbtn->TabIndex = 51;
			this->moverbtn->Text = L"Mover";
			this->moverbtn->UseVisualStyleBackColor = true;
			this->moverbtn->Click += gcnew System::EventHandler(this, &MyForm::Moverbtn_Click_1);
			// 
			// grupo1
			// 
			this->grupo1->Location = System::Drawing::Point(529, 21);
			this->grupo1->Name = L"grupo1";
			this->grupo1->Size = System::Drawing::Size(80, 264);
			this->grupo1->TabIndex = 50;
			this->grupo1->Text = L"";
			// 
			// grupo2
			// 
			this->grupo2->Location = System::Drawing::Point(443, 21);
			this->grupo2->Name = L"grupo2";
			this->grupo2->Size = System::Drawing::Size(80, 264);
			this->grupo2->TabIndex = 49;
			this->grupo2->Text = L"";
			// 
			// grupo3
			// 
			this->grupo3->CausesValidation = false;
			this->grupo3->Location = System::Drawing::Point(357, 21);
			this->grupo3->Name = L"grupo3";
			this->grupo3->Size = System::Drawing::Size(80, 264);
			this->grupo3->TabIndex = 48;
			this->grupo3->Text = L"";
			// 
			// grupo4
			// 
			this->grupo4->Location = System::Drawing::Point(271, 21);
			this->grupo4->Name = L"grupo4";
			this->grupo4->Size = System::Drawing::Size(80, 264);
			this->grupo4->TabIndex = 47;
			this->grupo4->Text = L"";
			// 
			// grupo5
			// 
			this->grupo5->Location = System::Drawing::Point(185, 21);
			this->grupo5->Name = L"grupo5";
			this->grupo5->Size = System::Drawing::Size(80, 264);
			this->grupo5->TabIndex = 46;
			this->grupo5->Text = L"";
			// 
			// grupo6
			// 
			this->grupo6->Location = System::Drawing::Point(99, 21);
			this->grupo6->Name = L"grupo6";
			this->grupo6->Size = System::Drawing::Size(80, 264);
			this->grupo6->TabIndex = 45;
			this->grupo6->Text = L"";
			// 
			// grupo7
			// 
			this->grupo7->Location = System::Drawing::Point(13, 21);
			this->grupo7->Name = L"grupo7";
			this->grupo7->Size = System::Drawing::Size(80, 264);
			this->grupo7->TabIndex = 44;
			this->grupo7->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(393, 330);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Grupo Destino:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(188, 329);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Grupo Origen:";
			// 
			// poslbl
			// 
			this->poslbl->AutoSize = true;
			this->poslbl->Location = System::Drawing::Point(10, 330);
			this->poslbl->Name = L"poslbl";
			this->poslbl->Size = System::Drawing::Size(40, 13);
			this->poslbl->TabIndex = 41;
			this->poslbl->Text = L"Cartas:";
			// 
			// btnRepartirCartas
			// 
			this->btnRepartirCartas->Enabled = false;
			this->btnRepartirCartas->Location = System::Drawing::Point(648, 141);
			this->btnRepartirCartas->Name = L"btnRepartirCartas";
			this->btnRepartirCartas->Size = System::Drawing::Size(102, 37);
			this->btnRepartirCartas->TabIndex = 65;
			this->btnRepartirCartas->Text = L"Repartir Cartas";
			this->btnRepartirCartas->UseVisualStyleBackColor = true;
			this->btnRepartirCartas->Click += gcnew System::EventHandler(this, &MyForm::BtnRepartirCartas_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 371);
			this->Controls->Add(this->btnRepartirCartas);
			this->Controls->Add(this->lblCartaMazo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->cbDestino);
			this->Controls->Add(this->cbOrigen);
			this->Controls->Add(this->cbCantCartas);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->moverbtn);
			this->Controls->Add(this->grupo1);
			this->Controls->Add(this->grupo2);
			this->Controls->Add(this->grupo3);
			this->Controls->Add(this->grupo4);
			this->Controls->Add(this->grupo5);
			this->Controls->Add(this->grupo6);
			this->Controls->Add(this->grupo7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->poslbl);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pila* pila = new Pila();
		Pila* pila1 = new Pila();
		Pila* pila2 = new Pila();
		Pila* pila3 = new Pila();
		Pila* pila4 = new Pila();
		Pila* pila5 = new Pila();
		Pila* pila6 = new Pila();
		Pila* pila7 = new Pila();
		Pila* pilaAuxiliar = new Pila();

	private: System::Void BtnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();
		int random;
		int numero = 1;
		int posicion = 0;
		int pos = 0;
		char color = 'R';
		Carta* vCartas[52];
		int vCU[52];

		for (int j = 0; j < 26; j++)
		{
			Carta* car = new Carta;
			car->color = color;
			car->numero = numero;
			if (numero == 13)
			{
				numero = 1;
			}
			else
			{
				numero++;
			}
			vCartas[posicion] = car;
			posicion++;
		}

		color = 'N';

		for (int j = 26; j < 52; j++)
		{
			Carta* car = new Carta;
			car->color = color;
			car->numero = numero;
			if (numero == 13)
			{
				numero = 1;
			}
			else
			{
				numero++;
			}
			vCartas[posicion] = car;
			posicion++;
		}

		while (pila->NElementos < 52)
		{
			random = rand->Next(0, 52);
			random = random % 52;
			if (!Usadas(random, vCU))
			{
				pila->Apilar(*vCartas[random]);
				vCU[pos] = random;
				pos++;
			}
		}

		while (pila1->NElementos < 1 || pila2->NElementos < 2 || pila3->NElementos < 3 || pila4->NElementos < 4 || pila5->NElementos < 5 || pila6->NElementos < 6 || pila7->NElementos < 7)
		{
			if (pila7->NElementos < 7)
			{
				pila7->Apilar(pila->Desapilar());
			}
			else if (pila6->NElementos < 6)
			{
				pila6->Apilar(pila->Desapilar());
			}
			else if (pila5->NElementos < 5)
			{
				pila5->Apilar(pila->Desapilar());
			}
			else if (pila4->NElementos < 4)
			{
				pila4->Apilar(pila->Desapilar());
			}
			else if (pila3->NElementos < 3)
			{
				pila3->Apilar(pila->Desapilar());
			}
			else if (pila2->NElementos < 2)
			{
				pila2->Apilar(pila->Desapilar());
			}
			else
			{
				pila1->Apilar(pila->Desapilar());
			}
		}
		MessageBox::Show("Everything ok c:");
		cbCantCartas->Enabled = true;
		cbOrigen->Enabled = true;
		cbDestino->Enabled = true;
		moverbtn->Enabled = true;
		btnRepartirCartas->Enabled = true;
	}

	private: System::Boolean Usadas(int valor, int car[])
	{
		 for (int i = 0; i < 52; i++)
		 {
				if (car[i] == valor)
				{
					return true;
				}
		 }
			return false;
	}

	private: System::Void CambiarPilas() {
		System::String^ cartaVolteada = "";
		for (int i = 0; i < pila7->NElementos; i++)
		{
			if (i < (pila7->NElementos - 1))
			{
				cartaVolteada += "__\n";
			}
			else
			{
				if ((&pila7->ObtenerCima())->color == 'N')
				{
					cartaVolteada += ((&pila7->ObtenerCima())->numero).ToString() + "N";
					grupo7->Text = cartaVolteada;
				}
				else
				{
					cartaVolteada += ((&pila7->ObtenerCima())->numero).ToString() + "R";
					grupo7->Text = cartaVolteada;
				}

			}
		}

		if (pila7->NElementos == 0)
		{
			grupo7->Text = cartaVolteada;
		}

		cartaVolteada = "";

		for (int i = 0; i < pila6->NElementos; i++)
		{
			if (i < (pila6->NElementos - 1))
			{
				cartaVolteada += "__\n";
			}
			else
			{
				if ((&pila6->ObtenerCima())->color == 'N')
				{
					cartaVolteada += ((&pila6->ObtenerCima())->numero).ToString() + "N";
					grupo6->Text = cartaVolteada;
				}
				else
				{
					cartaVolteada += ((&pila6->ObtenerCima())->numero).ToString() + "R";
					grupo6->Text = cartaVolteada;
				}

			}
		}

		if (pila6->NElementos == 0)
		{
			grupo6->Text = cartaVolteada;
		}

		cartaVolteada = "";

		for (int i = 0; i < pila5->NElementos; i++)
		{
			if (i < (pila5->NElementos - 1))
			{
				cartaVolteada += "__\n";
			}
			else
			{
				if ((&pila5->ObtenerCima())->color == 'N')
				{
					cartaVolteada += ((&pila5->ObtenerCima())->numero).ToString() + "N";
					grupo5->Text = cartaVolteada;
				}
				else
				{
					cartaVolteada += ((&pila5->ObtenerCima())->numero).ToString() + "R";
					grupo5->Text = cartaVolteada;
				}

			}
		}

		if (pila5->NElementos == 0)
		{
			grupo5->Text = cartaVolteada;
		}

		cartaVolteada = "";

		for (int i = 0; i < pila4->NElementos; i++)
		{
			if (i < (pila4->NElementos - 1))
			{
				cartaVolteada += "__\n";
			}
			else
			{
				if ((&pila4->ObtenerCima())->color == 'N')
				{
					cartaVolteada += ((&pila4->ObtenerCima())->numero).ToString() + "N";
					grupo4->Text = cartaVolteada;
				}
				else
				{
					cartaVolteada += ((&pila4->ObtenerCima())->numero).ToString() + "R";
					grupo4->Text = cartaVolteada;
				}

			}
		}

		if (pila4->NElementos == 0)
		{
			grupo4->Text = cartaVolteada;
		}

		cartaVolteada = "";

		for (int i = 0; i < pila3->NElementos; i++)
		{
			if (i < (pila3->NElementos - 1))
			{
				cartaVolteada += "__\n";
			}
			else
			{
				if ((&pila3->ObtenerCima())->color == 'N')
				{
					cartaVolteada += ((&pila3->ObtenerCima())->numero).ToString() + "N";
					grupo3->Text = cartaVolteada;
				}
				else
				{
					cartaVolteada += ((&pila3->ObtenerCima())->numero).ToString() + "R";
					grupo3->Text = cartaVolteada;
				}

			}
		}

		if (pila3->NElementos == 0)
		{
			grupo3->Text = cartaVolteada;
		}

		cartaVolteada = "";

		for (int i = 0; i < pila2->NElementos; i++)
		{
			if (i < (pila2->NElementos - 1))
			{
				cartaVolteada += "__\n";
			}
			else
			{
				if ((&pila2->ObtenerCima())->color == 'N')
				{
					cartaVolteada += ((&pila2->ObtenerCima())->numero).ToString() + "N";
					grupo2->Text = cartaVolteada;
				}
				else
				{
					cartaVolteada += ((&pila6->ObtenerCima())->numero).ToString() + "R";
					grupo2->Text = cartaVolteada;
				}

			}
		}

		if (pila2->NElementos == 0)
		{
			grupo2->Text = cartaVolteada;
		}

		cartaVolteada = "";

		for (int i = 0; i < pila1->NElementos; i++)
		{
			if (i < (pila1->NElementos - 1))
			{
				cartaVolteada += "__\n";
			}
			else
			{
				if ((&pila1->ObtenerCima())->color == 'N')
				{
					cartaVolteada += ((&pila1->ObtenerCima())->numero).ToString() + "N";
					grupo1->Text = cartaVolteada;
				}
				else
				{
					cartaVolteada += ((&pila1->ObtenerCima())->numero).ToString() + "R";
					grupo1->Text = cartaVolteada;
				}

			}
		}

		if (pila1->NElementos == 0)
		{
			grupo1->Text = cartaVolteada;
		}

		cartaVolteada = "";

		if (pila->NElementos == 0)
		{
			lblCartaMazo->Text = cartaVolteada;
		}
		else
		{
			if ((&pila->ObtenerCima())->color == 'N')
			{
				cartaVolteada += ((&pila->ObtenerCima())->numero).ToString() + "N";
			}
			else
			{
				cartaVolteada += ((&pila->ObtenerCima())->numero).ToString() + "R";
			}

			lblCartaMazo->Text = cartaVolteada;
		}
	}

	private: System::Boolean ApilarCartas(Carta* cartaMenor, Carta* cartaMayor) {
		if (cartaMenor->numero < cartaMayor->numero)
		{
			if (cartaMenor->color != cartaMayor->color)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}

	private: System::Void ApilarYDesapilar(Pila* pilaOrigen, Pila* pilaDestino, int numCartas)
	{
		if (numCartas <= pilaDestino->NElementos)//Mientras que la cantidad de cartas a mover sea menor a la cantidad de elementos, o las cartas en total
		{
			if (ApilarCartas(&pilaOrigen->ObtenerCima(), &pilaDestino->ObtenerCima()))//Mientras se cumplala condicion de que la carta superior sea mayor y de diferente color
			{
				pilaAuxiliar->Apilar(pilaDestino->Desapilar()); //Desapila la pila de la carta que quiero mover
				for (int i = 0; i < numCartas - 1; i++)
				{
					if (ApilarCartas(&pilaAuxiliar->ObtenerCima(), &pilaDestino->ObtenerCima()))//Verifica que las dos cartas no sea iguales de color y una sea menor a la otra
					{
						pilaAuxiliar->Apilar(pila1->Desapilar());
					}
					else
					{
						i = numCartas;
						MessageBox::Show("No se puede realizar el movimiento,  el número debe ser menor al de la carta superior y el color de la carta debe ser diferente");
					}
				}

				for (int i = 0; i < numCartas; i++)
				{
					pilaOrigen->Apilar(pilaAuxiliar->Desapilar());
				}
			}
			else
			{
				MessageBox::Show("No se puede realizar el movimiento,  el número debe ser menor al de la carta superior y el color de la carta debe ser diferente");
			}
		}
		else
		{
			MessageBox::Show("La pila seleccionada no tiene las suficientes cartas para hacer lo movimientos");
		}
	}

	private: System::Void moverbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int Cantidad = Convert::ToInt16(cbCantCartas->SelectedItem);
		int pilaDestino = Convert::ToInt16(cbDestino->SelectedItem);
		int pilaOrigen = Convert::ToInt16(cbDestino->SelectedItem);

		switch (pilaDestino)//Evalua la pila a la que quiere mover la carta
		{
		case 1:
			switch (pilaOrigen)//Evalua la pila en donde esta la o las cartas que se quieren mover
			{
			case 2:
				ApilarYDesapilar(pila2, pila1, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila1, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila1, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila1, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila1, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila1, Cantidad);
				break;
			}
			break;

		case 2:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila2, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila2, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila2, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila2, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila2, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila2, Cantidad);
				break;
			}
			break;

		case 3:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila3, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila3, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila3, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila3, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila3, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila3, Cantidad);
				break;
			}
			break;

		case 4:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila4, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila4, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila4, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila4, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila4, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila4, Cantidad);
				break;
			}
			break;

		case 5:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila5, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila5, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila5, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila5, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila5, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila5, Cantidad);
				break;
			}
			break;

		case 6:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila6, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila6, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila6, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila6, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila6, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila6, Cantidad);
				break;
			}
			break;

		case 7:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila7, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila7, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila7, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila7, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila7, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila7, Cantidad);
				break;
			}
			break;
		}

		CambiarPilas();
	}

	private: System::Void BtnRepartirCartas_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pila->NElementos > 0)
		{
			pila7->Apilar(pila->Desapilar());
			if (pila->NElementos > 0)
			{
				pila6->Apilar(pila->Desapilar());
				if (pila->NElementos > 0)
				{
					pila5->Apilar(pila->Desapilar());
					if (pila->NElementos > 0)
					{
						pila4->Apilar(pila->Desapilar());
						if (pila->NElementos > 0)
						{
							pila3->Apilar(pila->Desapilar());
							if (pila->NElementos > 0)
							{
								pila2->Apilar(pila->Desapilar());
								if (pila->NElementos > 0)
								{
									pila1->Apilar(pila->Desapilar());
								}
								else
								{
									MessageBox::Show("Ya no hay más cartas por repartir en el mazo principal");
								}
							}
							else
							{
								MessageBox::Show("Ya no hay más cartas por repartir en el mazo principal");
							}
						}
						else
						{
							MessageBox::Show("Ya no hay cartas para repartir en el mazo");
						}
					}
					else
					{
						MessageBox::Show("Ya no hay cartas para repartir en el mazo");
					}
				}
				else
				{
					MessageBox::Show("Ya no hay cartas para repartir en el mazo");
				}
			}
			else
			{
				MessageBox::Show("Ya no hay cartas para repartir en el mazo");
			}
		}
		else
		{
			MessageBox::Show("Ya no hay cartas para repartir en el mazo");
		}

		CambiarPilas();
	}

	private: System::Void Moverbtn_Click_1(System::Object^ sender, System::EventArgs^ e) {//orden hay que corregirlo
		int Cantidad = Convert::ToInt16(cbCantCartas->SelectedItem);
		int pilaDestino = Convert::ToInt16(cbDestino->SelectedItem);
	int pilaOrigen = Convert::ToInt16(cbOrigen->SelectedItem);

		switch (pilaDestino)//Evalua la pila a la que quiere mover la carta
		{
		case 1:
			switch (pilaOrigen)//Evalua la pila en donde esta la o las cartas que se quieren mover
			{
			case 2:
				ApilarYDesapilar(pila2, pila1, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila1, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila1, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila1, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila1, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila1, Cantidad);
				break;
			}
			break;

		case 2:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila2, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila2, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila2, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila2, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila2, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila2, Cantidad);
				break;
			}
			break;

		case 3:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila3, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila3, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila3, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila3, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila3, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila3, Cantidad);
				break;
			}
			break;

		case 4:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila4, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila4, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila4, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila4, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila4, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila4, Cantidad);
				break;
			}
			break;

		case 5:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila5, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila5, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila5, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila5, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila5, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila5, Cantidad);
				break;
			}
			break;

		case 6:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila6, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila6, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila6, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila6, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila6, Cantidad);
				break;
			case 7:
				ApilarYDesapilar(pila7, pila6, Cantidad);
				break;
			}
			break;

		case 7:
			switch (pilaOrigen)
			{
			case 1:
				ApilarYDesapilar(pila1, pila7, Cantidad);
				break;
			case 2:
				ApilarYDesapilar(pila2, pila7, Cantidad);
				break;
			case 3:
				ApilarYDesapilar(pila3, pila7, Cantidad);
				break;
			case 4:
				ApilarYDesapilar(pila4, pila7, Cantidad);
				break;
			case 5:
				ApilarYDesapilar(pila5, pila7, Cantidad);
				break;
			case 6:
				ApilarYDesapilar(pila6, pila7, Cantidad);
				break;
			}
			break;
		}

		CambiarPilas();
}
};
}