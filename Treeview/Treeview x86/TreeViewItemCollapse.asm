.486                        ; force 32 bit code
.model flat, stdcall        ; memory model & calling convention
option casemap :none        ; case sensitive

include windows.inc

include user32.inc
includelib user32.lib

include TreeView.inc

.code

;**************************************************************************
; 
;**************************************************************************
TreeViewItemCollapse PROC PUBLIC hTreeview:DWORD, hItem:DWORD
    Invoke SendMessage, hTreeview, TVM_EXPAND, TVE_COLLAPSE, hItem
    ret
TreeViewItemCollapse endp

end

