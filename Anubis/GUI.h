#pragma once

#include <d3d9.h>
#include <stdbool.h>

#ifdef __cplusplus  
extern "C"
{
    bool GUI_handleInput(HWND, UINT, WPARAM, LPARAM) noexcept;
    void GUI_init(IDirect3DDevice9*) noexcept;
    void GUI_render() noexcept;
    extern bool isGuiOpen;
}
#else
    bool GUI_handleInput(HWND, UINT, WPARAM, LPARAM);
    void GUI_init(IDirect3DDevice9*);
    void GUI_render(void);
    extern bool isGuiOpen;
#endif