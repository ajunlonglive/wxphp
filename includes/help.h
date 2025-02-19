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

#ifndef WXPHP_HELP_H_GUARD
#define WXPHP_HELP_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_help_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxHtmlHelpController_entry;
extern zend_object_handlers wxphp_wxHtmlHelpController_object_handlers;
void php_wxHtmlHelpController_destruction_handler(zend_resource*);

class wxHtmlHelpController_php: public wxHtmlHelpController{
    public:

    wxHtmlHelpController_php(int style=wxHF_DEFAULT_STYLE, wxWindow* parentWindow=NULL):wxHtmlHelpController(style, parentWindow){}
    
    wxHtmlHelpDialog* CreateHelpDialog(wxHtmlHelpData* data);
    wxHtmlHelpFrame* CreateHelpFrame(wxHtmlHelpData* data);
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlHelpController{
    wxHtmlHelpController_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlHelpController;

void php_wxHtmlHelpController_free(void *object);
zend_object* php_wxHtmlHelpController_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlHelpController_functions[] = {
    PHP_ME(php_wxHtmlHelpController, AddBook, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, Display, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, DisplayContents, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, DisplayIndex, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, KeywordSearch, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, ReadCustomization, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, SetShouldPreventAppExit, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, SetTempDir, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, SetTitleFormat, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, UseConfig, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, WriteCustomization, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpController, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlHelpController * php_wxHtmlHelpController_fetch_object(zend_object *obj) {
    return (zo_wxHtmlHelpController *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlHelpController, zo)
    );
}

#define Z_wxHtmlHelpController_P(zv) \
    php_wxHtmlHelpController_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlModalHelp_entry;
extern zend_object_handlers wxphp_wxHtmlModalHelp_object_handlers;
void php_wxHtmlModalHelp_destruction_handler(zend_resource*);

class wxHtmlModalHelp_php: public wxHtmlModalHelp{
    public:

    wxHtmlModalHelp_php(wxWindow* parent, const wxString& helpFile, const wxString& topic=wxEmptyString, int style=wxHF_DEFAULT_STYLE|wxHF_DIALOG|wxHF_MODAL):wxHtmlModalHelp(parent, helpFile, topic, style){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlModalHelp{
    wxHtmlModalHelp_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlModalHelp;

void php_wxHtmlModalHelp_free(void *object);
zend_object* php_wxHtmlModalHelp_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlModalHelp_functions[] = {
    PHP_ME(php_wxHtmlModalHelp, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlModalHelp * php_wxHtmlModalHelp_fetch_object(zend_object *obj) {
    return (zo_wxHtmlModalHelp *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlModalHelp, zo)
    );
}

#define Z_wxHtmlModalHelp_P(zv) \
    php_wxHtmlModalHelp_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlHelpData_entry;
extern zend_object_handlers wxphp_wxHtmlHelpData_object_handlers;
void php_wxHtmlHelpData_destruction_handler(zend_resource*);

class wxHtmlHelpData_php: public wxHtmlHelpData{
    public:

    wxHtmlHelpData_php():wxHtmlHelpData(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlHelpData{
    wxHtmlHelpData_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlHelpData;

void php_wxHtmlHelpData_free(void *object);
zend_object* php_wxHtmlHelpData_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlHelpData_functions[] = {
    PHP_ME(php_wxHtmlHelpData, AddBook, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpData, FindPageById, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpData, FindPageByName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpData, SetTempDir, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlHelpData * php_wxHtmlHelpData_fetch_object(zend_object *obj) {
    return (zo_wxHtmlHelpData *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlHelpData, zo)
    );
}

#define Z_wxHtmlHelpData_P(zv) \
    php_wxHtmlHelpData_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlHelpDialog_entry;
extern zend_object_handlers wxphp_wxHtmlHelpDialog_object_handlers;
void php_wxHtmlHelpDialog_destruction_handler(zend_resource*);

class wxHtmlHelpDialog_php: public wxHtmlHelpDialog{
    public:

    wxHtmlHelpDialog_php(wxHtmlHelpData* data=NULL):wxHtmlHelpDialog(data){}
    wxHtmlHelpDialog_php(wxWindow* parent, wxWindowID id, const wxString& title=wxEmptyString, int style=wxHF_DEFAULT_STYLE, wxHtmlHelpData* data=NULL):wxHtmlHelpDialog(parent, id, title, style, data){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlHelpDialog{
    wxHtmlHelpDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlHelpDialog;

void php_wxHtmlHelpDialog_free(void *object);
zend_object* php_wxHtmlHelpDialog_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlHelpDialog_functions[] = {
    PHP_ME(php_wxHtmlHelpDialog, AddToolbarButtons, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpDialog, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpDialog, GetController, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpDialog, SetController, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpDialog, SetTitleFormat, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlHelpDialog * php_wxHtmlHelpDialog_fetch_object(zend_object *obj) {
    return (zo_wxHtmlHelpDialog *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlHelpDialog, zo)
    );
}

#define Z_wxHtmlHelpDialog_P(zv) \
    php_wxHtmlHelpDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlHelpFrame_entry;
extern zend_object_handlers wxphp_wxHtmlHelpFrame_object_handlers;
void php_wxHtmlHelpFrame_destruction_handler(zend_resource*);

class wxHtmlHelpFrame_php: public wxHtmlHelpFrame{
    public:

    wxHtmlHelpFrame_php(wxHtmlHelpData* data=NULL):wxHtmlHelpFrame(data){}
    wxHtmlHelpFrame_php(wxWindow* parent, wxWindowID id, const wxString& title=wxEmptyString, int style=wxHF_DEFAULT_STYLE, wxHtmlHelpData* data=NULL, wxConfigBase* config=NULL, const wxString& rootpath=wxEmptyString):wxHtmlHelpFrame(parent, id, title, style, data, config, rootpath){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlHelpFrame{
    wxHtmlHelpFrame_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlHelpFrame;

void php_wxHtmlHelpFrame_free(void *object);
zend_object* php_wxHtmlHelpFrame_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlHelpFrame_functions[] = {
    PHP_ME(php_wxHtmlHelpFrame, AddToolbarButtons, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpFrame, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpFrame, GetController, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpFrame, SetController, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpFrame, SetTitleFormat, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpFrame, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlHelpFrame * php_wxHtmlHelpFrame_fetch_object(zend_object *obj) {
    return (zo_wxHtmlHelpFrame *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlHelpFrame, zo)
    );
}

#define Z_wxHtmlHelpFrame_P(zv) \
    php_wxHtmlHelpFrame_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlHelpWindow_entry;
extern zend_object_handlers wxphp_wxHtmlHelpWindow_object_handlers;
void php_wxHtmlHelpWindow_destruction_handler(zend_resource*);

class wxHtmlHelpWindow_php: public wxHtmlHelpWindow{
    public:

    wxHtmlHelpWindow_php(wxHtmlHelpData* data=NULL):wxHtmlHelpWindow(data){}
    wxHtmlHelpWindow_php(wxWindow* parent, int wxWindowID, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, int style=wxTAB_TRAVERSAL|wxBORDER_NONE, int helpStyle=wxHF_DEFAULT_STYLE, wxHtmlHelpData* data=NULL):wxHtmlHelpWindow(parent, wxWindowID, pos, size, style, helpStyle, data){}
    
    void AddToolbarButtons(wxToolBar* toolBar, int style);
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlHelpWindow{
    wxHtmlHelpWindow_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlHelpWindow;

void php_wxHtmlHelpWindow_free(void *object);
zend_object* php_wxHtmlHelpWindow_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlHelpWindow_functions[] = {
    PHP_ME(php_wxHtmlHelpWindow, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, Display, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, DisplayIndex, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, GetData, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, DisplayContents, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, KeywordSearch, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, ReadCustomization, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, RefreshLists, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, UseConfig, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, WriteCustomization, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlHelpWindow, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlHelpWindow * php_wxHtmlHelpWindow_fetch_object(zend_object *obj) {
    return (zo_wxHtmlHelpWindow *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlHelpWindow, zo)
    );
}

#define Z_wxHtmlHelpWindow_P(zv) \
    php_wxHtmlHelpWindow_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxToolTip_entry;
extern zend_object_handlers wxphp_wxToolTip_object_handlers;
void php_wxToolTip_destruction_handler(zend_resource*);

class wxToolTip_php: public wxToolTip{
    public:

    wxToolTip_php(const wxString& tip):wxToolTip(tip){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxToolTip{
    wxToolTip_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxToolTip;

void php_wxToolTip_free(void *object);
zend_object* php_wxToolTip_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxToolTip_functions[] = {
    PHP_ME(php_wxToolTip, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxToolTip, SetTip, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxToolTip, SetReshow, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxToolTip, SetDelay, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxToolTip, SetAutoPop, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxToolTip, GetWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxToolTip, GetTip, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxToolTip, Enable, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxToolTip * php_wxToolTip_fetch_object(zend_object *obj) {
    return (zo_wxToolTip *)(
        (char *)(obj) - XtOffsetOf(zo_wxToolTip, zo)
    );
}

#define Z_wxToolTip_P(zv) \
    php_wxToolTip_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_HELP_H_GUARD
