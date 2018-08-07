#ifndef CLTABRENDERERGTK3_H
#define CLTABRENDERERGTK3_H

#include "clTabRenderer.h"

class WXDLLIMPEXP_SDK clTabRendererGTK3 : public clTabRenderer
{
public:
    clTabRendererGTK3();
    virtual ~clTabRendererGTK3();
    
    virtual void Draw(wxWindow* parent, wxDC& dc, wxDC& fontDC, const clTabInfo& tabInfo, const clTabColours& colours,
                      size_t style);
    void DrawBottomRect(wxWindow* parent, clTabInfo::Ptr_t activeTab, const wxRect& clientRect, wxDC& dc,
                        const clTabColours& colours, size_t style);
};

#endif // CLTABRENDERERGTK3_H