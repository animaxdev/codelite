//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: WSImporterDlgs.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef WSIMPORTERDLGS_BASE_CLASSES_H
#define WSIMPORTERDLGS_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>

class EnvVarImporterDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText26;
    wxStaticText* m_projectName;
    wxStaticText* m_staticText20;
    wxStaticText* m_confName;
    wxStaticText* m_staticText6;
    wxTextCtrl* m_envVars;
    wxButton* m_btnImport;
    wxButton* m_btnContinue;
    wxButton* m_btnNotImport;

protected:
    virtual void OnImport(wxCommandEvent& event) { event.Skip(); }
    virtual void OnContinue(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSkip(wxCommandEvent& event) { event.Skip(); }

public:
    EnvVarImporterDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Import - Environment variable"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(600,360), long style = wxSTAY_ON_TOP|wxCAPTION);
    virtual ~EnvVarImporterDlgBase();
};

#endif
