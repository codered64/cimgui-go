// Code generated by cmd/codegen from https://github.com/AllenDang/cimgui-go.
// DO NOT EDIT.

#pragma once

#include "cimgui/cimgui.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void wrap_ImDrawList_AddText_FontPtrV(ImDrawList* self,const ImFont* font,float font_size,const ImVec2 pos,ImU32 col,const char* text_begin,float wrap_width,const ImVec4* cpu_fine_clip_rect);
extern void wrap_ImDrawList_AddText_Vec2V(ImDrawList* self,const ImVec2 pos,ImU32 col,const char* text_begin);
extern void wrap_ImFontGlyphRangesBuilder_AddTextV(ImFontGlyphRangesBuilder* self,const char* text);
extern void wrap_ImFont_CalcTextSizeAV(ImVec2 *pOut,ImFont* self,float size,float max_width,float wrap_width,const char* text_begin,const char** remaining);
extern const char* wrap_ImFont_CalcWordWrapPositionA(ImFont* self,float scale,const char* text,float wrap_width);
extern void wrap_ImFont_RenderTextV(ImFont* self,ImDrawList* draw_list,float size,const ImVec2 pos,ImU32 col,const ImVec4 clip_rect,const char* text_begin,float wrap_width,bool cpu_fine_clip);
extern void wrap_ImGuiInputTextCallbackData_InsertCharsV(ImGuiInputTextCallbackData* self,int pos,const char* text);
extern void wrap_ImGuiTextBuffer_Appendf(ImGuiTextBuffer* self,const char* fmt);
extern bool wrap_ImGuiTextFilter_PassFilterV(ImGuiTextFilter* self,const char* text);
extern void wrap_igBulletText(const char* fmt);
extern void wrap_igCalcTextSizeV(ImVec2 *pOut,const char* text,bool hide_text_after_double_hash,float wrap_width);
extern void wrap_igDebugLog(const char* fmt);
extern const char* wrap_igFindRenderedTextEndV(const char* text);
extern int wrap_igImFormatString(char* buf,size_t buf_size,const char* fmt);
extern void wrap_igImFormatStringToTempBuffer(const char** out_buf,const char** out_buf_end,const char* fmt);
extern void wrap_igLabelText(const char* label,const char* fmt);
extern void wrap_igLogRenderedTextV(const ImVec2* ref_pos,const char* text);
extern void wrap_igLogText(const char* fmt);
extern void wrap_igRenderTextV(ImVec2 pos,const char* text,bool hide_text_after_hash);
extern void wrap_igRenderTextClippedV(const ImVec2 pos_min,const ImVec2 pos_max,const char* text,const ImVec2* text_size_if_known,const ImVec2 align,const ImRect* clip_rect);
extern void wrap_igRenderTextClippedExV(ImDrawList* draw_list,const ImVec2 pos_min,const ImVec2 pos_max,const char* text,const ImVec2* text_size_if_known,const ImVec2 align,const ImRect* clip_rect);
extern void wrap_igRenderTextEllipsis(ImDrawList* draw_list,const ImVec2 pos_min,const ImVec2 pos_max,float clip_max_x,float ellipsis_max_x,const char* text,const ImVec2* text_size_if_known);
extern void wrap_igRenderTextWrapped(ImVec2 pos,const char* text,float wrap_width);
extern void wrap_igSetItemTooltip(const char* fmt);
extern void wrap_igSetTooltip(const char* fmt);
extern void wrap_igText(const char* fmt);
extern void wrap_igTextColored(const ImVec4 col,const char* fmt);
extern void wrap_igTextDisabled(const char* fmt);
extern void wrap_igTextExV(const char* text,ImGuiTextFlags flags);
extern void wrap_igTextUnformattedV(const char* text);
extern void wrap_igTextWrapped(const char* fmt);
extern bool wrap_igTreeNodeEx_Ptr(const void* ptr_id,ImGuiTreeNodeFlags flags,const char* fmt);
extern bool wrap_igTreeNodeEx_StrStr(const char* str_id,ImGuiTreeNodeFlags flags,const char* fmt);
extern bool wrap_igTreeNode_Ptr(const void* ptr_id,const char* fmt);
extern bool wrap_igTreeNode_StrStr(const char* str_id,const char* fmt);
extern void wrap_ImColor_HSV(ImColor* pOut,float h,float s,float v);
extern void wrap_ImColor_SetHSV(ImColor* self,float h,float s,float v);
extern void wrap_ImDrawList_AddBezierCubic(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4,ImU32 col,float thickness);
extern void wrap_ImDrawList_AddBezierQuadratic(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,ImU32 col,float thickness);
extern void wrap_ImDrawList_AddCircle(ImDrawList* self,const ImVec2 center,float radius,ImU32 col);
extern void wrap_ImDrawList_AddCircleFilled(ImDrawList* self,const ImVec2 center,float radius,ImU32 col);
extern void wrap_ImDrawList_AddImage(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 p_min,const ImVec2 p_max);
extern void wrap_ImDrawList_AddImageQuad(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4);
extern void wrap_ImDrawList_AddImageRounded(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 p_min,const ImVec2 p_max,const ImVec2 uv_min,const ImVec2 uv_max,ImU32 col,float rounding);
extern void wrap_ImDrawList_AddLine(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,ImU32 col);
extern void wrap_ImDrawList_AddNgon(ImDrawList* self,const ImVec2 center,float radius,ImU32 col,int num_segments);
extern void wrap_ImDrawList_AddQuad(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4,ImU32 col);
extern void wrap_ImDrawList_AddRect(ImDrawList* self,const ImVec2 p_min,const ImVec2 p_max,ImU32 col);
extern void wrap_ImDrawList_AddRectFilled(ImDrawList* self,const ImVec2 p_min,const ImVec2 p_max,ImU32 col);
extern void wrap_ImDrawList_AddText_FontPtr(ImDrawList* self,const ImFont* font,float font_size,const ImVec2 pos,ImU32 col,const char* text_begin);
extern void wrap_ImDrawList_AddText_Vec2(ImDrawList* self,const ImVec2 pos,ImU32 col,const char* text_begin);
extern void wrap_ImDrawList_AddTriangle(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,ImU32 col);
extern void wrap_ImDrawList_PathArcTo(ImDrawList* self,const ImVec2 center,float radius,float a_min,float a_max);
extern void wrap_ImDrawList_PathBezierCubicCurveTo(ImDrawList* self,const ImVec2 p2,const ImVec2 p3,const ImVec2 p4);
extern void wrap_ImDrawList_PathBezierQuadraticCurveTo(ImDrawList* self,const ImVec2 p2,const ImVec2 p3);
extern void wrap_ImDrawList_PathRect(ImDrawList* self,const ImVec2 rect_min,const ImVec2 rect_max);
extern void wrap_ImDrawList_PathStroke(ImDrawList* self,ImU32 col);
extern void wrap_ImDrawList_PushClipRect(ImDrawList* self,const ImVec2 clip_rect_min,const ImVec2 clip_rect_max);
extern int wrap_ImFontAtlas_AddCustomRectFontGlyph(ImFontAtlas* self,ImFont* font,ImWchar id,int width,int height,float advance_x);
extern ImFont* wrap_ImFontAtlas_AddFontDefault(ImFontAtlas* self);
extern ImFont* wrap_ImFontAtlas_AddFontFromFileTTF(ImFontAtlas* self,const char* filename,float size_pixels);
extern ImFont* wrap_ImFontAtlas_AddFontFromMemoryCompressedBase85TTF(ImFontAtlas* self,const char* compressed_font_data_base85,float size_pixels);
extern ImFont* wrap_ImFontAtlas_AddFontFromMemoryCompressedTTF(ImFontAtlas* self,const void* compressed_font_data,int compressed_font_size,float size_pixels);
extern ImFont* wrap_ImFontAtlas_AddFontFromMemoryTTF(ImFontAtlas* self,void* font_data,int font_size,float size_pixels);
extern void wrap_ImFontAtlas_GetTexDataAsAlpha8(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height);
extern void wrap_ImFontAtlas_GetTexDataAsRGBA32(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height);
extern void wrap_ImFontGlyphRangesBuilder_AddText(ImFontGlyphRangesBuilder* self,const char* text);
extern void wrap_ImFont_AddRemapChar(ImFont* self,ImWchar dst,ImWchar src);
extern void wrap_ImFont_CalcTextSizeA(ImVec2* pOut,ImFont* self,float size,float max_width,float wrap_width,const char* text_begin);
extern void wrap_ImFont_RenderText(ImFont* self,ImDrawList* draw_list,float size,const ImVec2 pos,ImU32 col,const ImVec4 clip_rect,const char* text_begin);
extern void wrap_ImGuiIO_SetKeyEventNativeData(ImGuiIO* self,ImGuiKey key,int native_keycode,int native_scancode);
extern void wrap_ImGuiInputTextCallbackData_InsertChars(ImGuiInputTextCallbackData* self,int pos,const char* text);
extern void wrap_ImGuiListClipper_Begin(ImGuiListClipper* self,int items_count);
extern void wrap_ImGuiTextBuffer_Append(ImGuiTextBuffer* self,const char* str);
extern bool wrap_ImGuiTextFilter_Draw(ImGuiTextFilter* self);
extern bool wrap_ImGuiTextFilter_PassFilter(ImGuiTextFilter* self,const char* text);
extern ImGuiID wrap_ImGuiWindow_GetID_Str(ImGuiWindow* self,const char* str);
extern const ImGuiPayload* wrap_igAcceptDragDropPayload(const char* type);
extern bool wrap_igArrowButtonEx(const char* str_id,ImGuiDir dir,ImVec2 size_arg);
extern bool wrap_igBegin(const char* name);
extern bool wrap_igBeginChildFrame(ImGuiID id,const ImVec2 size);
extern bool wrap_igBeginChild_ID(ImGuiID id);
extern bool wrap_igBeginChild_Str(const char* str_id);
extern void wrap_igBeginColumns(const char* str_id,int count);
extern bool wrap_igBeginCombo(const char* label,const char* preview_value);
extern void wrap_igBeginDisabled();
extern bool wrap_igBeginDragDropSource();
extern bool wrap_igBeginListBox(const char* label);
extern bool wrap_igBeginMenu(const char* label);
extern bool wrap_igBeginMenuEx(const char* label,const char* icon);
extern bool wrap_igBeginPopup(const char* str_id);
extern bool wrap_igBeginPopupContextItem();
extern bool wrap_igBeginPopupContextVoid();
extern bool wrap_igBeginPopupContextWindow();
extern bool wrap_igBeginPopupModal(const char* name);
extern bool wrap_igBeginTabBar(const char* str_id);
extern bool wrap_igBeginTabItem(const char* label);
extern bool wrap_igBeginTable(const char* str_id,int column);
extern bool wrap_igBeginTableEx(const char* name,ImGuiID id,int columns_count);
extern bool wrap_igButton(const char* label);
extern bool wrap_igButtonBehavior(const ImRect bb,ImGuiID id,bool* out_hovered,bool* out_held);
extern bool wrap_igButtonEx(const char* label);
extern void wrap_igCalcTextSize(ImVec2* pOut,const char* text);
extern bool wrap_igCollapsingHeader_BoolPtr(const char* label,bool* p_visible);
extern bool wrap_igCollapsingHeader_TreeNodeFlags(const char* label);
extern bool wrap_igColorButton(const char* desc_id,const ImVec4 col);
extern bool wrap_igColorEdit3(const char* label,float col[3]);
extern bool wrap_igColorEdit4(const char* label,float col[4]);
extern bool wrap_igColorPicker3(const char* label,float col[3]);
extern bool wrap_igColorPicker4(const char* label,float col[4]);
extern void wrap_igColumns();
extern bool wrap_igCombo_Str(const char* label,int* current_item,const char* items_separated_by_zeros);
extern bool wrap_igCombo_Str_arr(const char* label,int* current_item,const char* const items[],int items_count);
extern ImGuiContext* wrap_igCreateContext();
extern void wrap_igDebugDrawCursorPos();
extern void wrap_igDebugDrawItemRect();
extern void wrap_igDebugDrawLineExtents();
extern void wrap_igDestroyContext();
extern ImGuiID wrap_igDockBuilderAddNode();
extern void wrap_igDockBuilderRemoveNodeDockedWindows(ImGuiID node_id);
extern void wrap_igDockContextProcessUndockWindow(ImGuiContext* ctx,ImGuiWindow* window);
extern ImGuiID wrap_igDockSpace(ImGuiID id);
extern ImGuiID wrap_igDockSpaceOverViewport();
extern bool wrap_igDragFloat(const char* label,float* v);
extern bool wrap_igDragFloat2(const char* label,float v[2]);
extern bool wrap_igDragFloat3(const char* label,float v[3]);
extern bool wrap_igDragFloat4(const char* label,float v[4]);
extern bool wrap_igDragFloatRange2(const char* label,float* v_current_min,float* v_current_max);
extern bool wrap_igDragInt(const char* label,int* v);
extern bool wrap_igDragInt2(const char* label,int v[2]);
extern bool wrap_igDragInt3(const char* label,int v[3]);
extern bool wrap_igDragInt4(const char* label,int v[4]);
extern bool wrap_igDragIntRange2(const char* label,int* v_current_min,int* v_current_max);
extern bool wrap_igDragScalar(const char* label,ImGuiDataType data_type,void* p_data);
extern bool wrap_igDragScalarN(const char* label,ImGuiDataType data_type,void* p_data,int components);
extern void wrap_igErrorCheckEndFrameRecover(ImGuiErrorLogCallback log_callback);
extern void wrap_igErrorCheckEndWindowRecover(ImGuiErrorLogCallback log_callback);
extern const char* wrap_igFindRenderedTextEnd(const char* text);
extern void wrap_igFocusWindow(ImGuiWindow* window);
extern ImU32 wrap_igGetColorU32_Col(ImGuiCol idx);
extern float wrap_igGetColumnOffset();
extern float wrap_igGetColumnWidth();
extern void wrap_igGetMouseDragDelta(ImVec2* pOut);
extern void* wrap_igImFileLoadToMemory(const char* filename,const char* mode);
extern ImGuiID wrap_igImHashData(const void* data,size_t data_size);
extern ImGuiID wrap_igImHashStr(const char* data);
extern int wrap_igImTextStrFromUtf8(ImWchar* out_buf,int out_buf_size,const char* in_text,const char* in_text_end);
extern void wrap_igImage(ImTextureID user_texture_id,const ImVec2 size);
extern bool wrap_igImageButton(const char* str_id,ImTextureID user_texture_id,const ImVec2 size);
extern bool wrap_igImageButtonEx(ImGuiID id,ImTextureID texture_id,const ImVec2 size,const ImVec2 uv0,const ImVec2 uv1,const ImVec4 bg_col,const ImVec4 tint_col);
extern void wrap_igIndent();
extern bool wrap_igInputDouble(const char* label,double* v);
extern bool wrap_igInputFloat(const char* label,float* v);
extern bool wrap_igInputFloat2(const char* label,float v[2]);
extern bool wrap_igInputFloat3(const char* label,float v[3]);
extern bool wrap_igInputFloat4(const char* label,float v[4]);
extern bool wrap_igInputInt(const char* label,int* v);
extern bool wrap_igInputInt2(const char* label,int v[2]);
extern bool wrap_igInputInt3(const char* label,int v[3]);
extern bool wrap_igInputInt4(const char* label,int v[4]);
extern bool wrap_igInputScalar(const char* label,ImGuiDataType data_type,void* p_data);
extern bool wrap_igInputScalarN(const char* label,ImGuiDataType data_type,void* p_data,int components);
extern bool wrap_igInputText(const char* label,char* buf,size_t buf_size);
extern bool wrap_igInputTextEx(const char* label,const char* hint,char* buf,int buf_size,const ImVec2 size_arg,ImGuiInputTextFlags flags);
extern bool wrap_igInputTextMultiline(const char* label,char* buf,size_t buf_size);
extern bool wrap_igInputTextWithHint(const char* label,const char* hint,char* buf,size_t buf_size);
extern bool wrap_igInvisibleButton(const char* str_id,const ImVec2 size);
extern bool wrap_igIsItemClicked();
extern bool wrap_igIsItemHovered();
extern bool wrap_igIsKeyPressedMap(ImGuiKey key);
extern bool wrap_igIsKeyPressed_Bool(ImGuiKey key);
extern bool wrap_igIsKeyPressed_ID(ImGuiKey key,ImGuiID owner_id);
extern bool wrap_igIsMouseClicked_Bool(ImGuiMouseButton button);
extern bool wrap_igIsMouseClicked_ID(ImGuiMouseButton button,ImGuiID owner_id);
extern bool wrap_igIsMouseDragPastThreshold(ImGuiMouseButton button);
extern bool wrap_igIsMouseDragging(ImGuiMouseButton button);
extern bool wrap_igIsMouseHoveringRect(const ImVec2 r_min,const ImVec2 r_max);
extern bool wrap_igIsMousePosValid();
extern bool wrap_igIsPopupOpen_Str(const char* str_id);
extern bool wrap_igIsWindowContentHoverable(ImGuiWindow* window);
extern bool wrap_igIsWindowFocused();
extern bool wrap_igIsWindowHovered();
extern bool wrap_igItemAdd(const ImRect bb,ImGuiID id);
extern void wrap_igItemSize_Rect(const ImRect bb);
extern void wrap_igItemSize_Vec2(const ImVec2 size);
extern bool wrap_igListBox_Str_arr(const char* label,int* current_item,const char* const items[],int items_count);
extern void wrap_igLoadIniSettingsFromMemory(const char* ini_data);
extern void wrap_igLogRenderedText(const ImVec2* ref_pos,const char* text);
extern void wrap_igLogToBuffer();
extern void wrap_igLogToClipboard();
extern void wrap_igLogToFile();
extern void wrap_igLogToTTY();
extern bool wrap_igMenuItemEx(const char* label,const char* icon);
extern bool wrap_igMenuItem_Bool(const char* label);
extern bool wrap_igMenuItem_BoolPtr(const char* label,const char* shortcut,bool* p_selected);
extern void wrap_igOpenPopupEx(ImGuiID id);
extern void wrap_igOpenPopupOnItemClick();
extern void wrap_igOpenPopup_ID(ImGuiID id);
extern void wrap_igOpenPopup_Str(const char* str_id);
extern void wrap_igPlotHistogram_FloatPtr(const char* label,const float* values,int values_count);
extern void wrap_igPlotLines_FloatPtr(const char* label,const float* values,int values_count);
extern void wrap_igPopStyleColor();
extern void wrap_igPopStyleVar();
extern void wrap_igProgressBar(float fraction);
extern void wrap_igPushTextWrapPos();
extern void wrap_igRenderArrow(ImDrawList* draw_list,ImVec2 pos,ImU32 col,ImGuiDir dir);
extern void wrap_igRenderColorRectWithAlphaCheckerboard(ImDrawList* draw_list,ImVec2 p_min,ImVec2 p_max,ImU32 fill_col,float grid_step,ImVec2 grid_off);
extern void wrap_igRenderFrame(ImVec2 p_min,ImVec2 p_max,ImU32 fill_col);
extern void wrap_igRenderFrameBorder(ImVec2 p_min,ImVec2 p_max);
extern void wrap_igRenderNavHighlight(const ImRect bb,ImGuiID id);
extern void wrap_igRenderPlatformWindowsDefault();
extern void wrap_igRenderText(ImVec2 pos,const char* text);
extern void wrap_igRenderTextClipped(const ImVec2 pos_min,const ImVec2 pos_max,const char* text,const ImVec2* text_size_if_known);
extern void wrap_igRenderTextClippedEx(ImDrawList* draw_list,const ImVec2 pos_min,const ImVec2 pos_max,const char* text,const ImVec2* text_size_if_known);
extern void wrap_igResetMouseDragDelta();
extern void wrap_igSameLine();
extern const char* wrap_igSaveIniSettingsToMemory();
extern void wrap_igScrollToItem();
extern void wrap_igScrollToRect(ImGuiWindow* window,const ImRect rect);
extern void wrap_igScrollToRectEx(ImVec2* pOut,ImGuiWindow* window,const ImRect rect);
extern bool wrap_igSelectable_Bool(const char* label);
extern bool wrap_igSelectable_BoolPtr(const char* label,bool* p_selected);
extern void wrap_igSeparatorEx(ImGuiSeparatorFlags flags);
extern bool wrap_igSetDragDropPayload(const char* type,const void* data,size_t sz);
extern void wrap_igSetItemKeyOwner(ImGuiKey key);
extern void wrap_igSetKeyOwner(ImGuiKey key,ImGuiID owner_id);
extern void wrap_igSetKeyOwnersForKeyChord(ImGuiKeyChord key,ImGuiID owner_id);
extern void wrap_igSetKeyboardFocusHere();
extern void wrap_igSetNextItemOpen(bool is_open);
extern void wrap_igSetNextWindowCollapsed(bool collapsed);
extern void wrap_igSetNextWindowDockID(ImGuiID dock_id);
extern void wrap_igSetNextWindowPos(const ImVec2 pos);
extern void wrap_igSetNextWindowSize(const ImVec2 size);
extern void wrap_igSetNextWindowSizeConstraints(const ImVec2 size_min,const ImVec2 size_max);
extern void wrap_igSetScrollFromPosX_Float(float local_x);
extern void wrap_igSetScrollFromPosY_Float(float local_y);
extern void wrap_igSetScrollHereX();
extern void wrap_igSetScrollHereY();
extern bool wrap_igSetShortcutRouting(ImGuiKeyChord key_chord);
extern void wrap_igSetWindowCollapsed_Bool(bool collapsed);
extern void wrap_igSetWindowCollapsed_Str(const char* name,bool collapsed);
extern void wrap_igSetWindowCollapsed_WindowPtr(ImGuiWindow* window,bool collapsed);
extern void wrap_igSetWindowPos_Str(const char* name,const ImVec2 pos);
extern void wrap_igSetWindowPos_Vec2(const ImVec2 pos);
extern void wrap_igSetWindowPos_WindowPtr(ImGuiWindow* window,const ImVec2 pos);
extern void wrap_igSetWindowSize_Str(const char* name,const ImVec2 size);
extern void wrap_igSetWindowSize_Vec2(const ImVec2 size);
extern void wrap_igSetWindowSize_WindowPtr(ImGuiWindow* window,const ImVec2 size);
extern bool wrap_igShortcut(ImGuiKeyChord key_chord);
extern void wrap_igShowAboutWindow();
extern void wrap_igShowDebugLogWindow();
extern void wrap_igShowDemoWindow();
extern void wrap_igShowMetricsWindow();
extern void wrap_igShowStackToolWindow();
extern void wrap_igShowStyleEditor();
extern bool wrap_igSliderAngle(const char* label,float* v_rad);
extern bool wrap_igSliderFloat(const char* label,float* v,float v_min,float v_max);
extern bool wrap_igSliderFloat2(const char* label,float v[2],float v_min,float v_max);
extern bool wrap_igSliderFloat3(const char* label,float v[3],float v_min,float v_max);
extern bool wrap_igSliderFloat4(const char* label,float v[4],float v_min,float v_max);
extern bool wrap_igSliderInt(const char* label,int* v,int v_min,int v_max);
extern bool wrap_igSliderInt2(const char* label,int v[2],int v_min,int v_max);
extern bool wrap_igSliderInt3(const char* label,int v[3],int v_min,int v_max);
extern bool wrap_igSliderInt4(const char* label,int v[4],int v_min,int v_max);
extern bool wrap_igSliderScalar(const char* label,ImGuiDataType data_type,void* p_data,const void* p_min,const void* p_max);
extern bool wrap_igSliderScalarN(const char* label,ImGuiDataType data_type,void* p_data,int components,const void* p_min,const void* p_max);
extern bool wrap_igSplitterBehavior(const ImRect bb,ImGuiID id,ImGuiAxis axis,float* size1,float* size2,float min_size1,float min_size2);
extern void wrap_igStyleColorsClassic();
extern void wrap_igStyleColorsDark();
extern void wrap_igStyleColorsLight();
extern bool wrap_igTabItemButton(const char* label);
extern ImGuiTableColumnFlags wrap_igTableGetColumnFlags();
extern const char* wrap_igTableGetColumnName_Int();
extern ImGuiID wrap_igTableGetColumnResizeID(ImGuiTable* table,int column_n);
extern void wrap_igTableNextRow();
extern void wrap_igTableOpenContextMenu();
extern void wrap_igTableSetBgColor(ImGuiTableBgTarget target,ImU32 color);
extern void wrap_igTableSetupColumn(const char* label);
extern bool wrap_igTempInputScalar(const ImRect bb,ImGuiID id,const char* label,ImGuiDataType data_type,void* p_data,const char* format);
extern void wrap_igTextEx(const char* text);
extern void wrap_igTextUnformatted(const char* text);
extern bool wrap_igTreeNodeBehavior(ImGuiID id,ImGuiTreeNodeFlags flags,const char* label);
extern bool wrap_igTreeNodeEx_Str(const char* label);
extern void wrap_igUnindent();
extern bool wrap_igVSliderFloat(const char* label,const ImVec2 size,float* v,float v_min,float v_max);
extern bool wrap_igVSliderInt(const char* label,const ImVec2 size,int* v,int v_min,int v_max);
extern bool wrap_igVSliderScalar(const char* label,const ImVec2 size,ImGuiDataType data_type,void* p_data,const void* p_min,const void* p_max);
extern void wrap_igValue_Float(const char* prefix,float v);

#ifdef __cplusplus
}
#endif
