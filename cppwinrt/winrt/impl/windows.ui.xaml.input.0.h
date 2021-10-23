// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Input_0_H
#define WINRT_Windows_UI_Xaml_Input_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Input
{
    enum class PointerDeviceType : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Point;
    struct Rect;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    enum class VirtualKey : int32_t;
    enum class VirtualKeyModifiers : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    struct CorePhysicalKeyStatus;
}
WINRT_EXPORT namespace winrt::Windows::UI::Input
{
    enum class HoldingState : int32_t;
    struct ManipulationDelta;
    struct ManipulationVelocities;
    struct PointerPoint;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct DependencyObject;
    struct DependencyProperty;
    enum class FocusState : int32_t;
    struct UIElement;
    struct XamlRoot;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls
{
    struct IconSource;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Input
{
    enum class FocusInputDeviceKind : int32_t
    {
        None = 0,
        Mouse = 1,
        Touch = 2,
        Pen = 3,
        Keyboard = 4,
        GameController = 5,
    };
    enum class FocusNavigationDirection : int32_t
    {
        Next = 0,
        Previous = 1,
        Up = 2,
        Down = 3,
        Left = 4,
        Right = 5,
        None = 6,
    };
    enum class InputScopeNameValue : int32_t
    {
        Default = 0,
        Url = 1,
        EmailSmtpAddress = 5,
        PersonalFullName = 7,
        CurrencyAmountAndSymbol = 20,
        CurrencyAmount = 21,
        DateMonthNumber = 23,
        DateDayNumber = 24,
        DateYear = 25,
        Digits = 28,
        Number = 29,
        Password = 31,
        TelephoneNumber = 32,
        TelephoneCountryCode = 33,
        TelephoneAreaCode = 34,
        TelephoneLocalNumber = 35,
        TimeHour = 37,
        TimeMinutesOrSeconds = 38,
        NumberFullWidth = 39,
        AlphanumericHalfWidth = 40,
        AlphanumericFullWidth = 41,
        Hiragana = 44,
        KatakanaHalfWidth = 45,
        KatakanaFullWidth = 46,
        Hanja = 47,
        HangulHalfWidth = 48,
        HangulFullWidth = 49,
        Search = 50,
        Formula = 51,
        SearchIncremental = 52,
        ChineseHalfWidth = 53,
        ChineseFullWidth = 54,
        NativeScript = 55,
        Text = 57,
        Chat = 58,
        NameOrPhoneNumber = 59,
        EmailNameOrAddress = 60,
        Private = 61,
        Maps = 62,
        NumericPassword = 63,
        NumericPin = 64,
        AlphanumericPin = 65,
        FormulaNumber = 67,
        ChatWithoutEmoji = 68,
    };
    enum class KeyTipPlacementMode : int32_t
    {
        Auto = 0,
        Bottom = 1,
        Top = 2,
        Left = 3,
        Right = 4,
        Center = 5,
        Hidden = 6,
    };
    enum class KeyboardAcceleratorPlacementMode : int32_t
    {
        Auto = 0,
        Hidden = 1,
    };
    enum class KeyboardNavigationMode : int32_t
    {
        Local = 0,
        Cycle = 1,
        Once = 2,
    };
    enum class ManipulationModes : uint32_t
    {
        None = 0,
        TranslateX = 0x1,
        TranslateY = 0x2,
        TranslateRailsX = 0x4,
        TranslateRailsY = 0x8,
        Rotate = 0x10,
        Scale = 0x20,
        TranslateInertia = 0x40,
        RotateInertia = 0x80,
        ScaleInertia = 0x100,
        All = 0xffff,
        System = 0x10000,
    };
    enum class StandardUICommandKind : int32_t
    {
        None = 0,
        Cut = 1,
        Copy = 2,
        Paste = 3,
        SelectAll = 4,
        Delete = 5,
        Share = 6,
        Save = 7,
        Open = 8,
        Close = 9,
        Pause = 10,
        Play = 11,
        Stop = 12,
        Forward = 13,
        Backward = 14,
        Undo = 15,
        Redo = 16,
    };
    enum class XYFocusKeyboardNavigationMode : int32_t
    {
        Auto = 0,
        Enabled = 1,
        Disabled = 2,
    };
    enum class XYFocusNavigationStrategy : int32_t
    {
        Auto = 0,
        Projection = 1,
        NavigationDirectionDistance = 2,
        RectilinearDistance = 3,
    };
    enum class XYFocusNavigationStrategyOverride : int32_t
    {
        None = 0,
        Auto = 1,
        Projection = 2,
        NavigationDirectionDistance = 3,
        RectilinearDistance = 4,
    };
    struct IAccessKeyDisplayDismissedEventArgs;
    struct IAccessKeyDisplayRequestedEventArgs;
    struct IAccessKeyInvokedEventArgs;
    struct IAccessKeyManager;
    struct IAccessKeyManagerStatics;
    struct IAccessKeyManagerStatics2;
    struct ICanExecuteRequestedEventArgs;
    struct ICharacterReceivedRoutedEventArgs;
    struct ICommand;
    struct IContextRequestedEventArgs;
    struct IDoubleTappedRoutedEventArgs;
    struct IExecuteRequestedEventArgs;
    struct IFindNextElementOptions;
    struct IFocusManager;
    struct IFocusManagerGotFocusEventArgs;
    struct IFocusManagerLostFocusEventArgs;
    struct IFocusManagerStatics;
    struct IFocusManagerStatics2;
    struct IFocusManagerStatics3;
    struct IFocusManagerStatics4;
    struct IFocusManagerStatics5;
    struct IFocusManagerStatics6;
    struct IFocusManagerStatics7;
    struct IFocusMovementResult;
    struct IGettingFocusEventArgs;
    struct IGettingFocusEventArgs2;
    struct IGettingFocusEventArgs3;
    struct IHoldingRoutedEventArgs;
    struct IInertiaExpansionBehavior;
    struct IInertiaRotationBehavior;
    struct IInertiaTranslationBehavior;
    struct IInputScope;
    struct IInputScopeName;
    struct IInputScopeNameFactory;
    struct IKeyRoutedEventArgs;
    struct IKeyRoutedEventArgs2;
    struct IKeyRoutedEventArgs3;
    struct IKeyboardAccelerator;
    struct IKeyboardAcceleratorFactory;
    struct IKeyboardAcceleratorInvokedEventArgs;
    struct IKeyboardAcceleratorInvokedEventArgs2;
    struct IKeyboardAcceleratorStatics;
    struct ILosingFocusEventArgs;
    struct ILosingFocusEventArgs2;
    struct ILosingFocusEventArgs3;
    struct IManipulationCompletedRoutedEventArgs;
    struct IManipulationDeltaRoutedEventArgs;
    struct IManipulationInertiaStartingRoutedEventArgs;
    struct IManipulationPivot;
    struct IManipulationPivotFactory;
    struct IManipulationStartedRoutedEventArgs;
    struct IManipulationStartedRoutedEventArgsFactory;
    struct IManipulationStartingRoutedEventArgs;
    struct INoFocusCandidateFoundEventArgs;
    struct IPointer;
    struct IPointerRoutedEventArgs;
    struct IPointerRoutedEventArgs2;
    struct IProcessKeyboardAcceleratorEventArgs;
    struct IRightTappedRoutedEventArgs;
    struct IStandardUICommand;
    struct IStandardUICommand2;
    struct IStandardUICommandFactory;
    struct IStandardUICommandStatics;
    struct ITappedRoutedEventArgs;
    struct IXamlUICommand;
    struct IXamlUICommandFactory;
    struct IXamlUICommandStatics;
    struct AccessKeyDisplayDismissedEventArgs;
    struct AccessKeyDisplayRequestedEventArgs;
    struct AccessKeyInvokedEventArgs;
    struct AccessKeyManager;
    struct CanExecuteRequestedEventArgs;
    struct CharacterReceivedRoutedEventArgs;
    struct ContextRequestedEventArgs;
    struct DoubleTappedRoutedEventArgs;
    struct ExecuteRequestedEventArgs;
    struct FindNextElementOptions;
    struct FocusManager;
    struct FocusManagerGotFocusEventArgs;
    struct FocusManagerLostFocusEventArgs;
    struct FocusMovementResult;
    struct GettingFocusEventArgs;
    struct HoldingRoutedEventArgs;
    struct InertiaExpansionBehavior;
    struct InertiaRotationBehavior;
    struct InertiaTranslationBehavior;
    struct InputScope;
    struct InputScopeName;
    struct KeyRoutedEventArgs;
    struct KeyboardAccelerator;
    struct KeyboardAcceleratorInvokedEventArgs;
    struct LosingFocusEventArgs;
    struct ManipulationCompletedRoutedEventArgs;
    struct ManipulationDeltaRoutedEventArgs;
    struct ManipulationInertiaStartingRoutedEventArgs;
    struct ManipulationPivot;
    struct ManipulationStartedRoutedEventArgs;
    struct ManipulationStartingRoutedEventArgs;
    struct NoFocusCandidateFoundEventArgs;
    struct Pointer;
    struct PointerRoutedEventArgs;
    struct ProcessKeyboardAcceleratorEventArgs;
    struct RightTappedRoutedEventArgs;
    struct StandardUICommand;
    struct TappedRoutedEventArgs;
    struct XamlUICommand;
    struct DoubleTappedEventHandler;
    struct HoldingEventHandler;
    struct KeyEventHandler;
    struct ManipulationCompletedEventHandler;
    struct ManipulationDeltaEventHandler;
    struct ManipulationInertiaStartingEventHandler;
    struct ManipulationStartedEventHandler;
    struct ManipulationStartingEventHandler;
    struct PointerEventHandler;
    struct RightTappedEventHandler;
    struct TappedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IAccessKeyManager>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::ICanExecuteRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::ICommand>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IContextRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IExecuteRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFindNextElementOptions>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManager>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManagerGotFocusEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManagerLostFocusEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics5>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics6>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics7>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IFocusMovementResult>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IGettingFocusEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IGettingFocusEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IGettingFocusEventArgs3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IInertiaExpansionBehavior>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IInertiaRotationBehavior>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IInertiaTranslationBehavior>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IInputScope>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IInputScopeName>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IInputScopeNameFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IKeyRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IKeyboardAccelerator>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::ILosingFocusEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::ILosingFocusEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::ILosingFocusEventArgs3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IManipulationPivot>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IManipulationPivotFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IPointer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IPointerRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IPointerRoutedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IStandardUICommand>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IStandardUICommand2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IStandardUICommandFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IStandardUICommandStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::ITappedRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IXamlUICommand>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IXamlUICommandFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::IXamlUICommandStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::AccessKeyManager>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::CanExecuteRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::ContextRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::ExecuteRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::FindNextElementOptions>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::FocusManager>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::FocusManagerGotFocusEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::FocusManagerLostFocusEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::FocusMovementResult>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::GettingFocusEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::HoldingRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::InertiaExpansionBehavior>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::InertiaRotationBehavior>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::InertiaTranslationBehavior>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::InputScope>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::InputScopeName>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::KeyRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::KeyboardAccelerator>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::LosingFocusEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationPivot>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::Pointer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::PointerRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::StandardUICommand>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::TappedRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::XamlUICommand>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Input::FocusInputDeviceKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::FocusNavigationDirection>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::InputScopeNameValue>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::KeyTipPlacementMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::KeyboardNavigationMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationModes>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::StandardUICommandKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Input::DoubleTappedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::HoldingEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::KeyEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationStartedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::ManipulationStartingEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::PointerEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::RightTappedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Input::TappedEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> = L"Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> = L"Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> = L"Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::AccessKeyManager> = L"Windows.UI.Xaml.Input.AccessKeyManager";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::CanExecuteRequestedEventArgs> = L"Windows.UI.Xaml.Input.CanExecuteRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs> = L"Windows.UI.Xaml.Input.CharacterReceivedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ContextRequestedEventArgs> = L"Windows.UI.Xaml.Input.ContextRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs> = L"Windows.UI.Xaml.Input.DoubleTappedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ExecuteRequestedEventArgs> = L"Windows.UI.Xaml.Input.ExecuteRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::FindNextElementOptions> = L"Windows.UI.Xaml.Input.FindNextElementOptions";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::FocusManager> = L"Windows.UI.Xaml.Input.FocusManager";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::FocusManagerGotFocusEventArgs> = L"Windows.UI.Xaml.Input.FocusManagerGotFocusEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::FocusManagerLostFocusEventArgs> = L"Windows.UI.Xaml.Input.FocusManagerLostFocusEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::FocusMovementResult> = L"Windows.UI.Xaml.Input.FocusMovementResult";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::GettingFocusEventArgs> = L"Windows.UI.Xaml.Input.GettingFocusEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::HoldingRoutedEventArgs> = L"Windows.UI.Xaml.Input.HoldingRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::InertiaExpansionBehavior> = L"Windows.UI.Xaml.Input.InertiaExpansionBehavior";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::InertiaRotationBehavior> = L"Windows.UI.Xaml.Input.InertiaRotationBehavior";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::InertiaTranslationBehavior> = L"Windows.UI.Xaml.Input.InertiaTranslationBehavior";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::InputScope> = L"Windows.UI.Xaml.Input.InputScope";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::InputScopeName> = L"Windows.UI.Xaml.Input.InputScopeName";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::KeyRoutedEventArgs> = L"Windows.UI.Xaml.Input.KeyRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::KeyboardAccelerator> = L"Windows.UI.Xaml.Input.KeyboardAccelerator";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs> = L"Windows.UI.Xaml.Input.KeyboardAcceleratorInvokedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::LosingFocusEventArgs> = L"Windows.UI.Xaml.Input.LosingFocusEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs> = L"Windows.UI.Xaml.Input.ManipulationCompletedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs> = L"Windows.UI.Xaml.Input.ManipulationDeltaRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs> = L"Windows.UI.Xaml.Input.ManipulationInertiaStartingRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationPivot> = L"Windows.UI.Xaml.Input.ManipulationPivot";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs> = L"Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs> = L"Windows.UI.Xaml.Input.ManipulationStartingRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> = L"Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::Pointer> = L"Windows.UI.Xaml.Input.Pointer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::PointerRoutedEventArgs> = L"Windows.UI.Xaml.Input.PointerRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs> = L"Windows.UI.Xaml.Input.ProcessKeyboardAcceleratorEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::RightTappedRoutedEventArgs> = L"Windows.UI.Xaml.Input.RightTappedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::StandardUICommand> = L"Windows.UI.Xaml.Input.StandardUICommand";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::TappedRoutedEventArgs> = L"Windows.UI.Xaml.Input.TappedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::XamlUICommand> = L"Windows.UI.Xaml.Input.XamlUICommand";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::FocusInputDeviceKind> = L"Windows.UI.Xaml.Input.FocusInputDeviceKind";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::FocusNavigationDirection> = L"Windows.UI.Xaml.Input.FocusNavigationDirection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::InputScopeNameValue> = L"Windows.UI.Xaml.Input.InputScopeNameValue";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::KeyTipPlacementMode> = L"Windows.UI.Xaml.Input.KeyTipPlacementMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::KeyboardAcceleratorPlacementMode> = L"Windows.UI.Xaml.Input.KeyboardAcceleratorPlacementMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::KeyboardNavigationMode> = L"Windows.UI.Xaml.Input.KeyboardNavigationMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationModes> = L"Windows.UI.Xaml.Input.ManipulationModes";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::StandardUICommandKind> = L"Windows.UI.Xaml.Input.StandardUICommandKind";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode> = L"Windows.UI.Xaml.Input.XYFocusKeyboardNavigationMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::XYFocusNavigationStrategy> = L"Windows.UI.Xaml.Input.XYFocusNavigationStrategy";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride> = L"Windows.UI.Xaml.Input.XYFocusNavigationStrategyOverride";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs> = L"Windows.UI.Xaml.Input.IAccessKeyDisplayDismissedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs> = L"Windows.UI.Xaml.Input.IAccessKeyDisplayRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs> = L"Windows.UI.Xaml.Input.IAccessKeyInvokedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IAccessKeyManager> = L"Windows.UI.Xaml.Input.IAccessKeyManager";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IAccessKeyManagerStatics> = L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2> = L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ICanExecuteRequestedEventArgs> = L"Windows.UI.Xaml.Input.ICanExecuteRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs> = L"Windows.UI.Xaml.Input.ICharacterReceivedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ICommand> = L"Windows.UI.Xaml.Input.ICommand";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IContextRequestedEventArgs> = L"Windows.UI.Xaml.Input.IContextRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs> = L"Windows.UI.Xaml.Input.IDoubleTappedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IExecuteRequestedEventArgs> = L"Windows.UI.Xaml.Input.IExecuteRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFindNextElementOptions> = L"Windows.UI.Xaml.Input.IFindNextElementOptions";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManager> = L"Windows.UI.Xaml.Input.IFocusManager";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManagerGotFocusEventArgs> = L"Windows.UI.Xaml.Input.IFocusManagerGotFocusEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManagerLostFocusEventArgs> = L"Windows.UI.Xaml.Input.IFocusManagerLostFocusEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManagerStatics> = L"Windows.UI.Xaml.Input.IFocusManagerStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManagerStatics2> = L"Windows.UI.Xaml.Input.IFocusManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManagerStatics3> = L"Windows.UI.Xaml.Input.IFocusManagerStatics3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManagerStatics4> = L"Windows.UI.Xaml.Input.IFocusManagerStatics4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManagerStatics5> = L"Windows.UI.Xaml.Input.IFocusManagerStatics5";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManagerStatics6> = L"Windows.UI.Xaml.Input.IFocusManagerStatics6";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusManagerStatics7> = L"Windows.UI.Xaml.Input.IFocusManagerStatics7";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IFocusMovementResult> = L"Windows.UI.Xaml.Input.IFocusMovementResult";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IGettingFocusEventArgs> = L"Windows.UI.Xaml.Input.IGettingFocusEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IGettingFocusEventArgs2> = L"Windows.UI.Xaml.Input.IGettingFocusEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IGettingFocusEventArgs3> = L"Windows.UI.Xaml.Input.IGettingFocusEventArgs3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs> = L"Windows.UI.Xaml.Input.IHoldingRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IInertiaExpansionBehavior> = L"Windows.UI.Xaml.Input.IInertiaExpansionBehavior";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IInertiaRotationBehavior> = L"Windows.UI.Xaml.Input.IInertiaRotationBehavior";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IInertiaTranslationBehavior> = L"Windows.UI.Xaml.Input.IInertiaTranslationBehavior";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IInputScope> = L"Windows.UI.Xaml.Input.IInputScope";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IInputScopeName> = L"Windows.UI.Xaml.Input.IInputScopeName";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IInputScopeNameFactory> = L"Windows.UI.Xaml.Input.IInputScopeNameFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IKeyRoutedEventArgs> = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2> = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3> = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IKeyboardAccelerator> = L"Windows.UI.Xaml.Input.IKeyboardAccelerator";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory> = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs> = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2> = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics> = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ILosingFocusEventArgs> = L"Windows.UI.Xaml.Input.ILosingFocusEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ILosingFocusEventArgs2> = L"Windows.UI.Xaml.Input.ILosingFocusEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ILosingFocusEventArgs3> = L"Windows.UI.Xaml.Input.ILosingFocusEventArgs3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs> = L"Windows.UI.Xaml.Input.IManipulationCompletedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs> = L"Windows.UI.Xaml.Input.IManipulationDeltaRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs> = L"Windows.UI.Xaml.Input.IManipulationInertiaStartingRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IManipulationPivot> = L"Windows.UI.Xaml.Input.IManipulationPivot";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IManipulationPivotFactory> = L"Windows.UI.Xaml.Input.IManipulationPivotFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs> = L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory> = L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgsFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs> = L"Windows.UI.Xaml.Input.IManipulationStartingRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs> = L"Windows.UI.Xaml.Input.INoFocusCandidateFoundEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IPointer> = L"Windows.UI.Xaml.Input.IPointer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IPointerRoutedEventArgs> = L"Windows.UI.Xaml.Input.IPointerRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IPointerRoutedEventArgs2> = L"Windows.UI.Xaml.Input.IPointerRoutedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs> = L"Windows.UI.Xaml.Input.IProcessKeyboardAcceleratorEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs> = L"Windows.UI.Xaml.Input.IRightTappedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IStandardUICommand> = L"Windows.UI.Xaml.Input.IStandardUICommand";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IStandardUICommand2> = L"Windows.UI.Xaml.Input.IStandardUICommand2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IStandardUICommandFactory> = L"Windows.UI.Xaml.Input.IStandardUICommandFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IStandardUICommandStatics> = L"Windows.UI.Xaml.Input.IStandardUICommandStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ITappedRoutedEventArgs> = L"Windows.UI.Xaml.Input.ITappedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IXamlUICommand> = L"Windows.UI.Xaml.Input.IXamlUICommand";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IXamlUICommandFactory> = L"Windows.UI.Xaml.Input.IXamlUICommandFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::IXamlUICommandStatics> = L"Windows.UI.Xaml.Input.IXamlUICommandStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::DoubleTappedEventHandler> = L"Windows.UI.Xaml.Input.DoubleTappedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::HoldingEventHandler> = L"Windows.UI.Xaml.Input.HoldingEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::KeyEventHandler> = L"Windows.UI.Xaml.Input.KeyEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler> = L"Windows.UI.Xaml.Input.ManipulationCompletedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler> = L"Windows.UI.Xaml.Input.ManipulationDeltaEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler> = L"Windows.UI.Xaml.Input.ManipulationInertiaStartingEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationStartedEventHandler> = L"Windows.UI.Xaml.Input.ManipulationStartedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::ManipulationStartingEventHandler> = L"Windows.UI.Xaml.Input.ManipulationStartingEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::PointerEventHandler> = L"Windows.UI.Xaml.Input.PointerEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::RightTappedEventHandler> = L"Windows.UI.Xaml.Input.RightTappedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Input::TappedEventHandler> = L"Windows.UI.Xaml.Input.TappedEventHandler";
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>{ 0x8A610DC6,0xD72D,0x4CA8,{ 0x9F,0x66,0x55,0x6F,0x35,0xB5,0x13,0xDA } }; // 8A610DC6-D72D-4CA8-9F66-556F35B513DA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>{ 0x0C079E55,0x13FE,0x4D03,{ 0xA6,0x1D,0xE1,0x2F,0x06,0x56,0x72,0x86 } }; // 0C079E55-13FE-4D03-A61D-E12F06567286
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>{ 0xCFE9CD97,0xC718,0x4091,{ 0xB7,0xDD,0xAD,0xF1,0xC0,0x72,0xB1,0xE1 } }; // CFE9CD97-C718-4091-B7DD-ADF1C072B1E1
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IAccessKeyManager>{ 0xECC973B0,0x2EE9,0x4B1C,{ 0x98,0xD7,0x6E,0x0E,0x81,0x6D,0x33,0x4B } }; // ECC973B0-2EE9-4B1C-98D7-6E0E816D334B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>{ 0x4CA0EFE6,0xD9C8,0x4EBC,{ 0xB4,0xC7,0x30,0xD1,0x83,0x8A,0x81,0xF1 } }; // 4CA0EFE6-D9C8-4EBC-B4C7-30D1838A81F1
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>{ 0x962BB594,0x2AB3,0x47C5,{ 0x95,0x4B,0x70,0x92,0xF3,0x55,0xF7,0x97 } }; // 962BB594-2AB3-47C5-954B-7092F355F797
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ICanExecuteRequestedEventArgs>{ 0xC8E75256,0x1950,0x505D,{ 0x99,0x3B,0x75,0x90,0x7E,0xF9,0x68,0x30 } }; // C8E75256-1950-505D-993B-75907EF96830
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs>{ 0x7849FD82,0x48E4,0x444D,{ 0x94,0x19,0x93,0xAB,0x88,0x92,0xC1,0x07 } }; // 7849FD82-48E4-444D-9419-93AB8892C107
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ICommand>{ 0xE5AF3542,0xCA67,0x4081,{ 0x99,0x5B,0x70,0x9D,0xD1,0x37,0x92,0xDF } }; // E5AF3542-CA67-4081-995B-709DD13792DF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IContextRequestedEventArgs>{ 0x42618E0A,0x1CB6,0x46FB,{ 0x83,0x74,0x0A,0xEC,0x68,0xAA,0x5E,0x51 } }; // 42618E0A-1CB6-46FB-8374-0AEC68AA5E51
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>{ 0xAF404424,0x26DF,0x44F4,{ 0x87,0x14,0x93,0x59,0x24,0x9B,0x62,0xD3 } }; // AF404424-26DF-44F4-8714-9359249B62D3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IExecuteRequestedEventArgs>{ 0xE07FA734,0xA0B6,0x5755,{ 0x9E,0x87,0x24,0xF5,0x4C,0xCA,0x93,0x72 } }; // E07FA734-A0B6-5755-9E87-24F54CCA9372
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFindNextElementOptions>{ 0xD88AE22B,0x46C2,0x41FC,{ 0x89,0x7E,0xB5,0x96,0x19,0x77,0xB8,0x9D } }; // D88AE22B-46C2-41FC-897E-B5961977B89D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManager>{ 0xC843F50B,0x3B83,0x4DA1,{ 0x9D,0x6F,0x55,0x7C,0x11,0x69,0xF3,0x41 } }; // C843F50B-3B83-4DA1-9D6F-557C1169F341
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManagerGotFocusEventArgs>{ 0x97AA5D83,0x535B,0x507A,{ 0x86,0x8E,0x62,0xB7,0x06,0xF0,0x6B,0x61 } }; // 97AA5D83-535B-507A-868E-62B706F06B61
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManagerLostFocusEventArgs>{ 0x3E157E7A,0x9578,0x5CD3,{ 0xAA,0xA8,0x05,0x1B,0x3D,0x39,0x19,0x78 } }; // 3E157E7A-9578-5CD3-AAA8-051B3D391978
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManagerStatics>{ 0x1ECCD326,0x8182,0x4482,{ 0x82,0x6A,0x09,0x18,0xE9,0xED,0x9A,0xF7 } }; // 1ECCD326-8182-4482-826A-0918E9ED9AF7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManagerStatics2>{ 0xA920D761,0xDD87,0x4F31,{ 0xBE,0xDA,0xEF,0x41,0x7F,0xE7,0xC0,0x4A } }; // A920D761-DD87-4F31-BEDA-EF417FE7C04A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManagerStatics3>{ 0x60805EBF,0xB149,0x417D,{ 0x83,0xF1,0xBA,0xEB,0x56,0x0E,0x2A,0x47 } }; // 60805EBF-B149-417D-83F1-BAEB560E2A47
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManagerStatics4>{ 0x29276E9C,0x1C6C,0x414A,{ 0xBA,0x1C,0x96,0xEF,0xD5,0x96,0x2B,0xCD } }; // 29276E9C-1C6C-414A-BA1C-96EFD5962BCD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManagerStatics5>{ 0x280EDC61,0x207A,0x4D7B,{ 0xB9,0x8F,0xCE,0x16,0x5E,0x1B,0x20,0x15 } }; // 280EDC61-207A-4D7B-B98F-CE165E1B2015
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManagerStatics6>{ 0x3546A1B6,0x20BF,0x5007,{ 0x92,0x9D,0xE6,0xD3,0x2E,0x16,0xAF,0xE4 } }; // 3546A1B6-20BF-5007-929D-E6D32E16AFE4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusManagerStatics7>{ 0x95D6FA97,0xF0FC,0x5C32,{ 0xB2,0x9D,0x07,0xC0,0x4E,0xC9,0x66,0xB0 } }; // 95D6FA97-F0FC-5C32-B29D-07C04EC966B0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IFocusMovementResult>{ 0x06DFEAD3,0xC2AE,0x44BB,{ 0xBF,0xAB,0x9C,0x73,0xDE,0x84,0x07,0xA4 } }; // 06DFEAD3-C2AE-44BB-BFAB-9C73DE8407A4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IGettingFocusEventArgs>{ 0xFA05B9CE,0xC67C,0x4BE8,{ 0x8F,0xD4,0xC4,0x4D,0x67,0x87,0x7E,0x0D } }; // FA05B9CE-C67C-4BE8-8FD4-C44D67877E0D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IGettingFocusEventArgs2>{ 0x88754D7B,0xB4B9,0x4959,{ 0x8B,0xCE,0x89,0xBF,0x21,0x2E,0xD4,0xEB } }; // 88754D7B-B4B9-4959-8BCE-89BF212ED4EB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IGettingFocusEventArgs3>{ 0x4E024891,0xDB3F,0x5E78,{ 0xB7,0x5A,0x62,0xBF,0xC3,0x51,0x07,0x35 } }; // 4E024891-DB3F-5E78-B75A-62BFC3510735
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>{ 0xC246FF23,0xD80D,0x44DE,{ 0x8D,0xB9,0x0D,0x81,0x5E,0x26,0x9A,0xC0 } }; // C246FF23-D80D-44DE-8DB9-0D815E269AC0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IInertiaExpansionBehavior>{ 0x751D87E5,0x8D42,0x44C5,{ 0x96,0x5E,0x3C,0xD3,0x0C,0xC9,0xD6,0xF7 } }; // 751D87E5-8D42-44C5-965E-3CD30CC9D6F7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IInertiaRotationBehavior>{ 0x424CFB2E,0xBBFD,0x4625,{ 0xAE,0x78,0x20,0xC6,0x5B,0xF1,0xEF,0xAF } }; // 424CFB2E-BBFD-4625-AE78-20C65BF1EFAF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IInertiaTranslationBehavior>{ 0x45D3A512,0x3B32,0x4882,{ 0xA4,0xC2,0xEC,0xFA,0x2D,0x4B,0x6D,0xF0 } }; // 45D3A512-3B32-4882-A4C2-ECFA2D4B6DF0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IInputScope>{ 0x5C0F85F3,0xF9D8,0x4220,{ 0xB6,0x66,0x04,0x5D,0x07,0x4D,0x9B,0xFA } }; // 5C0F85F3-F9D8-4220-B666-045D074D9BFA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IInputScopeName>{ 0xFD3E6997,0x08FB,0x4CBA,{ 0xA0,0x21,0x79,0x2D,0x75,0x89,0xFD,0x5A } }; // FD3E6997-08FB-4CBA-A021-792D7589FD5A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IInputScopeNameFactory>{ 0x4A40BB52,0x4BD7,0x4E54,{ 0x86,0x17,0x1C,0xDA,0x8A,0x1E,0xDA,0x7F } }; // 4A40BB52-4BD7-4E54-8617-1CDA8A1EDA7F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IKeyRoutedEventArgs>{ 0xD4CD3DFE,0x4079,0x42E9,{ 0xA3,0x9A,0x30,0x95,0xD3,0xF0,0x49,0xC6 } }; // D4CD3DFE-4079-42E9-A39A-3095D3F049C6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>{ 0x1B02D57A,0x9634,0x4F14,{ 0x91,0xB2,0x13,0x3E,0x42,0xFD,0xB3,0xCD } }; // 1B02D57A-9634-4F14-91B2-133E42FDB3CD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>{ 0x2779F5B4,0xCA41,0x411B,{ 0xA8,0xEF,0xF4,0xFC,0x78,0xE7,0x80,0x57 } }; // 2779F5B4-CA41-411B-A8EF-F4FC78E78057
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IKeyboardAccelerator>{ 0x92E6181E,0x19AE,0x465A,{ 0x9B,0x3C,0xA7,0x1E,0xE9,0xEA,0x74,0x20 } }; // 92E6181E-19AE-465A-9B3C-A71EE9EA7420
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory>{ 0x44D88A99,0x4BFD,0x4A47,{ 0xA8,0x93,0x51,0x5F,0x38,0x86,0x23,0xF6 } }; // 44D88A99-4BFD-4A47-A893-515F388623F6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs>{ 0xC00B03F2,0x04E7,0x4415,{ 0xB1,0x7D,0xD7,0x6B,0x94,0x90,0xDE,0x2B } }; // C00B03F2-04E7-4415-B17D-D76B9490DE2B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2>{ 0xBEFCA4B8,0x5907,0x48EE,{ 0x8E,0x21,0x9C,0x96,0x90,0x78,0xFA,0x11 } }; // BEFCA4B8-5907-48EE-8E21-9C969078FA11
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics>{ 0x3BD43D51,0x9BB3,0x456D,{ 0xBF,0x15,0x80,0x4A,0xDF,0xB8,0x62,0x61 } }; // 3BD43D51-9BB3-456D-BF15-804ADFB86261
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ILosingFocusEventArgs>{ 0xF9F683C7,0xD789,0x472B,{ 0xAA,0x93,0x6D,0x41,0x05,0xE6,0xDA,0xBE } }; // F9F683C7-D789-472B-AA93-6D4105E6DABE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ILosingFocusEventArgs2>{ 0x0493FAD9,0xC27F,0x469F,{ 0x8E,0x62,0x52,0xB3,0xA4,0xF7,0xCD,0x54 } }; // 0493FAD9-C27F-469F-8E62-52B3A4F7CD54
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ILosingFocusEventArgs3>{ 0xC98900BD,0x0B79,0x566E,{ 0xAD,0x1F,0x43,0x6F,0xA5,0x13,0xAE,0x22 } }; // C98900BD-0B79-566E-AD1F-436FA513AE22
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>{ 0xB5AD9B23,0x2F41,0x498E,{ 0x83,0x19,0x01,0x5E,0xE8,0xA7,0x53,0x46 } }; // B5AD9B23-2F41-498E-8319-015EE8A75346
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>{ 0x400D5794,0x4C6F,0x491D,{ 0x82,0xD6,0x35,0x17,0x10,0x93,0x99,0xC6 } }; // 400D5794-4C6F-491D-82D6-3517109399C6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>{ 0x246A91A9,0xCA43,0x4C0B,{ 0xAC,0xEF,0x81,0xE8,0xB8,0x14,0x75,0x20 } }; // 246A91A9-CA43-4C0B-ACEF-81E8B8147520
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IManipulationPivot>{ 0x2E3838A5,0xE6C2,0x4998,{ 0x82,0xAC,0x18,0x74,0x8B,0x14,0x16,0x66 } }; // 2E3838A5-E6C2-4998-82AC-18748B141666
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IManipulationPivotFactory>{ 0x6D05B039,0x3702,0x4396,{ 0xAD,0x9B,0xA8,0x25,0xEF,0xA6,0x3A,0x3B } }; // 6D05B039-3702-4396-AD9B-A825EFA63A3B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>{ 0x5DB1AA05,0x9F80,0x48B6,{ 0xAE,0x6C,0x4F,0x11,0x9D,0xE8,0xFF,0x13 } }; // 5DB1AA05-9F80-48B6-AE6C-4F119DE8FF13
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>{ 0x84C1DAA7,0x7272,0x4463,{ 0xB6,0xC3,0xA4,0x0B,0x9B,0xA1,0x51,0xFC } }; // 84C1DAA7-7272-4463-B6C3-A40B9BA151FC
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>{ 0x18D636B7,0x53A4,0x4C15,{ 0xA4,0x98,0xF3,0xA9,0xCA,0x21,0x2A,0x42 } }; // 18D636B7-53A4-4C15-A498-F3A9CA212A42
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs>{ 0xEC3601A7,0x1007,0x48F9,{ 0xB6,0xB3,0xED,0x0B,0xEA,0x53,0x93,0x7D } }; // EC3601A7-1007-48F9-B6B3-ED0BEA53937D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IPointer>{ 0x5EE8F39F,0x747D,0x4171,{ 0x90,0xE6,0xCD,0x37,0xA9,0xDF,0xFB,0x11 } }; // 5EE8F39F-747D-4171-90E6-CD37A9DFFB11
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IPointerRoutedEventArgs>{ 0xDA628F0A,0x9752,0x49E2,{ 0xBD,0xE2,0x49,0xEC,0xCA,0xB9,0x19,0x4D } }; // DA628F0A-9752-49E2-BDE2-49ECCAB9194D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IPointerRoutedEventArgs2>{ 0x0821F294,0x1DE6,0x4711,{ 0xBA,0x7C,0x8D,0x4B,0x8B,0x09,0x11,0xD0 } }; // 0821F294-1DE6-4711-BA7C-8D4B8B0911D0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs>{ 0xFB79C216,0x972B,0x440C,{ 0x9B,0x83,0x2B,0x41,0x98,0xDC,0xF0,0x9D } }; // FB79C216-972B-440C-9B83-2B4198DCF09D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>{ 0x6834869D,0x7BD5,0x4033,{ 0xB2,0x37,0x17,0x2F,0x79,0xAB,0xE3,0x93 } }; // 6834869D-7BD5-4033-B237-172F79ABE393
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IStandardUICommand>{ 0xD2BF7F43,0x0504,0x52D0,{ 0x8A,0xA6,0x0C,0xB0,0xF7,0x56,0xEB,0x27 } }; // D2BF7F43-0504-52D0-8AA6-0CB0F756EB27
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IStandardUICommand2>{ 0xE3666069,0xF9E4,0x51EB,{ 0x88,0x5B,0x7A,0x62,0x0A,0x07,0x82,0xEA } }; // E3666069-F9E4-51EB-885B-7A620A0782EA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IStandardUICommandFactory>{ 0x8F1A7590,0xDCE1,0x56E4,{ 0xAB,0x63,0xF5,0xCE,0x3C,0xE4,0xEB,0xF6 } }; // 8F1A7590-DCE1-56E4-AB63-F5CE3CE4EBF6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IStandardUICommandStatics>{ 0x7EA87ED9,0x2978,0x5533,{ 0x9B,0x2E,0x67,0x59,0xCE,0x88,0x56,0x9F } }; // 7EA87ED9-2978-5533-9B2E-6759CE88569F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ITappedRoutedEventArgs>{ 0xA099E6BE,0xE624,0x459A,{ 0xBB,0x1D,0xE0,0x5C,0x73,0xE2,0xCC,0x66 } }; // A099E6BE-E624-459A-BB1D-E05C73E2CC66
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IXamlUICommand>{ 0x8494F8D4,0xEAD1,0x5F01,{ 0xAD,0x2E,0xA8,0xCA,0xD4,0xF9,0xDC,0x0E } }; // 8494F8D4-EAD1-5F01-AD2E-A8CAD4F9DC0E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IXamlUICommandFactory>{ 0x1EEC08C3,0xE061,0x5E10,{ 0x9F,0x2A,0x2B,0xAA,0x84,0x08,0x85,0xC2 } }; // 1EEC08C3-E061-5E10-9F2A-2BAA840885C2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::IXamlUICommandStatics>{ 0x66BC457C,0x1A0C,0x58ED,{ 0x87,0x6E,0x71,0x53,0x3F,0x96,0x6D,0xB6 } }; // 66BC457C-1A0C-58ED-876E-71533F966DB6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::DoubleTappedEventHandler>{ 0x3124D025,0x04A7,0x4D45,{ 0x82,0x5E,0x82,0x04,0xA6,0x24,0xDB,0xF4 } }; // 3124D025-04A7-4D45-825E-8204A624DBF4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::HoldingEventHandler>{ 0xECAE8CCD,0x8E5E,0x4FBE,{ 0x98,0x46,0x30,0xA6,0x37,0x0A,0xFC,0xDF } }; // ECAE8CCD-8E5E-4FBE-9846-30A6370AFCDF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::KeyEventHandler>{ 0x7C63D2E5,0x7A0E,0x4E12,{ 0xB9,0x6A,0x77,0x15,0xAA,0x6F,0xF1,0xC8 } }; // 7C63D2E5-7A0E-4E12-B96A-7715AA6FF1C8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler>{ 0x38EF4B0F,0x14F8,0x42DF,{ 0x9A,0x1E,0xA4,0xBC,0xC4,0xAF,0x77,0xF4 } }; // 38EF4B0F-14F8-42DF-9A1E-A4BCC4AF77F4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler>{ 0xAA1160CB,0xDFB9,0x4C56,{ 0xAB,0xDC,0x71,0x1B,0x63,0xC8,0xEB,0x94 } }; // AA1160CB-DFB9-4C56-ABDC-711B63C8EB94
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler>{ 0xD39D6322,0x7C9C,0x481B,{ 0x82,0x7B,0xC8,0xB2,0xD9,0xBB,0x6F,0xC7 } }; // D39D6322-7C9C-481B-827B-C8B2D9BB6FC7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ManipulationStartedEventHandler>{ 0xF88345F8,0xE0A3,0x4BE2,{ 0xB9,0x0C,0xDC,0x20,0xE6,0xD8,0xBE,0xB0 } }; // F88345F8-E0A3-4BE2-B90C-DC20E6D8BEB0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::ManipulationStartingEventHandler>{ 0x10D0B04E,0xBFE4,0x42CB,{ 0x82,0x3C,0x3F,0xEC,0xD8,0x77,0x0E,0xF8 } }; // 10D0B04E-BFE4-42CB-823C-3FECD8770EF8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::PointerEventHandler>{ 0xE4385929,0xC004,0x4BCF,{ 0x89,0x70,0x35,0x94,0x86,0xE3,0x9F,0x88 } }; // E4385929-C004-4BCF-8970-359486E39F88
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::RightTappedEventHandler>{ 0x2532A062,0xF447,0x4950,{ 0x9C,0x46,0xF1,0xE3,0x4A,0x2C,0x22,0x38 } }; // 2532A062-F447-4950-9C46-F1E34A2C2238
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Input::TappedEventHandler>{ 0x68D940CC,0x9FF0,0x49CE,{ 0xB1,0x41,0x3F,0x07,0xEC,0x47,0x7B,0x97 } }; // 68D940CC-9FF0-49CE-B141-3F07EC477B97
    template <> struct default_interface<Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs>{ using type = Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs>{ using type = Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs>{ using type = Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::AccessKeyManager>{ using type = Windows::UI::Xaml::Input::IAccessKeyManager; };
    template <> struct default_interface<Windows::UI::Xaml::Input::CanExecuteRequestedEventArgs>{ using type = Windows::UI::Xaml::Input::ICanExecuteRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::ContextRequestedEventArgs>{ using type = Windows::UI::Xaml::Input::IContextRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::ExecuteRequestedEventArgs>{ using type = Windows::UI::Xaml::Input::IExecuteRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::FindNextElementOptions>{ using type = Windows::UI::Xaml::Input::IFindNextElementOptions; };
    template <> struct default_interface<Windows::UI::Xaml::Input::FocusManager>{ using type = Windows::UI::Xaml::Input::IFocusManager; };
    template <> struct default_interface<Windows::UI::Xaml::Input::FocusManagerGotFocusEventArgs>{ using type = Windows::UI::Xaml::Input::IFocusManagerGotFocusEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::FocusManagerLostFocusEventArgs>{ using type = Windows::UI::Xaml::Input::IFocusManagerLostFocusEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::FocusMovementResult>{ using type = Windows::UI::Xaml::Input::IFocusMovementResult; };
    template <> struct default_interface<Windows::UI::Xaml::Input::GettingFocusEventArgs>{ using type = Windows::UI::Xaml::Input::IGettingFocusEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::HoldingRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IHoldingRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::InertiaExpansionBehavior>{ using type = Windows::UI::Xaml::Input::IInertiaExpansionBehavior; };
    template <> struct default_interface<Windows::UI::Xaml::Input::InertiaRotationBehavior>{ using type = Windows::UI::Xaml::Input::IInertiaRotationBehavior; };
    template <> struct default_interface<Windows::UI::Xaml::Input::InertiaTranslationBehavior>{ using type = Windows::UI::Xaml::Input::IInertiaTranslationBehavior; };
    template <> struct default_interface<Windows::UI::Xaml::Input::InputScope>{ using type = Windows::UI::Xaml::Input::IInputScope; };
    template <> struct default_interface<Windows::UI::Xaml::Input::InputScopeName>{ using type = Windows::UI::Xaml::Input::IInputScopeName; };
    template <> struct default_interface<Windows::UI::Xaml::Input::KeyRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IKeyRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::KeyboardAccelerator>{ using type = Windows::UI::Xaml::Input::IKeyboardAccelerator; };
    template <> struct default_interface<Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs>{ using type = Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::LosingFocusEventArgs>{ using type = Windows::UI::Xaml::Input::ILosingFocusEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationPivot>{ using type = Windows::UI::Xaml::Input::IManipulationPivot; };
    template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>{ using type = Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::Pointer>{ using type = Windows::UI::Xaml::Input::IPointer; };
    template <> struct default_interface<Windows::UI::Xaml::Input::PointerRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IPointerRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs>{ using type = Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::StandardUICommand>{ using type = Windows::UI::Xaml::Input::IStandardUICommand; };
    template <> struct default_interface<Windows::UI::Xaml::Input::TappedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::ITappedRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Input::XamlUICommand>{ using type = Windows::UI::Xaml::Input::IXamlUICommand; };
    template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PressedKeys(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDisplayModeEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsDisplayModeEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsDisplayModeEnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ExitDisplayMode() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreKeyTipsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreKeyTipsEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ICanExecuteRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Parameter(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanExecute(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanExecute(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Character(char16_t*) noexcept = 0;
            virtual int32_t __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ICommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CanExecuteChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CanExecuteChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CanExecute(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall Execute(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IContextRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall TryGetPosition(void*, Windows::Foundation::Point*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetPosition(void*, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IExecuteRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Parameter(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFindNextElementOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SearchRoot(void**) noexcept = 0;
            virtual int32_t __stdcall put_SearchRoot(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExclusionRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_ExclusionRect(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall get_HintRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_HintRect(Windows::Foundation::Rect) noexcept = 0;
            virtual int32_t __stdcall get_XYFocusNavigationStrategyOverride(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_XYFocusNavigationStrategyOverride(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerGotFocusEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewFocusedElement(void**) noexcept = 0;
            virtual int32_t __stdcall get_CorrelationId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerLostFocusEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldFocusedElement(void**) noexcept = 0;
            virtual int32_t __stdcall get_CorrelationId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFocusedElement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryMoveFocus(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindNextFocusableElement(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindNextFocusableElementWithHint(int32_t, Windows::Foundation::Rect, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryMoveFocusWithOptions(int32_t, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall FindNextElement(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FindFirstFocusableElement(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindLastFocusableElement(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindNextElementWithOptions(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryFocusAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryMoveFocusAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TryMoveFocusWithOptionsAsync(int32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_GotFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GotFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LostFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LostFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GettingFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GettingFocus(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LosingFocus(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LosingFocus(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFocusedElement(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IFocusMovementResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IGettingFocusEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldFocusedElement(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewFocusedElement(void**) noexcept = 0;
            virtual int32_t __stdcall put_NewFocusedElement(void*) noexcept = 0;
            virtual int32_t __stdcall get_FocusState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_InputDevice(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IGettingFocusEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCancel(bool*) noexcept = 0;
            virtual int32_t __stdcall TrySetNewFocusedElement(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IGettingFocusEventArgs3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CorrelationId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_HoldingState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetPosition(void*, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IInertiaExpansionBehavior>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredDeceleration(double*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredDeceleration(double) noexcept = 0;
            virtual int32_t __stdcall get_DesiredExpansion(double*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredExpansion(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IInertiaRotationBehavior>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredDeceleration(double*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredDeceleration(double) noexcept = 0;
            virtual int32_t __stdcall get_DesiredRotation(double*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredRotation(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IInertiaTranslationBehavior>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredDeceleration(double*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredDeceleration(double) noexcept = 0;
            virtual int32_t __stdcall get_DesiredDisplacement(double*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredDisplacement(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IInputScope>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Names(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IInputScopeName>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NameValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_NameValue(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IInputScopeNameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IKeyRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Key(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OriginalKey(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IKeyboardAccelerator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Key(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Key(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Modifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Modifiers(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ScopeOwner(void**) noexcept = 0;
            virtual int32_t __stdcall put_ScopeOwner(void*) noexcept = 0;
            virtual int32_t __stdcall add_Invoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Invoked(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Element(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyboardAccelerator(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ModifiersProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScopeOwnerProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ILosingFocusEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldFocusedElement(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewFocusedElement(void**) noexcept = 0;
            virtual int32_t __stdcall put_NewFocusedElement(void*) noexcept = 0;
            virtual int32_t __stdcall get_FocusState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_InputDevice(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ILosingFocusEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryCancel(bool*) noexcept = 0;
            virtual int32_t __stdcall TrySetNewFocusedElement(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ILosingFocusEventArgs3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CorrelationId(winrt::guid*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Container(void**) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_IsInertial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Container(void**) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_IsInertial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Delta(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Container(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExpansionBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExpansionBehavior(void*) noexcept = 0;
            virtual int32_t __stdcall get_RotationBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall put_RotationBehavior(void*) noexcept = 0;
            virtual int32_t __stdcall get_TranslationBehavior(void**) noexcept = 0;
            virtual int32_t __stdcall put_TranslationBehavior(void*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Delta(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IManipulationPivot>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Center(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Center(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Radius(double*) noexcept = 0;
            virtual int32_t __stdcall put_Radius(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IManipulationPivotFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithCenterAndRadius(Windows::Foundation::Point, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Container(void**) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta*) noexcept = 0;
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Mode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Mode(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_Container(void**) noexcept = 0;
            virtual int32_t __stdcall put_Container(void*) noexcept = 0;
            virtual int32_t __stdcall get_Pivot(void**) noexcept = 0;
            virtual int32_t __stdcall put_Pivot(void*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_InputDevice(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IPointer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsInContact(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsInRange(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IPointerRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Pointer(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyModifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetCurrentPoint(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetIntermediatePoints(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IPointerRoutedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsGenerated(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Key(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Modifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetPosition(void*, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IStandardUICommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IStandardUICommand2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_Kind(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IStandardUICommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithKind(int32_t, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IStandardUICommandStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KindProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ITappedRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointerDeviceType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetPosition(void*, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IXamlUICommand>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
            virtual int32_t __stdcall put_Label(void*) noexcept = 0;
            virtual int32_t __stdcall get_IconSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_IconSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeyboardAccelerators(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccessKey(void**) noexcept = 0;
            virtual int32_t __stdcall put_AccessKey(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Command(void**) noexcept = 0;
            virtual int32_t __stdcall put_Command(void*) noexcept = 0;
            virtual int32_t __stdcall add_ExecuteRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ExecuteRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CanExecuteRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CanExecuteRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall NotifyCanExecuteChanged() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IXamlUICommandFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::IXamlUICommandStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LabelProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IconSourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyboardAcceleratorsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccessKeyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DescriptionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CommandProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::DoubleTappedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::HoldingEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::KeyEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ManipulationStartedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::ManipulationStartingEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::PointerEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::RightTappedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Input::TappedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IAccessKeyDisplayDismissedEventArgs
    {
    };
    template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyDisplayDismissedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IAccessKeyDisplayRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PressedKeys() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyDisplayRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IAccessKeyInvokedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyInvokedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IAccessKeyManager
    {
    };
    template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyManager>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDisplayModeEnabled() const;
        WINRT_IMPL_AUTO(winrt::event_token) IsDisplayModeEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& handler) const;
        using IsDisplayModeEnabledChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Input::IAccessKeyManagerStatics, &impl::abi_t<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>::remove_IsDisplayModeEnabledChanged>;
        [[nodiscard]] IsDisplayModeEnabledChanged_revoker IsDisplayModeEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) IsDisplayModeEnabledChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) ExitDisplayMode() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AreKeyTipsEnabled() const;
        WINRT_IMPL_AUTO(void) AreKeyTipsEnabled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_ICanExecuteRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Parameter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanExecute() const;
        WINRT_IMPL_AUTO(void) CanExecute(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::ICanExecuteRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_ICanExecuteRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_ICharacterReceivedRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(char16_t) Character() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Core::CorePhysicalKeyStatus) KeyStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_ICharacterReceivedRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_ICommand
    {
        WINRT_IMPL_AUTO(winrt::event_token) CanExecuteChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using CanExecuteChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Input::ICommand, &impl::abi_t<Windows::UI::Xaml::Input::ICommand>::remove_CanExecuteChanged>;
        [[nodiscard]] CanExecuteChanged_revoker CanExecuteChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CanExecuteChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(bool) CanExecute(Windows::Foundation::IInspectable const& parameter) const;
        WINRT_IMPL_AUTO(void) Execute(Windows::Foundation::IInspectable const& parameter) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::ICommand>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_ICommand<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IContextRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(bool) TryGetPosition(Windows::UI::Xaml::UIElement const& relativeTo, Windows::Foundation::Point& point) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IContextRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IContextRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Input::PointerDeviceType) PointerDeviceType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IExecuteRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Parameter() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IExecuteRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IExecuteRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFindNextElementOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) SearchRoot() const;
        WINRT_IMPL_AUTO(void) SearchRoot(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) ExclusionRect() const;
        WINRT_IMPL_AUTO(void) ExclusionRect(Windows::Foundation::Rect const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) HintRect() const;
        WINRT_IMPL_AUTO(void) HintRect(Windows::Foundation::Rect const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride) XYFocusNavigationStrategyOverride() const;
        WINRT_IMPL_AUTO(void) XYFocusNavigationStrategyOverride(Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFindNextElementOptions>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManager
    {
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManager>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManagerGotFocusEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) NewFocusedElement() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) CorrelationId() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerGotFocusEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerGotFocusEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManagerLostFocusEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) OldFocusedElement() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) CorrelationId() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerLostFocusEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerLostFocusEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetFocusedElement() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics2
    {
        WINRT_IMPL_AUTO(bool) TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics3
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::Foundation::Rect const& hintRect) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics4
    {
        WINRT_IMPL_AUTO(bool) TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) FindFirstFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) FindLastFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics5
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult>) TryFocusAsync(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FocusState const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult>) TryMoveFocusAsync(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Input::FocusMovementResult>) TryMoveFocusAsync(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics6
    {
        WINRT_IMPL_AUTO(winrt::event_token) GotFocus(Windows::Foundation::EventHandler<Windows::UI::Xaml::Input::FocusManagerGotFocusEventArgs> const& handler) const;
        using GotFocus_revoker = impl::event_revoker<Windows::UI::Xaml::Input::IFocusManagerStatics6, &impl::abi_t<Windows::UI::Xaml::Input::IFocusManagerStatics6>::remove_GotFocus>;
        [[nodiscard]] GotFocus_revoker GotFocus(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Xaml::Input::FocusManagerGotFocusEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) GotFocus(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) LostFocus(Windows::Foundation::EventHandler<Windows::UI::Xaml::Input::FocusManagerLostFocusEventArgs> const& handler) const;
        using LostFocus_revoker = impl::event_revoker<Windows::UI::Xaml::Input::IFocusManagerStatics6, &impl::abi_t<Windows::UI::Xaml::Input::IFocusManagerStatics6>::remove_LostFocus>;
        [[nodiscard]] LostFocus_revoker LostFocus(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Xaml::Input::FocusManagerLostFocusEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) LostFocus(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) GettingFocus(Windows::Foundation::EventHandler<Windows::UI::Xaml::Input::GettingFocusEventArgs> const& handler) const;
        using GettingFocus_revoker = impl::event_revoker<Windows::UI::Xaml::Input::IFocusManagerStatics6, &impl::abi_t<Windows::UI::Xaml::Input::IFocusManagerStatics6>::remove_GettingFocus>;
        [[nodiscard]] GettingFocus_revoker GettingFocus(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Xaml::Input::GettingFocusEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) GettingFocus(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) LosingFocus(Windows::Foundation::EventHandler<Windows::UI::Xaml::Input::LosingFocusEventArgs> const& handler) const;
        using LosingFocus_revoker = impl::event_revoker<Windows::UI::Xaml::Input::IFocusManagerStatics6, &impl::abi_t<Windows::UI::Xaml::Input::IFocusManagerStatics6>::remove_LosingFocus>;
        [[nodiscard]] LosingFocus_revoker LosingFocus(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Xaml::Input::LosingFocusEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) LosingFocus(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics7
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetFocusedElement(Windows::UI::Xaml::XamlRoot const& xamlRoot) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IFocusMovementResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Succeeded() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IFocusMovementResult>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusMovementResult<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) OldFocusedElement() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) NewFocusedElement() const;
        WINRT_IMPL_AUTO(void) NewFocusedElement(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::FocusState) FocusState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::FocusNavigationDirection) Direction() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::FocusInputDeviceKind) InputDevice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Cancel() const;
        WINRT_IMPL_AUTO(void) Cancel(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IGettingFocusEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs2
    {
        WINRT_IMPL_AUTO(bool) TryCancel() const;
        WINRT_IMPL_AUTO(bool) TrySetNewFocusedElement(Windows::UI::Xaml::DependencyObject const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IGettingFocusEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) CorrelationId() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IGettingFocusEventArgs3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Input::PointerDeviceType) PointerDeviceType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::HoldingState) HoldingState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IInertiaExpansionBehavior
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) DesiredDeceleration() const;
        WINRT_IMPL_AUTO(void) DesiredDeceleration(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DesiredExpansion() const;
        WINRT_IMPL_AUTO(void) DesiredExpansion(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IInertiaExpansionBehavior>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IInertiaExpansionBehavior<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IInertiaRotationBehavior
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) DesiredDeceleration() const;
        WINRT_IMPL_AUTO(void) DesiredDeceleration(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DesiredRotation() const;
        WINRT_IMPL_AUTO(void) DesiredRotation(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IInertiaRotationBehavior>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IInertiaRotationBehavior<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IInertiaTranslationBehavior
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) DesiredDeceleration() const;
        WINRT_IMPL_AUTO(void) DesiredDeceleration(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DesiredDisplacement() const;
        WINRT_IMPL_AUTO(void) DesiredDisplacement(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IInertiaTranslationBehavior>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IInertiaTranslationBehavior<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IInputScope
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::InputScopeName>) Names() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IInputScope>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IInputScope<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IInputScopeName
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::InputScopeNameValue) NameValue() const;
        WINRT_IMPL_AUTO(void) NameValue(Windows::UI::Xaml::Input::InputScopeNameValue const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IInputScopeName>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IInputScopeName<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IInputScopeNameFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::InputScopeName) CreateInstance(Windows::UI::Xaml::Input::InputScopeNameValue const& nameValue) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IInputScopeNameFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IInputScopeNameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) Key() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Core::CorePhysicalKeyStatus) KeyStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IKeyRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) OriginalKey() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IKeyboardAccelerator
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) Key() const;
        WINRT_IMPL_AUTO(void) Key(Windows::System::VirtualKey const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) Modifiers() const;
        WINRT_IMPL_AUTO(void) Modifiers(Windows::System::VirtualKeyModifiers const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) ScopeOwner() const;
        WINRT_IMPL_AUTO(void) ScopeOwner(Windows::UI::Xaml::DependencyObject const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Invoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Input::KeyboardAccelerator, Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs> const& handler) const;
        using Invoked_revoker = impl::event_revoker<Windows::UI::Xaml::Input::IKeyboardAccelerator, &impl::abi_t<Windows::UI::Xaml::Input::IKeyboardAccelerator>::remove_Invoked>;
        [[nodiscard]] Invoked_revoker Invoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Input::KeyboardAccelerator, Windows::UI::Xaml::Input::KeyboardAcceleratorInvokedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Invoked(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IKeyboardAccelerator>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyboardAccelerator<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::KeyboardAccelerator) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IKeyboardAcceleratorFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) Element() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::KeyboardAccelerator) KeyboardAccelerator() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IKeyboardAcceleratorInvokedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) KeyProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ModifiersProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ScopeOwnerProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IKeyboardAcceleratorStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyboardAcceleratorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) OldFocusedElement() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) NewFocusedElement() const;
        WINRT_IMPL_AUTO(void) NewFocusedElement(Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::FocusState) FocusState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::FocusNavigationDirection) Direction() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::FocusInputDeviceKind) InputDevice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Cancel() const;
        WINRT_IMPL_AUTO(void) Cancel(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::ILosingFocusEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs2
    {
        WINRT_IMPL_AUTO(bool) TryCancel() const;
        WINRT_IMPL_AUTO(bool) TrySetNewFocusedElement(Windows::UI::Xaml::DependencyObject const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::ILosingFocusEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) CorrelationId() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::ILosingFocusEventArgs3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) Container() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInertial() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::ManipulationDelta) Cumulative() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::ManipulationVelocities) Velocities() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Input::PointerDeviceType) PointerDeviceType() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) Container() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInertial() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::ManipulationDelta) Delta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::ManipulationDelta) Cumulative() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::ManipulationVelocities) Velocities() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Input::PointerDeviceType) PointerDeviceType() const;
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) Container() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::InertiaExpansionBehavior) ExpansionBehavior() const;
        WINRT_IMPL_AUTO(void) ExpansionBehavior(Windows::UI::Xaml::Input::InertiaExpansionBehavior const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::InertiaRotationBehavior) RotationBehavior() const;
        WINRT_IMPL_AUTO(void) RotationBehavior(Windows::UI::Xaml::Input::InertiaRotationBehavior const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::InertiaTranslationBehavior) TranslationBehavior() const;
        WINRT_IMPL_AUTO(void) TranslationBehavior(Windows::UI::Xaml::Input::InertiaTranslationBehavior const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Input::PointerDeviceType) PointerDeviceType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::ManipulationDelta) Delta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::ManipulationDelta) Cumulative() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::ManipulationVelocities) Velocities() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IManipulationPivot
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Center() const;
        WINRT_IMPL_AUTO(void) Center(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Radius() const;
        WINRT_IMPL_AUTO(void) Radius(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IManipulationPivot>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationPivot<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IManipulationPivotFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::ManipulationPivot) CreateInstanceWithCenterAndRadius(Windows::Foundation::Point const& center, double radius) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IManipulationPivotFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationPivotFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) Container() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Input::PointerDeviceType) PointerDeviceType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Input::ManipulationDelta) Cumulative() const;
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgsFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::ManipulationModes) Mode() const;
        WINRT_IMPL_AUTO(void) Mode(Windows::UI::Xaml::Input::ManipulationModes const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) Container() const;
        WINRT_IMPL_AUTO(void) Container(Windows::UI::Xaml::UIElement const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::ManipulationPivot) Pivot() const;
        WINRT_IMPL_AUTO(void) Pivot(Windows::UI::Xaml::Input::ManipulationPivot const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::FocusNavigationDirection) Direction() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::FocusInputDeviceKind) InputDevice() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IPointer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) PointerId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Input::PointerDeviceType) PointerDeviceType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInContact() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInRange() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IPointer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IPointer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::Pointer) Pointer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) KeyModifiers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(Windows::UI::Input::PointerPoint) GetCurrentPoint(Windows::UI::Xaml::UIElement const& relativeTo) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint>) GetIntermediatePoints(Windows::UI::Xaml::UIElement const& relativeTo) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IPointerRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsGenerated() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IPointerRoutedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IProcessKeyboardAcceleratorEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKey) Key() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::VirtualKeyModifiers) Modifiers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IProcessKeyboardAcceleratorEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Input::PointerDeviceType) PointerDeviceType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IStandardUICommand
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::StandardUICommandKind) Kind() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IStandardUICommand>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IStandardUICommand<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IStandardUICommand2
    {
        WINRT_IMPL_AUTO(void) Kind(Windows::UI::Xaml::Input::StandardUICommandKind const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IStandardUICommand2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IStandardUICommand2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IStandardUICommandFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::StandardUICommand) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::StandardUICommand) CreateInstanceWithKind(Windows::UI::Xaml::Input::StandardUICommandKind const& kind, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IStandardUICommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IStandardUICommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IStandardUICommandStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) KindProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IStandardUICommandStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IStandardUICommandStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_ITappedRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Input::PointerDeviceType) PointerDeviceType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Handled() const;
        WINRT_IMPL_AUTO(void) Handled(bool value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::ITappedRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_ITappedRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IXamlUICommand
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Label() const;
        WINRT_IMPL_AUTO(void) Label(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::IconSource) IconSource() const;
        WINRT_IMPL_AUTO(void) IconSource(Windows::UI::Xaml::Controls::IconSource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::KeyboardAccelerator>) KeyboardAccelerators() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AccessKey() const;
        WINRT_IMPL_AUTO(void) AccessKey(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::ICommand) Command() const;
        WINRT_IMPL_AUTO(void) Command(Windows::UI::Xaml::Input::ICommand const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) ExecuteRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Input::XamlUICommand, Windows::UI::Xaml::Input::ExecuteRequestedEventArgs> const& handler) const;
        using ExecuteRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Input::IXamlUICommand, &impl::abi_t<Windows::UI::Xaml::Input::IXamlUICommand>::remove_ExecuteRequested>;
        [[nodiscard]] ExecuteRequested_revoker ExecuteRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Input::XamlUICommand, Windows::UI::Xaml::Input::ExecuteRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ExecuteRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CanExecuteRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Input::XamlUICommand, Windows::UI::Xaml::Input::CanExecuteRequestedEventArgs> const& handler) const;
        using CanExecuteRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Input::IXamlUICommand, &impl::abi_t<Windows::UI::Xaml::Input::IXamlUICommand>::remove_CanExecuteRequested>;
        [[nodiscard]] CanExecuteRequested_revoker CanExecuteRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Input::XamlUICommand, Windows::UI::Xaml::Input::CanExecuteRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CanExecuteRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) NotifyCanExecuteChanged() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IXamlUICommand>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IXamlUICommand<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IXamlUICommandFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::XamlUICommand) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IXamlUICommandFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IXamlUICommandFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Input_IXamlUICommandStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LabelProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IconSourceProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) KeyboardAcceleratorsProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AccessKeyProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DescriptionProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CommandProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Input::IXamlUICommandStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Input_IXamlUICommandStatics<D>;
    };
}
#endif