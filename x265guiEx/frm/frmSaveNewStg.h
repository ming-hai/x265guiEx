﻿//  -----------------------------------------------------------------------------------------
//    拡張 x264/x265 出力(GUI) Ex  v1.xx/2.xx/3.xx by rigaya
//  -----------------------------------------------------------------------------------------
//   ソースコードについて
//   ・無保証です。
//   ・本ソースコードを使用したことによるいかなる損害・トラブルについてrigayaは責任を負いません。
//   以上に了解して頂ける場合、本ソースコードの使用、複製、改変、再頒布を行って頂いて構いません。
//  -----------------------------------------------------------------------------------------

#pragma once

#include "ComboBoxFolderBrowser.h"
#include "frmNewFolderName.h"
#include "auo_settings.h"

using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace x265guiEx {

    /// <summary>
    /// frmSaveNewStg の概要
    ///
    /// 警告: このクラスの名前を変更する場合、このクラスが依存するすべての .resx ファイルに関連付けられた
    ///          マネージ リソース コンパイラ ツールに対して 'Resource File Name' プロパティを
    ///          変更する必要があります。この変更を行わないと、
    ///          デザイナと、このフォームに関連付けられたローカライズ済みリソースとが、
    ///          正しく相互に利用できなくなります。
    /// </summary>
    public ref class frmSaveNewStg : public System::Windows::Forms::Form
    {
    public:
        frmSaveNewStg()
        {
            InitializeComponent();
            //
            //TODO: ここにコンストラクタ コードを追加します
            //
        }

    protected:
        /// <summary>
        /// 使用中のリソースをすべてクリーンアップします。
        /// </summary>
        ~frmSaveNewStg()
        {
            if (components)
            {
                delete components;
            }
        }
    public:
        String^ StgFileName;
        String^ StgDir;
    private:
        static frmSaveNewStg^ _instance;
    private: System::Windows::Forms::TextBox^  fsnTXFileName;
    private: System::Windows::Forms::Button^  fsnBTOK;
    private: System::Windows::Forms::Button^  fsnBTCancel;

    private: ComboBoxFolderBrowser^  fsnCXFolderBrowser;
    //private: System::Windows::Forms::ComboBox^  fsnCXFolderBrowser;
    private: System::Windows::Forms::Button^  fsnBTNewFolder;





    //Instanceを介し、ひとつだけ生成
    public:
        static property frmSaveNewStg^ Instance {
            frmSaveNewStg^ get() {
                if (_instance == nullptr || _instance->IsDisposed)
                    _instance = gcnew frmSaveNewStg();
                return _instance;
            }
        }

    protected: 

    protected: 

    private:
        /// <summary>
        /// 必要なデザイナ変数です。
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// デザイナ サポートに必要なメソッドです。このメソッドの内容を
        /// コード エディタで変更しないでください。
        /// </summary>
        void InitializeComponent(void)
        {
            this->fsnTXFileName = (gcnew System::Windows::Forms::TextBox());
            this->fsnBTOK = (gcnew System::Windows::Forms::Button());
            this->fsnBTCancel = (gcnew System::Windows::Forms::Button());
            //this->fsnCXFolderBrowser = (gcnew System::Windows::Forms::ComboBox());
            this->fsnCXFolderBrowser = (gcnew ComboBoxFolderBrowser());
            this->fsnBTNewFolder = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // fsnTXFileName
            // 
            this->fsnTXFileName->Location = System::Drawing::Point(12, 43);
            this->fsnTXFileName->Name = L"fsnTXFileName";
            this->fsnTXFileName->Size = System::Drawing::Size(346, 23);
            this->fsnTXFileName->TabIndex = 0;
            // 
            // fsnBTOK
            // 
            this->fsnBTOK->Location = System::Drawing::Point(283, 74);
            this->fsnBTOK->Name = L"fsnBTOK";
            this->fsnBTOK->Size = System::Drawing::Size(75, 30);
            this->fsnBTOK->TabIndex = 1;
            this->fsnBTOK->Text = L"OK";
            this->fsnBTOK->UseVisualStyleBackColor = true;
            this->fsnBTOK->Click += gcnew System::EventHandler(this, &frmSaveNewStg::fsnBTOK_Click);
            // 
            // fsnBTCancel
            // 
            this->fsnBTCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
            this->fsnBTCancel->Location = System::Drawing::Point(190, 74);
            this->fsnBTCancel->Name = L"fsnBTCancel";
            this->fsnBTCancel->Size = System::Drawing::Size(75, 30);
            this->fsnBTCancel->TabIndex = 2;
            this->fsnBTCancel->Text = L"キャンセル";
            this->fsnBTCancel->UseVisualStyleBackColor = true;
            this->fsnBTCancel->Click += gcnew System::EventHandler(this, &frmSaveNewStg::fsnBTCancel_Click);
            // 
            // fsnCXFolderBrowser
            // 
            this->fsnCXFolderBrowser->FormattingEnabled = true;
            this->fsnCXFolderBrowser->Location = System::Drawing::Point(12, 12);
            this->fsnCXFolderBrowser->Name = L"fsnCXFolderBrowser";
            this->fsnCXFolderBrowser->Size = System::Drawing::Size(241, 23);
            this->fsnCXFolderBrowser->TabIndex = 3;
            // 
            // fsnBTNewFolder
            // 
            this->fsnBTNewFolder->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(128)));
            this->fsnBTNewFolder->Location = System::Drawing::Point(259, 12);
            this->fsnBTNewFolder->Name = L"fsnBTNewFolder";
            this->fsnBTNewFolder->Size = System::Drawing::Size(99, 23);
            this->fsnBTNewFolder->TabIndex = 4;
            this->fsnBTNewFolder->Text = L"新しいフォルダ...";
            this->fsnBTNewFolder->UseVisualStyleBackColor = true;
            this->fsnBTNewFolder->Click += gcnew System::EventHandler(this, &frmSaveNewStg::fsnBTNewFolder_Click);
            // 
            // frmSaveNewStg
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
            this->AcceptButton = this->fsnBTOK;
            this->CancelButton = this->fsnBTCancel;
            this->ClientSize = System::Drawing::Size(369, 112);
            this->Controls->Add(this->fsnBTNewFolder);
            this->Controls->Add(this->fsnCXFolderBrowser);
            this->Controls->Add(this->fsnBTCancel);
            this->Controls->Add(this->fsnBTOK);
            this->Controls->Add(this->fsnTXFileName);
            this->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->KeyPreview = true;
            this->MaximizeBox = false;
            this->Name = L"frmSaveNewStg";
            this->Text = L"新しいプリセット";
            this->Load += gcnew System::EventHandler(this, &frmSaveNewStg::frmSaveNewStg_Load);
            this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmSaveNewStg::frmSaveNewStg_KeyDown);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    public:
        System::Void setStgDir(String^ _stgDir);
        System::Void setFilename(String^ fileName) {
            fsnTXFileName->Text = fileName;
        }
    private:
        System::Boolean checkStgFileName(String^ stgName);
    private: 
        System::Void fsnBTOK_Click(System::Object^  sender, System::EventArgs^  e) {
            if (checkStgFileName(fsnTXFileName->Text))
                this->Close();
        }
    private: 
        System::Void fsnBTCancel_Click(System::Object^  sender, System::EventArgs^  e) {
            this->Close();
        }
    private: 
        System::Void frmSaveNewStg_Load(System::Object^  sender, System::EventArgs^  e) {
            StgFileName = L"";
            
            //フォントの設定
            guiEx_settings exstg;
            exstg.load_encode_stg();
            if (str_has_char(exstg.s_local.conf_font.name))
                SetFontFamilyToForm(this, gcnew FontFamily(String(exstg.s_local.conf_font.name).ToString()), this->Font->FontFamily);
        }
    private:
        System::Void fsnBTNewFolder_Click(System::Object^  sender, System::EventArgs^  e) {
            frmNewFolderName^ fnf = gcnew frmNewFolderName();
            fnf->ShowDialog();
            String^ NewDir = Path::Combine(fsnCXFolderBrowser->GetSelectedFolder(), fnf->NewFolder);
            if (NewDir == nullptr || NewDir->Length == 0 || Directory::Exists(NewDir))
                return;
            Directory::CreateDirectory(NewDir);
            fsnCXFolderBrowser->ReLoad();
            fsnCXFolderBrowser->SelectDirectory(NewDir);
        }
    private:
        System::Void frmSaveNewStg_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
            if (e->KeyCode == Keys::Escape)
                this->Close();
        }
};
}
