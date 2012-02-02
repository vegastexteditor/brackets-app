// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/cpptoc/life_span_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK life_span_handler_on_before_popup(
    struct _cef_life_span_handler_t* self, cef_browser_t* parentBrowser,
    const struct _cef_popup_features_t* popupFeatures,
    cef_window_info_t* windowInfo, const cef_string_t* url,
    struct _cef_client_t** client, struct _cef_browser_settings_t* settings)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: parentBrowser; type: refptr_diff
  DCHECK(parentBrowser);
  if (!parentBrowser)
    return 0;
  // Verify param: popupFeatures; type: struct_byref_const
  DCHECK(popupFeatures);
  if (!popupFeatures)
    return 0;
  // Verify param: windowInfo; type: struct_byref
  DCHECK(windowInfo);
  if (!windowInfo)
    return 0;
  // Verify param: client; type: refptr_same_byref
  DCHECK(client);
  if (!client)
    return 0;
  // Verify param: settings; type: struct_byref
  DCHECK(settings);
  if (!settings)
    return 0;
  // Unverified params: url

  // Translate param: popupFeatures; type: struct_byref_const
  CefPopupFeatures popupFeaturesObj;
  if (popupFeatures)
    popupFeaturesObj.Set(*popupFeatures, false);
  // Translate param: windowInfo; type: struct_byref
  CefWindowInfo windowInfoObj;
  if (windowInfo)
    windowInfoObj.AttachTo(*windowInfo);
  // Translate param: client; type: refptr_same_byref
  CefRefPtr<CefClient> clientPtr;
  if (client && *client)
    clientPtr = CefClientCppToC::Unwrap(*client);
  CefClient* clientOrig = clientPtr.get();
  // Translate param: settings; type: struct_byref
  CefBrowserSettings settingsObj;
  if (settings)
    settingsObj.AttachTo(*settings);

  // Execute
  bool _retval = CefLifeSpanHandlerCppToC::Get(self)->OnBeforePopup(
      CefBrowserCToCpp::Wrap(parentBrowser),
      popupFeaturesObj,
      windowInfoObj,
      CefString(url),
      clientPtr,
      settingsObj);

  // Restore param: windowInfo; type: struct_byref
  if (windowInfo)
    windowInfoObj.DetachTo(*windowInfo);
  // Restore param: client; type: refptr_same_byref
  if (client) {
    if (clientPtr.get()) {
      if (clientPtr.get() != clientOrig) {
        *client = CefClientCppToC::Wrap(clientPtr);
      }
    } else {
      *client = NULL;
    }
  }
  // Restore param: settings; type: struct_byref
  if (settings)
    settingsObj.DetachTo(*settings);

  // Return type: bool
  return _retval;
}


void CEF_CALLBACK life_span_handler_on_after_created(
    struct _cef_life_span_handler_t* self, cef_browser_t* browser)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefLifeSpanHandlerCppToC::Get(self)->OnAfterCreated(
      CefBrowserCToCpp::Wrap(browser));
}


int CEF_CALLBACK life_span_handler_run_modal(
    struct _cef_life_span_handler_t* self, cef_browser_t* browser)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;

  // Execute
  bool _retval = CefLifeSpanHandlerCppToC::Get(self)->RunModal(
      CefBrowserCToCpp::Wrap(browser));

  // Return type: bool
  return _retval;
}


int CEF_CALLBACK life_span_handler_do_close(
    struct _cef_life_span_handler_t* self, cef_browser_t* browser)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;

  // Execute
  bool _retval = CefLifeSpanHandlerCppToC::Get(self)->DoClose(
      CefBrowserCToCpp::Wrap(browser));

  // Return type: bool
  return _retval;
}


void CEF_CALLBACK life_span_handler_on_before_close(
    struct _cef_life_span_handler_t* self, cef_browser_t* browser)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefLifeSpanHandlerCppToC::Get(self)->OnBeforeClose(
      CefBrowserCToCpp::Wrap(browser));
}



// CONSTRUCTOR - Do not edit by hand.

CefLifeSpanHandlerCppToC::CefLifeSpanHandlerCppToC(CefLifeSpanHandler* cls)
    : CefCppToC<CefLifeSpanHandlerCppToC, CefLifeSpanHandler,
        cef_life_span_handler_t>(cls)
{
  struct_.struct_.on_before_popup = life_span_handler_on_before_popup;
  struct_.struct_.on_after_created = life_span_handler_on_after_created;
  struct_.struct_.run_modal = life_span_handler_run_modal;
  struct_.struct_.do_close = life_span_handler_do_close;
  struct_.struct_.on_before_close = life_span_handler_on_before_close;
}

#ifndef NDEBUG
template<> long CefCppToC<CefLifeSpanHandlerCppToC, CefLifeSpanHandler,
    cef_life_span_handler_t>::DebugObjCt = 0;
#endif
