#pragma once
#include <winrt/Windows.UI.Composition.Desktop.h>
#include <windows.ui.composition.interop.h>
#include <DispatcherQueue.h>
class CompositionHost
{
public:
    ~CompositionHost();
    static CompositionHost* GetInstance();
    winrt::Windows::UI::Composition::Compositor m_compositor{ nullptr };
    winrt::Windows::System::DispatcherQueueController m_dispatcherQueueController{ nullptr };
    winrt::Windows::UI::Composition::Desktop::DesktopWindowTarget m_target{ nullptr };
    void CreateDesktopWindowTarget(HWND window);
    void CreateCompositionRoot();
    void EnsureDispatcherQueue();
    void Initialize(HWND hwnd);
    void AddElement(float size, float x, float y);
private:
    CompositionHost();
};

