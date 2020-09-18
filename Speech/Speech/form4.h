#pragma once

#include "functions.h"
#include "stdafx.h"
#include<stdio.h>
#include <iostream>
#include<conio.h>
#include<fstream>
#include<cmath>
#include<math.h>
#include<string>
#include <Windows.h>
namespace Form1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for form4
	/// </summary>
	public ref class form4 : public System::Windows::Forms::Form
	{
	public:
		form4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(53, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pick a song";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label2->Location = System::Drawing::Point(34, 355);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Trip to ganymed";
			this->label2->Click += gcnew System::EventHandler(this, &form4::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label3->Location = System::Drawing::Point(35, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"wow";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label4->Location = System::Drawing::Point(35, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(232, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Reunion of sapceducks";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label5->Location = System::Drawing::Point(35, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(208, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Opening of horizons";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label6->Location = System::Drawing::Point(35, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Krotenwurz";
			this->label6->Click += gcnew System::EventHandler(this, &form4::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label7->Location = System::Drawing::Point(33, 226);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(236, 33);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Just around the world";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label8->Location = System::Drawing::Point(35, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(127, 33);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Alte herren";
			this->label8->Click += gcnew System::EventHandler(this, &form4::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label9->Location = System::Drawing::Point(35, 292);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 33);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Where from";
			this->label9->Click += gcnew System::EventHandler(this, &form4::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label10->Location = System::Drawing::Point(35, 325);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(234, 33);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Goodbye grandmother";
			this->label10->Click += gcnew System::EventHandler(this, &form4::label10_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(373, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Select Song";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form4::button1_Click);
			// 
			// form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(618, 419);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"form4";
			this->Text = L"JAZZ";
			this->Load += gcnew System::EventHandler(this, &form4::form4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form4_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(L"pick-a1573801228.wav", NULL, SND_APPLICATION);
			  int index = testing(4);
				if(index==1)
				{
					PlaySound(L"songs/jazz/KieLoKaz_-_03_-_Wow_Kielokaz_ID_359.wav", NULL, SND_APPLICATION);
				}
				else if(index==2)
				{
					 PlaySound(L"songs/jazz/KieLoKaz_-_01_-_Reunion_of_the_Spaceducks_Kielokaz_ID_365.wav", NULL, SND_APPLICATION);
				}
				else if(index==3)
				{
					 PlaySound(L"songs/jazz/KieLoKaz_-_05_-_Opening_Horizons_Kielokaz_ID_361.wav", NULL, SND_APPLICATION);
				}
				else if(index==4)
				{
					 PlaySound(L"songs/jazz/KieLoKaz_-_06_-_Krotenwurz_Kielokaz_ID_360.wav", NULL, SND_APPLICATION);
				}
				else if(index==5)
				{
					 PlaySound(L"songs/jazz/KieLoKaz_-_04_-_Just_Arround_the_World_Kielokaz_ID_362.wav", NULL, SND_APPLICATION);
				}
				else if(index==6)
				{
					 PlaySound(L"songs/jazz/KieLoKaz_-_07_-_Alte_Herren_Kielokaz_ID_364.wav", NULL, SND_APPLICATION);
				}
				else if(index==7)
				{
					 PlaySound(L"songs/jazz/Mid-Air_Machine_-_Where_From.wav", NULL, SND_APPLICATION);
				}
				else if(index==8)
				{
					 PlaySound(L"songs/jazz/J_Syreus_Bach_-_Goodbye_Grandmother.wav", NULL, SND_APPLICATION);
				}
				else if(index==9)
				{
					PlaySound(L"songs/jazz/KieLoKaz_-_02_-_Trip_to_Ganymed_Kielokaz_ID_363.wav", NULL, SND_APPLICATION);
				}
		 }
};
}
