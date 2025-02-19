/*
 * @author Mário Soares
 * @contributors Jefferson González
 * @contributors René Vögeli / Rangee GmbH
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_BOOKCTRL_H_GUARD
#define WXPHP_BOOKCTRL_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_bookctrl_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxAuiNotebookEvent_entry;
extern zend_object_handlers wxphp_wxAuiNotebookEvent_object_handlers;
void php_wxAuiNotebookEvent_destruction_handler(zend_resource*);

class wxAuiNotebookEvent_php: public wxAuiNotebookEvent{
    public:

    wxAuiNotebookEvent_php(wxEventType command_type=wxEVT_NULL, int win_id=0):wxAuiNotebookEvent(command_type, win_id){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiNotebookEvent{
    wxAuiNotebookEvent_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiNotebookEvent;

void php_wxAuiNotebookEvent_free(void *object);
zend_object* php_wxAuiNotebookEvent_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiNotebookEvent_functions[] = {
    PHP_ME(php_wxAuiNotebookEvent, CloneMethod, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxAuiNotebookEvent, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxAuiNotebookEvent * php_wxAuiNotebookEvent_fetch_object(zend_object *obj) {
    return (zo_wxAuiNotebookEvent *)(
        (char *)(obj) - XtOffsetOf(zo_wxAuiNotebookEvent, zo)
    );
}

#define Z_wxAuiNotebookEvent_P(zv) \
    php_wxAuiNotebookEvent_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxBookCtrlBase_entry;
extern zend_object_handlers wxphp_wxBookCtrlBase_object_handlers;
void php_wxBookCtrlBase_destruction_handler(zend_resource*);

class wxBookCtrlBase_php: public wxBookCtrlBase{
    public:

    
    bool InsertPage(size_t index, wxWindow* page, const wxString& text, bool select=false, int imageId=NO_IMAGE);
    bool SetPageImage(size_t page, int image);
    bool SetPageText(size_t page, const wxString& text);
    int SetSelection(size_t page);
    int GetSelection() const;
    wxString GetPageText(size_t nPage) const;
    int GetPageImage(size_t nPage) const;
    int ChangeSelection(size_t page);
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxBookCtrlBase{
    wxBookCtrlBase_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxBookCtrlBase;

void php_wxBookCtrlBase_free(void *object);
zend_object* php_wxBookCtrlBase_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxBookCtrlBase_functions[] = {
    PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, Connect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, Disconnect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, AddFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, AddPendingEvent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, DeletePendingEvents, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, GetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, GetNextHandler, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, GetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, IsUnlinked, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, ProcessEvent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, ProcessEventLocally, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, ProcessPendingEvents, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, QueueEvent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, RemoveFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, SafelyProcessEvent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, SetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEvtHandler, Unlink, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Show, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, FindWindowById, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, FindWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Enable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Disable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Close, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetSizer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetSizerAndFit, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetToolTip, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetWindowStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Update, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, UpdateWindowUI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Validate, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, WarpPointer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, WindowToClientSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, UnsetToolTip, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, UnreserveControlId, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, TransferDataToWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, TransferDataFromWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ToggleWindowStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Thaw, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ShouldInheritColours, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetVirtualSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetValidator, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetTransparent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetSizeHints, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetScrollbar, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetScrollPos, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, AcceptsFocus, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, AcceptsFocusFromKeyboard, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, AcceptsFocusRecursively, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, AddChild, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, AlwaysShowScrollbars, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, CacheBestSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, CanScroll, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, CanSetTransparent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, CaptureMouse, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Center, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, CenterOnParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Centre, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, CentreOnParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ClearBackground, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ClientToScreen, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ClientToWindowSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ConvertDialogToPixels, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ConvertPixelsToDialog, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, DragAcceptFiles, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, DoUpdateWindowUI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, FindFocus, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, FindWindowByLabel, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, FindWindowByName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Fit, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, FitInside, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Freeze, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetAutoLayout, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetBackgroundStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetBestSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetBestVirtualSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetBorder, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetCapture, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetCaret, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetCharHeight, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetCharWidth, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Destroy, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, DestroyChildren, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetClientAreaOrigin, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetClientRect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetClientSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetContainingSizer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetCursor, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetEffectiveMinSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetEventHandler, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetExtraStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetFont, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetForegroundColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetGrandParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetHandle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetHelpText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetHelpTextAtPoint, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetId, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetMaxClientSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetMaxHeight, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetMaxSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetMaxWidth, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetMinClientSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetMinHeight, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetMinSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetMinWidth, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetNextSibling, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetPopupMenuSelectionFromUser, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetPosition, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetPrevSibling, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetRect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetScreenPosition, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetScreenRect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetScrollPos, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetScrollRange, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetScrollThumb, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetSizer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetTextExtent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetToolTip, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetToolTipText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetUpdateClientRect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetUpdateRegion, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetValidator, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetVirtualSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetWindowBorderSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetWindowStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetWindowStyleFlag, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetWindowVariant, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, HandleAsNavigationKey, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, HandleWindowEvent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, HasCapture, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, HasExtraStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, HasFlag, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, HasFocus, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, HasMultiplePages, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, HasScrollbar, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, HasTransparentBackground, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Hide, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, GetLayoutDirection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, InitDialog, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, InheritAttributes, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, InformFirstDirection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, InvalidateBestSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsBeingDeleted, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsDoubleBuffered, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsEnabled, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsExposed, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsFrozen, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsRetained, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsScrollbarAlwaysShown, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsShown, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsShownOnScreen, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsThisEnabled, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, IsTopLevel, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Layout, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, LineDown, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, LineUp, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Lower, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Move, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, MoveAfterInTabOrder, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, MoveBeforeInTabOrder, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Navigate, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, NavigateIn, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, NewControlId, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, PageDown, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, PageUp, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, PopupMenu, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, PostSizeEvent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, PostSizeEventToParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ProcessWindowEvent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ProcessWindowEventLocally, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, PushEventHandler, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Raise, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Refresh, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, RefreshRect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ReleaseMouse, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, RemoveChild, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, RemoveEventHandler, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, Reparent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ScreenToClient, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ScrollLines, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, ScrollPages, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SendSizeEvent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SendSizeEventToParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetAutoLayout, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetBackgroundStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetCanFocus, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetCaret, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetClientSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetConstraints, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetContainingSizer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetCursor, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetDropTarget, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetEventHandler, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetExtraStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetFocus, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetFocusFromKbd, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetFont, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetForegroundColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetHelpText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetId, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetInitialSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetLayoutDirection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetMaxClientSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetMaxSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetMinClientSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetMinSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetNextHandler, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetOwnBackgroundColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetOwnFont, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetOwnForegroundColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetPosition, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetThemeEnabled, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWindow, SetWindowVariant, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxControl, GetLabelText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxControl, SetLabelMarkup, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxControl, SetLabelText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxControl, RemoveMnemonics, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxControl, SetLabel, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxControl, GetLabel, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxControl, EscapeMnemonics, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxControl, Command, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWithImages, SetImageList, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWithImages, GetImageList, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWithImages, AssignImageList, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, AddPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, AdvanceSelection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, DeleteAllPages, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, DeletePage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, GetCurrentPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, GetPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, GetPageCount, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, HitTest, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, RemovePage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlBase, SetPageSize, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxBookCtrlBase * php_wxBookCtrlBase_fetch_object(zend_object *obj) {
    return (zo_wxBookCtrlBase *)(
        (char *)(obj) - XtOffsetOf(zo_wxBookCtrlBase, zo)
    );
}

#define Z_wxBookCtrlBase_P(zv) \
    php_wxBookCtrlBase_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxBookCtrlEvent_entry;
extern zend_object_handlers wxphp_wxBookCtrlEvent_object_handlers;
void php_wxBookCtrlEvent_destruction_handler(zend_resource*);

class wxBookCtrlEvent_php: public wxBookCtrlEvent{
    public:

    wxBookCtrlEvent_php(wxEventType eventType=wxEVT_NULL, int id=0, int sel=wxNOT_FOUND, int oldSel=wxNOT_FOUND):wxBookCtrlEvent(eventType, id, sel, oldSel){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxBookCtrlEvent{
    wxBookCtrlEvent_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxBookCtrlEvent;

void php_wxBookCtrlEvent_free(void *object);
zend_object* php_wxBookCtrlEvent_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxBookCtrlEvent_functions[] = {
    PHP_ME(php_wxBookCtrlEvent, GetOldSelection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlEvent, GetSelection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlEvent, SetOldSelection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlEvent, SetSelection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxBookCtrlEvent, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxBookCtrlEvent * php_wxBookCtrlEvent_fetch_object(zend_object *obj) {
    return (zo_wxBookCtrlEvent *)(
        (char *)(obj) - XtOffsetOf(zo_wxBookCtrlEvent, zo)
    );
}

#define Z_wxBookCtrlEvent_P(zv) \
    php_wxBookCtrlEvent_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxChoicebook_entry;
extern zend_object_handlers wxphp_wxChoicebook_object_handlers;
void php_wxChoicebook_destruction_handler(zend_resource*);

class wxChoicebook_php: public wxChoicebook{
    public:

    wxChoicebook_php():wxChoicebook(){}
    wxChoicebook_php(wxWindow* parent, wxWindowID id, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=0, const wxString& name=wxEmptyString):wxChoicebook(parent, id, pos, size, style, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxChoicebook{
    wxChoicebook_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxChoicebook;

void php_wxChoicebook_free(void *object);
zend_object* php_wxChoicebook_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxChoicebook_functions[] = {
    PHP_ME(php_wxChoicebook, GetChoiceCtrl, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxChoicebook, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxChoicebook * php_wxChoicebook_fetch_object(zend_object *obj) {
    return (zo_wxChoicebook *)(
        (char *)(obj) - XtOffsetOf(zo_wxChoicebook, zo)
    );
}

#define Z_wxChoicebook_P(zv) \
    php_wxChoicebook_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxListbook_entry;
extern zend_object_handlers wxphp_wxListbook_object_handlers;
void php_wxListbook_destruction_handler(zend_resource*);

class wxListbook_php: public wxListbook{
    public:

    wxListbook_php(wxWindow* parent, wxWindowID id, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=0, const wxString& name=wxEmptyString):wxListbook(parent, id, pos, size, style, name){}
    wxListbook_php():wxListbook(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxListbook{
    wxListbook_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxListbook;

void php_wxListbook_free(void *object);
zend_object* php_wxListbook_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxListbook_functions[] = {
    PHP_ME(php_wxListbook, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxListbook, GetListView, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxListbook * php_wxListbook_fetch_object(zend_object *obj) {
    return (zo_wxListbook *)(
        (char *)(obj) - XtOffsetOf(zo_wxListbook, zo)
    );
}

#define Z_wxListbook_P(zv) \
    php_wxListbook_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxNotebook_entry;
extern zend_object_handlers wxphp_wxNotebook_object_handlers;
void php_wxNotebook_destruction_handler(zend_resource*);

class wxNotebook_php: public wxNotebook{
    public:

    wxNotebook_php():wxNotebook(){}
    wxNotebook_php(wxWindow* parent, wxWindowID id, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=0, const wxString& name=wxNotebookNameStr):wxNotebook(parent, id, pos, size, style, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxNotebook{
    wxNotebook_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxNotebook;

void php_wxNotebook_free(void *object);
zend_object* php_wxNotebook_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxNotebook_functions[] = {
    PHP_ME(php_wxNotebook, ChangeSelection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, GetPageImage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, GetPageText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, GetRowCount, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, GetSelection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, GetThemeBackgroundColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, InsertPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, SetPadding, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, SetPageImage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, SetPageText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, SetSelection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxNotebook, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxNotebook * php_wxNotebook_fetch_object(zend_object *obj) {
    return (zo_wxNotebook *)(
        (char *)(obj) - XtOffsetOf(zo_wxNotebook, zo)
    );
}

#define Z_wxNotebook_P(zv) \
    php_wxNotebook_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxToolbook_entry;
extern zend_object_handlers wxphp_wxToolbook_object_handlers;
void php_wxToolbook_destruction_handler(zend_resource*);

class wxToolbook_php: public wxToolbook{
    public:

    wxToolbook_php():wxToolbook(){}
    wxToolbook_php(wxWindow* parent, wxWindowID id, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=0, const wxString& name=wxEmptyString):wxToolbook(parent, id, pos, size, style, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxToolbook{
    wxToolbook_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxToolbook;

void php_wxToolbook_free(void *object);
zend_object* php_wxToolbook_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxToolbook_functions[] = {
    PHP_ME(php_wxToolbook, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxToolbook, GetToolBar, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxToolbook * php_wxToolbook_fetch_object(zend_object *obj) {
    return (zo_wxToolbook *)(
        (char *)(obj) - XtOffsetOf(zo_wxToolbook, zo)
    );
}

#define Z_wxToolbook_P(zv) \
    php_wxToolbook_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxTreebook_entry;
extern zend_object_handlers wxphp_wxTreebook_object_handlers;
void php_wxTreebook_destruction_handler(zend_resource*);

class wxTreebook_php: public wxTreebook{
    public:

    wxTreebook_php():wxTreebook(){}
    wxTreebook_php(wxWindow* parent, wxWindowID id, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxBK_DEFAULT, const wxString& name=wxEmptyString):wxTreebook(parent, id, pos, size, style, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxTreebook{
    wxTreebook_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxTreebook;

void php_wxTreebook_free(void *object);
zend_object* php_wxTreebook_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxTreebook_functions[] = {
    PHP_ME(php_wxTreebook, AddPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, AddSubPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, CollapseNode, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, DeletePage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, ExpandNode, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, GetPageParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, GetSelection, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, InsertPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, InsertSubPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, IsNodeExpanded, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTreebook, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxTreebook * php_wxTreebook_fetch_object(zend_object *obj) {
    return (zo_wxTreebook *)(
        (char *)(obj) - XtOffsetOf(zo_wxTreebook, zo)
    );
}

#define Z_wxTreebook_P(zv) \
    php_wxTreebook_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_BOOKCTRL_H_GUARD
