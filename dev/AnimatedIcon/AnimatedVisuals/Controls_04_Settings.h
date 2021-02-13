﻿#pragma once
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           7.0.0-build.104+geebe28e7e9
//       
//       Command:
//           LottieGen -Language Cppwinrt -WinUIVersion 2.4 -InputFile Controls_04_Settings.json
//       
//       Input file:
//           Controls_04_Settings.json (31178 bytes created 12:28-08:00 Feb 8 2021)
//       
//       LottieGen source:
//           http://aka.ms/Lottie
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "common.h"
#include "AnimatedVisuals\Controls_04_Settings.g.h"

// Name:        Controls_04_Settings
// Frame rate:  60 fps
// Frame count: 55
// Duration:    916.7 mS
// ____________________________________________________________________________________________
// |           Marker           |           Constant           | Frame |  mS   |   Progress   |
// |____________________________|______________________________|_______|_______|______________|
// | NormalToPointerOver_Start  | M_NormalToPointerOver_Start  |     0 |   0.0 | 0.0F         |
// | NormalToPointerOver_End    | M_NormalToPointerOver_End    |     9 | 150.2 | 0.163818181F |
// | NormalToPressed_Start      | M_NormalToPressed_Start      |    10 | 166.8 | 0.181999996F |
// | NormalToPressed_End        | M_NormalToPressed_End        |    14 | 233.5 | 0.254727274F |
// | PointerOverToNormal_Start  | M_PointerOverToNormal_Start  |    15 | 250.2 | 0.272909105F |
// | PointerOverToNormal_End    | M_PointerOverToNormal_End    |    24 | 400.2 | 0.436545461F |
// | PointerOverToPressed_Start | M_PointerOverToPressed_Start |    25 | 416.8 | 0.454727262F |
// | PointerOverToPressed_End   | M_PointerOverToPressed_End   |    29 | 483.5 | 0.527454555F |
// | PressedToNormal_Start      | M_PressedToNormal_Start      |    30 | 500.2 | 0.545636356F |
// | PressedToNormal_End        | M_PressedToNormal_End        |    49 | 816.8 | 0.89109093F  |
// | PressedToPointerOver_Start | M_PressedToPointerOver_Start |    50 | 833.5 | 0.90927273F  |
// | PressedToPointerOver_End   | M_PressedToPointerOver_End   |    54 | 900.2 | 0.981999993F |
// --------------------------------------------------------------------------------------------
// _______________________________________________________
// | Theme property |  Accessor  | Type  | Default value |
// |________________|____________|_______|_______________|
// | Foreground     | Foreground | Color |   #FF131718   |
// -------------------------------------------------------
class Controls_04_Settings
    : public winrt::implementation::Controls_04_SettingsT<Controls_04_Settings>
{
    winrt::Windows::UI::Composition::CompositionPropertySet _themeProperties{ nullptr };
    winrt::Windows::UI::Color _themeForeground{ 0xFF, 0x13, 0x17, 0x18 };
    winrt::Windows::UI::Composition::CompositionPropertySet EnsureThemeProperties(winrt::Windows::UI::Composition::Compositor compositor);

    static winrt::Windows::Foundation::Numerics::float4 ColorAsVector4(winrt::Windows::UI::Color color);
public:
    // Animation duration: 0.917 seconds.
    static constexpr int64_t c_durationTicks{ 9166666L };

    // Marker: NormalToPointerOver_Start.
    static constexpr float M_NormalToPointerOver_Start{ 0.0F };

    // Marker: NormalToPointerOver_End.
    static constexpr float M_NormalToPointerOver_End{ 0.163818181F };

    // Marker: NormalToPressed_Start.
    static constexpr float M_NormalToPressed_Start{ 0.181999996F };

    // Marker: NormalToPressed_End.
    static constexpr float M_NormalToPressed_End{ 0.254727274F };

    // Marker: PointerOverToNormal_Start.
    static constexpr float M_PointerOverToNormal_Start{ 0.272909105F };

    // Marker: PointerOverToNormal_End.
    static constexpr float M_PointerOverToNormal_End{ 0.436545461F };

    // Marker: PointerOverToPressed_Start.
    static constexpr float M_PointerOverToPressed_Start{ 0.454727262F };

    // Marker: PointerOverToPressed_End.
    static constexpr float M_PointerOverToPressed_End{ 0.527454555F };

    // Marker: PressedToNormal_Start.
    static constexpr float M_PressedToNormal_Start{ 0.545636356F };

    // Marker: PressedToNormal_End.
    static constexpr float M_PressedToNormal_End{ 0.89109093F };

    // Marker: PressedToPointerOver_Start.
    static constexpr float M_PressedToPointerOver_Start{ 0.90927273F };

    // Marker: PressedToPointerOver_End.
    static constexpr float M_PressedToPointerOver_End{ 0.981999993F };

    // Theme property: Foreground.
    static inline const winrt::Windows::UI::Color c_themeForeground{ 0xFF, 0x13, 0x17, 0x18 };


    winrt::Windows::UI::Color Foreground();
    void Foreground(winrt::Windows::UI::Color value);

    winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual TryCreateAnimatedVisual(
        winrt::Windows::UI::Composition::Compositor const& compositor);

    winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual TryCreateAnimatedVisual(
        winrt::Windows::UI::Composition::Compositor const& compositor,
        winrt::Windows::Foundation::IInspectable& diagnostics);

    // Gets the number of frames in the animation.
    double FrameCount();

    // Gets the framerate of the animation.
    double Framerate();

    // Gets the duration of the animation.
    winrt::Windows::Foundation::TimeSpan Duration();

    // Converts a zero-based frame number to the corresponding progress value denoting the
    // start of the frame.
    double FrameToProgress(double frameNumber);

    // Returns a map from marker names to corresponding progress values.
    winrt::Windows::Foundation::Collections::IMapView<hstring, double> Markers();

    // Sets the color property with the given name, or does nothing if no such property
    // exists.
    void SetColorProperty(hstring const& propertyName, winrt::Windows::UI::Color value);

    // Sets the scalar property with the given name, or does nothing if no such property
    // exists.
    void SetScalarProperty(hstring const& propertyName, double value);
};
