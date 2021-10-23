// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Media_0_H
#define WINRT_Windows_UI_Xaml_Media_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct HResult;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Media::Playback
{
    enum class FailedMediaStreamKind : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IRandomAccessStream;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct AnimationPropertyInfo;
    struct CompositionBrush;
    struct CompositionLight;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    enum class ApplicationTheme : int32_t;
    struct DependencyObject;
    struct DependencyProperty;
    struct ExceptionRoutedEventHandler;
    struct RoutedEventHandler;
    struct UIElement;
    struct UIElementWeakCollection;
    struct Window;
    struct XamlRoot;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives
{
    struct Popup;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Media3D
{
    struct Matrix3D;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media
{
    enum class AcrylicBackgroundSource : int32_t
    {
        HostBackdrop = 0,
        Backdrop = 1,
    };
    enum class AlignmentX : int32_t
    {
        Left = 0,
        Center = 1,
        Right = 2,
    };
    enum class AlignmentY : int32_t
    {
        Top = 0,
        Center = 1,
        Bottom = 2,
    };
    enum class AudioCategory : int32_t
    {
        Other = 0,
        ForegroundOnlyMedia = 1,
        BackgroundCapableMedia = 2,
        Communications = 3,
        Alerts = 4,
        SoundEffects = 5,
        GameEffects = 6,
        GameMedia = 7,
        GameChat = 8,
        Speech = 9,
        Movie = 10,
        Media = 11,
    };
    enum class AudioDeviceType : int32_t
    {
        Console = 0,
        Multimedia = 1,
        Communications = 2,
    };
    enum class BrushMappingMode : int32_t
    {
        Absolute = 0,
        RelativeToBoundingBox = 1,
    };
    enum class ColorInterpolationMode : int32_t
    {
        ScRgbLinearInterpolation = 0,
        SRgbLinearInterpolation = 1,
    };
    enum class ElementCompositeMode : int32_t
    {
        Inherit = 0,
        SourceOver = 1,
        MinBlend = 2,
    };
    enum class FastPlayFallbackBehaviour : int32_t
    {
        Skip = 0,
        Hide = 1,
        Disable = 2,
    };
    enum class FillRule : int32_t
    {
        EvenOdd = 0,
        Nonzero = 1,
    };
    enum class GradientSpreadMethod : int32_t
    {
        Pad = 0,
        Reflect = 1,
        Repeat = 2,
    };
    enum class LoadedImageSourceLoadStatus : int32_t
    {
        Success = 0,
        NetworkError = 1,
        InvalidFormat = 2,
        Other = 3,
    };
    enum class MediaCanPlayResponse : int32_t
    {
        NotSupported = 0,
        Maybe = 1,
        Probably = 2,
    };
    enum class MediaElementState : int32_t
    {
        Closed = 0,
        Opening = 1,
        Buffering = 2,
        Playing = 3,
        Paused = 4,
        Stopped = 5,
    };
    enum class PenLineCap : int32_t
    {
        Flat = 0,
        Square = 1,
        Round = 2,
        Triangle = 3,
    };
    enum class PenLineJoin : int32_t
    {
        Miter = 0,
        Bevel = 1,
        Round = 2,
    };
    enum class RevealBrushState : int32_t
    {
        Normal = 0,
        PointerOver = 1,
        Pressed = 2,
    };
    enum class Stereo3DVideoPackingMode : int32_t
    {
        None = 0,
        SideBySide = 1,
        TopBottom = 2,
    };
    enum class Stereo3DVideoRenderMode : int32_t
    {
        Mono = 0,
        Stereo = 1,
    };
    enum class Stretch : int32_t
    {
        None = 0,
        Fill = 1,
        Uniform = 2,
        UniformToFill = 3,
    };
    enum class StyleSimulations : int32_t
    {
        None = 0,
        BoldSimulation = 1,
        ItalicSimulation = 2,
        BoldItalicSimulation = 3,
    };
    enum class SweepDirection : int32_t
    {
        Counterclockwise = 0,
        Clockwise = 1,
    };
    struct IAcrylicBrush;
    struct IAcrylicBrush2;
    struct IAcrylicBrushFactory;
    struct IAcrylicBrushStatics;
    struct IAcrylicBrushStatics2;
    struct IArcSegment;
    struct IArcSegmentStatics;
    struct IBezierSegment;
    struct IBezierSegmentStatics;
    struct IBitmapCache;
    struct IBrush;
    struct IBrushFactory;
    struct IBrushOverrides2;
    struct IBrushStatics;
    struct ICacheMode;
    struct ICacheModeFactory;
    struct ICompositeTransform;
    struct ICompositeTransformStatics;
    struct ICompositionTarget;
    struct ICompositionTargetStatics;
    struct ICompositionTargetStatics3;
    struct IEllipseGeometry;
    struct IEllipseGeometryStatics;
    struct IFontFamily;
    struct IFontFamilyFactory;
    struct IFontFamilyStatics2;
    struct IGeneralTransform;
    struct IGeneralTransformFactory;
    struct IGeneralTransformOverrides;
    struct IGeometry;
    struct IGeometryFactory;
    struct IGeometryGroup;
    struct IGeometryGroupStatics;
    struct IGeometryStatics;
    struct IGradientBrush;
    struct IGradientBrushFactory;
    struct IGradientBrushStatics;
    struct IGradientStop;
    struct IGradientStopStatics;
    struct IImageBrush;
    struct IImageBrushStatics;
    struct IImageSource;
    struct IImageSourceFactory;
    struct ILineGeometry;
    struct ILineGeometryStatics;
    struct ILineSegment;
    struct ILineSegmentStatics;
    struct ILinearGradientBrush;
    struct ILinearGradientBrushFactory;
    struct ILinearGradientBrushStatics;
    struct ILoadedImageSourceLoadCompletedEventArgs;
    struct ILoadedImageSurface;
    struct ILoadedImageSurfaceStatics;
    struct IMatrix3DProjection;
    struct IMatrix3DProjectionStatics;
    struct IMatrixHelper;
    struct IMatrixHelperStatics;
    struct IMatrixTransform;
    struct IMatrixTransformStatics;
    struct IMediaTransportControlsThumbnailRequestedEventArgs;
    struct IPartialMediaFailureDetectedEventArgs;
    struct IPartialMediaFailureDetectedEventArgs2;
    struct IPathFigure;
    struct IPathFigureStatics;
    struct IPathGeometry;
    struct IPathGeometryStatics;
    struct IPathSegment;
    struct IPathSegmentFactory;
    struct IPlaneProjection;
    struct IPlaneProjectionStatics;
    struct IPolyBezierSegment;
    struct IPolyBezierSegmentStatics;
    struct IPolyLineSegment;
    struct IPolyLineSegmentStatics;
    struct IPolyQuadraticBezierSegment;
    struct IPolyQuadraticBezierSegmentStatics;
    struct IProjection;
    struct IProjectionFactory;
    struct IQuadraticBezierSegment;
    struct IQuadraticBezierSegmentStatics;
    struct IRateChangedRoutedEventArgs;
    struct IRectangleGeometry;
    struct IRectangleGeometryStatics;
    struct IRenderedEventArgs;
    struct IRenderingEventArgs;
    struct IRevealBackgroundBrush;
    struct IRevealBackgroundBrushFactory;
    struct IRevealBorderBrush;
    struct IRevealBorderBrushFactory;
    struct IRevealBrush;
    struct IRevealBrushFactory;
    struct IRevealBrushStatics;
    struct IRotateTransform;
    struct IRotateTransformStatics;
    struct IScaleTransform;
    struct IScaleTransformStatics;
    struct IShadow;
    struct IShadowFactory;
    struct ISkewTransform;
    struct ISkewTransformStatics;
    struct ISolidColorBrush;
    struct ISolidColorBrushFactory;
    struct ISolidColorBrushStatics;
    struct IThemeShadow;
    struct IThemeShadowFactory;
    struct ITileBrush;
    struct ITileBrushFactory;
    struct ITileBrushStatics;
    struct ITimelineMarker;
    struct ITimelineMarkerRoutedEventArgs;
    struct ITimelineMarkerStatics;
    struct ITransform;
    struct ITransformFactory;
    struct ITransformGroup;
    struct ITransformGroupStatics;
    struct ITranslateTransform;
    struct ITranslateTransformStatics;
    struct IVisualTreeHelper;
    struct IVisualTreeHelperStatics;
    struct IVisualTreeHelperStatics2;
    struct IVisualTreeHelperStatics3;
    struct IXamlCompositionBrushBase;
    struct IXamlCompositionBrushBaseFactory;
    struct IXamlCompositionBrushBaseOverrides;
    struct IXamlCompositionBrushBaseProtected;
    struct IXamlCompositionBrushBaseStatics;
    struct IXamlLight;
    struct IXamlLightFactory;
    struct IXamlLightOverrides;
    struct IXamlLightProtected;
    struct IXamlLightStatics;
    struct AcrylicBrush;
    struct ArcSegment;
    struct BezierSegment;
    struct BitmapCache;
    struct Brush;
    struct BrushCollection;
    struct CacheMode;
    struct CompositeTransform;
    struct CompositionTarget;
    struct DoubleCollection;
    struct EllipseGeometry;
    struct FontFamily;
    struct GeneralTransform;
    struct Geometry;
    struct GeometryCollection;
    struct GeometryGroup;
    struct GradientBrush;
    struct GradientStop;
    struct GradientStopCollection;
    struct ImageBrush;
    struct ImageSource;
    struct LineGeometry;
    struct LineSegment;
    struct LinearGradientBrush;
    struct LoadedImageSourceLoadCompletedEventArgs;
    struct LoadedImageSurface;
    struct Matrix3DProjection;
    struct MatrixHelper;
    struct MatrixTransform;
    struct MediaTransportControlsThumbnailRequestedEventArgs;
    struct PartialMediaFailureDetectedEventArgs;
    struct PathFigure;
    struct PathFigureCollection;
    struct PathGeometry;
    struct PathSegment;
    struct PathSegmentCollection;
    struct PlaneProjection;
    struct PointCollection;
    struct PolyBezierSegment;
    struct PolyLineSegment;
    struct PolyQuadraticBezierSegment;
    struct Projection;
    struct QuadraticBezierSegment;
    struct RateChangedRoutedEventArgs;
    struct RectangleGeometry;
    struct RenderedEventArgs;
    struct RenderingEventArgs;
    struct RevealBackgroundBrush;
    struct RevealBorderBrush;
    struct RevealBrush;
    struct RotateTransform;
    struct ScaleTransform;
    struct Shadow;
    struct SkewTransform;
    struct SolidColorBrush;
    struct ThemeShadow;
    struct TileBrush;
    struct TimelineMarker;
    struct TimelineMarkerCollection;
    struct TimelineMarkerRoutedEventArgs;
    struct Transform;
    struct TransformCollection;
    struct TransformGroup;
    struct TranslateTransform;
    struct VisualTreeHelper;
    struct XamlCompositionBrushBase;
    struct XamlLight;
    struct Matrix;
    struct RateChangedRoutedEventHandler;
    struct TimelineMarkerRoutedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrush2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrushFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrushStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IAcrylicBrushStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IArcSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IArcSegmentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IBezierSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IBezierSegmentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IBitmapCache>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IBrushFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IBrushOverrides2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IBrushStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ICacheMode>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ICacheModeFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ICompositeTransform>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ICompositeTransformStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ICompositionTarget>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ICompositionTargetStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ICompositionTargetStatics3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IEllipseGeometry>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IEllipseGeometryStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IFontFamily>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IFontFamilyFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IFontFamilyStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGeneralTransform>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGeneralTransformFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGeneralTransformOverrides>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGeometry>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGeometryFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGeometryGroup>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGeometryGroupStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGeometryStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGradientBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGradientBrushFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGradientBrushStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGradientStop>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IGradientStopStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IImageBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IImageBrushStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IImageSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IImageSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILineGeometry>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILineGeometryStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILineSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILineSegmentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILinearGradientBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILinearGradientBrushFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILinearGradientBrushStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILoadedImageSurface>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IMatrix3DProjection>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IMatrixHelper>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IMatrixHelperStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IMatrixTransform>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IMatrixTransformStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPathFigure>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPathFigureStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPathGeometry>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPathGeometryStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPathSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPathSegmentFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPlaneProjection>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPlaneProjectionStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPolyBezierSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPolyLineSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPolyLineSegmentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IProjection>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IProjectionFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IQuadraticBezierSegment>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRectangleGeometry>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRectangleGeometryStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRenderedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRenderingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBackgroundBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBorderBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBorderBrushFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBrushFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRevealBrushStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRotateTransform>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IRotateTransformStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IScaleTransform>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IScaleTransformStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IShadow>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IShadowFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ISkewTransform>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ISkewTransformStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ISolidColorBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ISolidColorBrushFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ISolidColorBrushStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IThemeShadow>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IThemeShadowFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITileBrush>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITileBrushFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITileBrushStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITimelineMarker>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITimelineMarkerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITransform>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITransformFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITransformGroup>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITransformGroupStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITranslateTransform>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::ITranslateTransformStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IVisualTreeHelper>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IVisualTreeHelperStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBase>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLight>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLightFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLightOverrides>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLightProtected>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::IXamlLightStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Media::AcrylicBrush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::ArcSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::BezierSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::BitmapCache>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Brush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::BrushCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::CacheMode>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::CompositeTransform>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::CompositionTarget>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::DoubleCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::EllipseGeometry>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::FontFamily>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::GeneralTransform>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Geometry>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::GeometryCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::GeometryGroup>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::GradientBrush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::GradientStop>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::GradientStopCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::ImageBrush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::ImageSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::LineGeometry>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::LineSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::LinearGradientBrush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::LoadedImageSurface>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Matrix3DProjection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::MatrixHelper>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::MatrixTransform>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PathFigure>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PathFigureCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PathGeometry>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PathSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PathSegmentCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PlaneProjection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PointCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PolyBezierSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PolyLineSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::PolyQuadraticBezierSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Projection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::QuadraticBezierSegment>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::RateChangedRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::RectangleGeometry>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::RenderedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::RenderingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::RevealBackgroundBrush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::RevealBorderBrush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::RevealBrush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::RotateTransform>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::ScaleTransform>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Shadow>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::SkewTransform>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::SolidColorBrush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::ThemeShadow>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::TileBrush>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::TimelineMarker>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::TimelineMarkerCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::Transform>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::TransformCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::TransformGroup>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::TranslateTransform>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::VisualTreeHelper>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::XamlCompositionBrushBase>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::XamlLight>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Media::AcrylicBackgroundSource>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::AlignmentX>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::AlignmentY>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::AudioCategory>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::AudioDeviceType>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::BrushMappingMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::ColorInterpolationMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::ElementCompositeMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::FastPlayFallbackBehaviour>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::FillRule>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::GradientSpreadMethod>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::MediaCanPlayResponse>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::MediaElementState>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::PenLineCap>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::PenLineJoin>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::RevealBrushState>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::Stereo3DVideoPackingMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::Stereo3DVideoRenderMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::Stretch>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::StyleSimulations>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::SweepDirection>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Media::Matrix>{ using type = struct_category<double, double, double, double, double, double>; };
    template <> struct category<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::AcrylicBrush> = L"Windows.UI.Xaml.Media.AcrylicBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ArcSegment> = L"Windows.UI.Xaml.Media.ArcSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::BezierSegment> = L"Windows.UI.Xaml.Media.BezierSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::BitmapCache> = L"Windows.UI.Xaml.Media.BitmapCache";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Brush> = L"Windows.UI.Xaml.Media.Brush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::BrushCollection> = L"Windows.UI.Xaml.Media.BrushCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::CacheMode> = L"Windows.UI.Xaml.Media.CacheMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::CompositeTransform> = L"Windows.UI.Xaml.Media.CompositeTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::CompositionTarget> = L"Windows.UI.Xaml.Media.CompositionTarget";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::DoubleCollection> = L"Windows.UI.Xaml.Media.DoubleCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::EllipseGeometry> = L"Windows.UI.Xaml.Media.EllipseGeometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::FontFamily> = L"Windows.UI.Xaml.Media.FontFamily";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::GeneralTransform> = L"Windows.UI.Xaml.Media.GeneralTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Geometry> = L"Windows.UI.Xaml.Media.Geometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::GeometryCollection> = L"Windows.UI.Xaml.Media.GeometryCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::GeometryGroup> = L"Windows.UI.Xaml.Media.GeometryGroup";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::GradientBrush> = L"Windows.UI.Xaml.Media.GradientBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::GradientStop> = L"Windows.UI.Xaml.Media.GradientStop";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::GradientStopCollection> = L"Windows.UI.Xaml.Media.GradientStopCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ImageBrush> = L"Windows.UI.Xaml.Media.ImageBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ImageSource> = L"Windows.UI.Xaml.Media.ImageSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::LineGeometry> = L"Windows.UI.Xaml.Media.LineGeometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::LineSegment> = L"Windows.UI.Xaml.Media.LineSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::LinearGradientBrush> = L"Windows.UI.Xaml.Media.LinearGradientBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> = L"Windows.UI.Xaml.Media.LoadedImageSourceLoadCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::LoadedImageSurface> = L"Windows.UI.Xaml.Media.LoadedImageSurface";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Matrix3DProjection> = L"Windows.UI.Xaml.Media.Matrix3DProjection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::MatrixHelper> = L"Windows.UI.Xaml.Media.MatrixHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::MatrixTransform> = L"Windows.UI.Xaml.Media.MatrixTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs> = L"Windows.UI.Xaml.Media.MediaTransportControlsThumbnailRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs> = L"Windows.UI.Xaml.Media.PartialMediaFailureDetectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PathFigure> = L"Windows.UI.Xaml.Media.PathFigure";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PathFigureCollection> = L"Windows.UI.Xaml.Media.PathFigureCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PathGeometry> = L"Windows.UI.Xaml.Media.PathGeometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PathSegment> = L"Windows.UI.Xaml.Media.PathSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PathSegmentCollection> = L"Windows.UI.Xaml.Media.PathSegmentCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PlaneProjection> = L"Windows.UI.Xaml.Media.PlaneProjection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PointCollection> = L"Windows.UI.Xaml.Media.PointCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PolyBezierSegment> = L"Windows.UI.Xaml.Media.PolyBezierSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PolyLineSegment> = L"Windows.UI.Xaml.Media.PolyLineSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PolyQuadraticBezierSegment> = L"Windows.UI.Xaml.Media.PolyQuadraticBezierSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Projection> = L"Windows.UI.Xaml.Media.Projection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::QuadraticBezierSegment> = L"Windows.UI.Xaml.Media.QuadraticBezierSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RateChangedRoutedEventArgs> = L"Windows.UI.Xaml.Media.RateChangedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RectangleGeometry> = L"Windows.UI.Xaml.Media.RectangleGeometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RenderedEventArgs> = L"Windows.UI.Xaml.Media.RenderedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RenderingEventArgs> = L"Windows.UI.Xaml.Media.RenderingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RevealBackgroundBrush> = L"Windows.UI.Xaml.Media.RevealBackgroundBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RevealBorderBrush> = L"Windows.UI.Xaml.Media.RevealBorderBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RevealBrush> = L"Windows.UI.Xaml.Media.RevealBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RotateTransform> = L"Windows.UI.Xaml.Media.RotateTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ScaleTransform> = L"Windows.UI.Xaml.Media.ScaleTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Shadow> = L"Windows.UI.Xaml.Media.Shadow";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::SkewTransform> = L"Windows.UI.Xaml.Media.SkewTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::SolidColorBrush> = L"Windows.UI.Xaml.Media.SolidColorBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ThemeShadow> = L"Windows.UI.Xaml.Media.ThemeShadow";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::TileBrush> = L"Windows.UI.Xaml.Media.TileBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::TimelineMarker> = L"Windows.UI.Xaml.Media.TimelineMarker";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::TimelineMarkerCollection> = L"Windows.UI.Xaml.Media.TimelineMarkerCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs> = L"Windows.UI.Xaml.Media.TimelineMarkerRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Transform> = L"Windows.UI.Xaml.Media.Transform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::TransformCollection> = L"Windows.UI.Xaml.Media.TransformCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::TransformGroup> = L"Windows.UI.Xaml.Media.TransformGroup";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::TranslateTransform> = L"Windows.UI.Xaml.Media.TranslateTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::VisualTreeHelper> = L"Windows.UI.Xaml.Media.VisualTreeHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::XamlCompositionBrushBase> = L"Windows.UI.Xaml.Media.XamlCompositionBrushBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::XamlLight> = L"Windows.UI.Xaml.Media.XamlLight";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::AcrylicBackgroundSource> = L"Windows.UI.Xaml.Media.AcrylicBackgroundSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::AlignmentX> = L"Windows.UI.Xaml.Media.AlignmentX";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::AlignmentY> = L"Windows.UI.Xaml.Media.AlignmentY";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::AudioCategory> = L"Windows.UI.Xaml.Media.AudioCategory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::AudioDeviceType> = L"Windows.UI.Xaml.Media.AudioDeviceType";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::BrushMappingMode> = L"Windows.UI.Xaml.Media.BrushMappingMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ColorInterpolationMode> = L"Windows.UI.Xaml.Media.ColorInterpolationMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ElementCompositeMode> = L"Windows.UI.Xaml.Media.ElementCompositeMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::FastPlayFallbackBehaviour> = L"Windows.UI.Xaml.Media.FastPlayFallbackBehaviour";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::FillRule> = L"Windows.UI.Xaml.Media.FillRule";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::GradientSpreadMethod> = L"Windows.UI.Xaml.Media.GradientSpreadMethod";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus> = L"Windows.UI.Xaml.Media.LoadedImageSourceLoadStatus";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::MediaCanPlayResponse> = L"Windows.UI.Xaml.Media.MediaCanPlayResponse";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::MediaElementState> = L"Windows.UI.Xaml.Media.MediaElementState";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PenLineCap> = L"Windows.UI.Xaml.Media.PenLineCap";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::PenLineJoin> = L"Windows.UI.Xaml.Media.PenLineJoin";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RevealBrushState> = L"Windows.UI.Xaml.Media.RevealBrushState";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Stereo3DVideoPackingMode> = L"Windows.UI.Xaml.Media.Stereo3DVideoPackingMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Stereo3DVideoRenderMode> = L"Windows.UI.Xaml.Media.Stereo3DVideoRenderMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Stretch> = L"Windows.UI.Xaml.Media.Stretch";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::StyleSimulations> = L"Windows.UI.Xaml.Media.StyleSimulations";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::SweepDirection> = L"Windows.UI.Xaml.Media.SweepDirection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::Matrix> = L"Windows.UI.Xaml.Media.Matrix";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IAcrylicBrush> = L"Windows.UI.Xaml.Media.IAcrylicBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IAcrylicBrush2> = L"Windows.UI.Xaml.Media.IAcrylicBrush2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IAcrylicBrushFactory> = L"Windows.UI.Xaml.Media.IAcrylicBrushFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IAcrylicBrushStatics> = L"Windows.UI.Xaml.Media.IAcrylicBrushStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IAcrylicBrushStatics2> = L"Windows.UI.Xaml.Media.IAcrylicBrushStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IArcSegment> = L"Windows.UI.Xaml.Media.IArcSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IArcSegmentStatics> = L"Windows.UI.Xaml.Media.IArcSegmentStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IBezierSegment> = L"Windows.UI.Xaml.Media.IBezierSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IBezierSegmentStatics> = L"Windows.UI.Xaml.Media.IBezierSegmentStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IBitmapCache> = L"Windows.UI.Xaml.Media.IBitmapCache";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IBrush> = L"Windows.UI.Xaml.Media.IBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IBrushFactory> = L"Windows.UI.Xaml.Media.IBrushFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IBrushOverrides2> = L"Windows.UI.Xaml.Media.IBrushOverrides2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IBrushStatics> = L"Windows.UI.Xaml.Media.IBrushStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ICacheMode> = L"Windows.UI.Xaml.Media.ICacheMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ICacheModeFactory> = L"Windows.UI.Xaml.Media.ICacheModeFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ICompositeTransform> = L"Windows.UI.Xaml.Media.ICompositeTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ICompositeTransformStatics> = L"Windows.UI.Xaml.Media.ICompositeTransformStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ICompositionTarget> = L"Windows.UI.Xaml.Media.ICompositionTarget";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ICompositionTargetStatics> = L"Windows.UI.Xaml.Media.ICompositionTargetStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ICompositionTargetStatics3> = L"Windows.UI.Xaml.Media.ICompositionTargetStatics3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IEllipseGeometry> = L"Windows.UI.Xaml.Media.IEllipseGeometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IEllipseGeometryStatics> = L"Windows.UI.Xaml.Media.IEllipseGeometryStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IFontFamily> = L"Windows.UI.Xaml.Media.IFontFamily";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IFontFamilyFactory> = L"Windows.UI.Xaml.Media.IFontFamilyFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IFontFamilyStatics2> = L"Windows.UI.Xaml.Media.IFontFamilyStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGeneralTransform> = L"Windows.UI.Xaml.Media.IGeneralTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGeneralTransformFactory> = L"Windows.UI.Xaml.Media.IGeneralTransformFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGeneralTransformOverrides> = L"Windows.UI.Xaml.Media.IGeneralTransformOverrides";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGeometry> = L"Windows.UI.Xaml.Media.IGeometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGeometryFactory> = L"Windows.UI.Xaml.Media.IGeometryFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGeometryGroup> = L"Windows.UI.Xaml.Media.IGeometryGroup";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGeometryGroupStatics> = L"Windows.UI.Xaml.Media.IGeometryGroupStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGeometryStatics> = L"Windows.UI.Xaml.Media.IGeometryStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGradientBrush> = L"Windows.UI.Xaml.Media.IGradientBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGradientBrushFactory> = L"Windows.UI.Xaml.Media.IGradientBrushFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGradientBrushStatics> = L"Windows.UI.Xaml.Media.IGradientBrushStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGradientStop> = L"Windows.UI.Xaml.Media.IGradientStop";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IGradientStopStatics> = L"Windows.UI.Xaml.Media.IGradientStopStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IImageBrush> = L"Windows.UI.Xaml.Media.IImageBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IImageBrushStatics> = L"Windows.UI.Xaml.Media.IImageBrushStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IImageSource> = L"Windows.UI.Xaml.Media.IImageSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IImageSourceFactory> = L"Windows.UI.Xaml.Media.IImageSourceFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILineGeometry> = L"Windows.UI.Xaml.Media.ILineGeometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILineGeometryStatics> = L"Windows.UI.Xaml.Media.ILineGeometryStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILineSegment> = L"Windows.UI.Xaml.Media.ILineSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILineSegmentStatics> = L"Windows.UI.Xaml.Media.ILineSegmentStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILinearGradientBrush> = L"Windows.UI.Xaml.Media.ILinearGradientBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILinearGradientBrushFactory> = L"Windows.UI.Xaml.Media.ILinearGradientBrushFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILinearGradientBrushStatics> = L"Windows.UI.Xaml.Media.ILinearGradientBrushStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs> = L"Windows.UI.Xaml.Media.ILoadedImageSourceLoadCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILoadedImageSurface> = L"Windows.UI.Xaml.Media.ILoadedImageSurface";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics> = L"Windows.UI.Xaml.Media.ILoadedImageSurfaceStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IMatrix3DProjection> = L"Windows.UI.Xaml.Media.IMatrix3DProjection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics> = L"Windows.UI.Xaml.Media.IMatrix3DProjectionStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IMatrixHelper> = L"Windows.UI.Xaml.Media.IMatrixHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IMatrixHelperStatics> = L"Windows.UI.Xaml.Media.IMatrixHelperStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IMatrixTransform> = L"Windows.UI.Xaml.Media.IMatrixTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IMatrixTransformStatics> = L"Windows.UI.Xaml.Media.IMatrixTransformStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs> = L"Windows.UI.Xaml.Media.IMediaTransportControlsThumbnailRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs> = L"Windows.UI.Xaml.Media.IPartialMediaFailureDetectedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2> = L"Windows.UI.Xaml.Media.IPartialMediaFailureDetectedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPathFigure> = L"Windows.UI.Xaml.Media.IPathFigure";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPathFigureStatics> = L"Windows.UI.Xaml.Media.IPathFigureStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPathGeometry> = L"Windows.UI.Xaml.Media.IPathGeometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPathGeometryStatics> = L"Windows.UI.Xaml.Media.IPathGeometryStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPathSegment> = L"Windows.UI.Xaml.Media.IPathSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPathSegmentFactory> = L"Windows.UI.Xaml.Media.IPathSegmentFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPlaneProjection> = L"Windows.UI.Xaml.Media.IPlaneProjection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPlaneProjectionStatics> = L"Windows.UI.Xaml.Media.IPlaneProjectionStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPolyBezierSegment> = L"Windows.UI.Xaml.Media.IPolyBezierSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics> = L"Windows.UI.Xaml.Media.IPolyBezierSegmentStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPolyLineSegment> = L"Windows.UI.Xaml.Media.IPolyLineSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPolyLineSegmentStatics> = L"Windows.UI.Xaml.Media.IPolyLineSegmentStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment> = L"Windows.UI.Xaml.Media.IPolyQuadraticBezierSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics> = L"Windows.UI.Xaml.Media.IPolyQuadraticBezierSegmentStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IProjection> = L"Windows.UI.Xaml.Media.IProjection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IProjectionFactory> = L"Windows.UI.Xaml.Media.IProjectionFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IQuadraticBezierSegment> = L"Windows.UI.Xaml.Media.IQuadraticBezierSegment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics> = L"Windows.UI.Xaml.Media.IQuadraticBezierSegmentStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs> = L"Windows.UI.Xaml.Media.IRateChangedRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRectangleGeometry> = L"Windows.UI.Xaml.Media.IRectangleGeometry";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRectangleGeometryStatics> = L"Windows.UI.Xaml.Media.IRectangleGeometryStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRenderedEventArgs> = L"Windows.UI.Xaml.Media.IRenderedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRenderingEventArgs> = L"Windows.UI.Xaml.Media.IRenderingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRevealBackgroundBrush> = L"Windows.UI.Xaml.Media.IRevealBackgroundBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory> = L"Windows.UI.Xaml.Media.IRevealBackgroundBrushFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRevealBorderBrush> = L"Windows.UI.Xaml.Media.IRevealBorderBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRevealBorderBrushFactory> = L"Windows.UI.Xaml.Media.IRevealBorderBrushFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRevealBrush> = L"Windows.UI.Xaml.Media.IRevealBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRevealBrushFactory> = L"Windows.UI.Xaml.Media.IRevealBrushFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRevealBrushStatics> = L"Windows.UI.Xaml.Media.IRevealBrushStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRotateTransform> = L"Windows.UI.Xaml.Media.IRotateTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IRotateTransformStatics> = L"Windows.UI.Xaml.Media.IRotateTransformStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IScaleTransform> = L"Windows.UI.Xaml.Media.IScaleTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IScaleTransformStatics> = L"Windows.UI.Xaml.Media.IScaleTransformStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IShadow> = L"Windows.UI.Xaml.Media.IShadow";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IShadowFactory> = L"Windows.UI.Xaml.Media.IShadowFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ISkewTransform> = L"Windows.UI.Xaml.Media.ISkewTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ISkewTransformStatics> = L"Windows.UI.Xaml.Media.ISkewTransformStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ISolidColorBrush> = L"Windows.UI.Xaml.Media.ISolidColorBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ISolidColorBrushFactory> = L"Windows.UI.Xaml.Media.ISolidColorBrushFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ISolidColorBrushStatics> = L"Windows.UI.Xaml.Media.ISolidColorBrushStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IThemeShadow> = L"Windows.UI.Xaml.Media.IThemeShadow";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IThemeShadowFactory> = L"Windows.UI.Xaml.Media.IThemeShadowFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITileBrush> = L"Windows.UI.Xaml.Media.ITileBrush";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITileBrushFactory> = L"Windows.UI.Xaml.Media.ITileBrushFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITileBrushStatics> = L"Windows.UI.Xaml.Media.ITileBrushStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITimelineMarker> = L"Windows.UI.Xaml.Media.ITimelineMarker";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs> = L"Windows.UI.Xaml.Media.ITimelineMarkerRoutedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITimelineMarkerStatics> = L"Windows.UI.Xaml.Media.ITimelineMarkerStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITransform> = L"Windows.UI.Xaml.Media.ITransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITransformFactory> = L"Windows.UI.Xaml.Media.ITransformFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITransformGroup> = L"Windows.UI.Xaml.Media.ITransformGroup";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITransformGroupStatics> = L"Windows.UI.Xaml.Media.ITransformGroupStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITranslateTransform> = L"Windows.UI.Xaml.Media.ITranslateTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::ITranslateTransformStatics> = L"Windows.UI.Xaml.Media.ITranslateTransformStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IVisualTreeHelper> = L"Windows.UI.Xaml.Media.IVisualTreeHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IVisualTreeHelperStatics> = L"Windows.UI.Xaml.Media.IVisualTreeHelperStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2> = L"Windows.UI.Xaml.Media.IVisualTreeHelperStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3> = L"Windows.UI.Xaml.Media.IVisualTreeHelperStatics3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBase> = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory> = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides> = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseOverrides";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected> = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseProtected";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics> = L"Windows.UI.Xaml.Media.IXamlCompositionBrushBaseStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlLight> = L"Windows.UI.Xaml.Media.IXamlLight";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlLightFactory> = L"Windows.UI.Xaml.Media.IXamlLightFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlLightOverrides> = L"Windows.UI.Xaml.Media.IXamlLightOverrides";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlLightProtected> = L"Windows.UI.Xaml.Media.IXamlLightProtected";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::IXamlLightStatics> = L"Windows.UI.Xaml.Media.IXamlLightStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler> = L"Windows.UI.Xaml.Media.RateChangedRoutedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler> = L"Windows.UI.Xaml.Media.TimelineMarkerRoutedEventHandler";
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IAcrylicBrush>{ 0x79BBCF4E,0xCD66,0x4F1B,{ 0xA8,0xB6,0xCD,0x6D,0x29,0x77,0xC1,0x8D } }; // 79BBCF4E-CD66-4F1B-A8B6-CD6D2977C18D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IAcrylicBrush2>{ 0xC9645383,0xB19E,0x5AC0,{ 0x86,0xFF,0x3D,0x90,0x50,0x6D,0xBC,0xDA } }; // C9645383-B19E-5AC0-86FF-3D90506DBCDA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IAcrylicBrushFactory>{ 0x81A32568,0xF6CC,0x4013,{ 0x83,0x63,0x92,0x8A,0xE2,0x3B,0x7A,0x61 } }; // 81A32568-F6CC-4013-8363-928AE23B7A61
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IAcrylicBrushStatics>{ 0x2787FD79,0xA3DA,0x423F,{ 0xB8,0x1A,0x59,0x91,0x47,0x97,0x15,0x23 } }; // 2787FD79-A3DA-423F-B81A-599147971523
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IAcrylicBrushStatics2>{ 0x129188A8,0xBF11,0x5BBC,{ 0x84,0x45,0x8C,0x51,0x0E,0x59,0x26,0xC0 } }; // 129188A8-BF11-5BBC-8445-8C510E5926C0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IArcSegment>{ 0x07940C5F,0x63FB,0x4469,{ 0x91,0xBE,0xF1,0x09,0x7C,0x16,0x80,0x52 } }; // 07940C5F-63FB-4469-91BE-F1097C168052
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IArcSegmentStatics>{ 0x82348F6E,0x8A69,0x4204,{ 0x9C,0x12,0x72,0x07,0xDF,0x31,0x76,0x43 } }; // 82348F6E-8A69-4204-9C12-7207DF317643
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IBezierSegment>{ 0xAF4BB9EE,0x8984,0x49B7,{ 0x81,0xDF,0x3F,0x35,0x99,0x4B,0x95,0xEB } }; // AF4BB9EE-8984-49B7-81DF-3F35994B95EB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IBezierSegmentStatics>{ 0xC0287BAC,0x1410,0x4530,{ 0x84,0x52,0x1C,0x9D,0x0A,0xD1,0xF3,0x41 } }; // C0287BAC-1410-4530-8452-1C9D0AD1F341
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IBitmapCache>{ 0x79C2219E,0x44D2,0x4610,{ 0x97,0x35,0x9B,0xEC,0x83,0x80,0x9E,0xCF } }; // 79C2219E-44D2-4610-9735-9BEC83809ECF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IBrush>{ 0x8806A321,0x1E06,0x422C,{ 0xA1,0xCC,0x01,0x69,0x65,0x59,0xE0,0x21 } }; // 8806A321-1E06-422C-A1CC-01696559E021
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IBrushFactory>{ 0x399658A2,0x14FB,0x4B8F,{ 0x83,0xE6,0x6E,0x3D,0xAB,0x12,0x06,0x9B } }; // 399658A2-14FB-4B8F-83E6-6E3DAB12069B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IBrushOverrides2>{ 0xD092B151,0xD83B,0x5A81,{ 0xA7,0x1E,0xA1,0xC7,0xF8,0xAD,0x69,0x63 } }; // D092B151-D83B-5A81-A71E-A1C7F8AD6963
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IBrushStatics>{ 0xE70C3102,0x0225,0x47F5,{ 0xB2,0x2E,0x04,0x67,0x61,0x9F,0x6A,0x22 } }; // E70C3102-0225-47F5-B22E-0467619F6A22
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ICacheMode>{ 0x98DC8B11,0xC6F9,0x4DAB,{ 0xB8,0x38,0x5F,0xD5,0xEC,0x8C,0x73,0x50 } }; // 98DC8B11-C6F9-4DAB-B838-5FD5EC8C7350
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ICacheModeFactory>{ 0xEB1F8C5B,0x0ABB,0x4E70,{ 0xB8,0xA8,0x62,0x0D,0x0D,0x95,0x3A,0xB2 } }; // EB1F8C5B-0ABB-4E70-B8A8-620D0D953AB2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ICompositeTransform>{ 0xC8A4385B,0xF24A,0x4701,{ 0xA2,0x65,0xA7,0x88,0x46,0xF1,0x42,0xB9 } }; // C8A4385B-F24A-4701-A265-A78846F142B9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ICompositeTransformStatics>{ 0x2F190C08,0x8266,0x496F,{ 0x96,0x53,0xA1,0x8B,0xD4,0xF8,0x36,0xAA } }; // 2F190C08-8266-496F-9653-A18BD4F836AA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ICompositionTarget>{ 0x26CFBFF0,0x713C,0x4BEC,{ 0x88,0x03,0xE1,0x01,0xF7,0xB1,0x4E,0xD3 } }; // 26CFBFF0-713C-4BEC-8803-E101F7B14ED3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ICompositionTargetStatics>{ 0x2B1AF03D,0x1ED2,0x4B59,{ 0xBD,0x00,0x75,0x94,0xEE,0x92,0x83,0x2B } }; // 2B1AF03D-1ED2-4B59-BD00-7594EE92832B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ICompositionTargetStatics3>{ 0xBC0A7CD9,0x6750,0x4708,{ 0x99,0x4C,0x20,0x28,0xE0,0x31,0x2A,0xC8 } }; // BC0A7CD9-6750-4708-994C-2028E0312AC8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IEllipseGeometry>{ 0xD4F61BBA,0x4EA2,0x40D6,{ 0xAA,0x6C,0x8D,0x38,0xAA,0x87,0x65,0x1F } }; // D4F61BBA-4EA2-40D6-AA6C-8D38AA87651F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IEllipseGeometryStatics>{ 0x1744DB47,0xF635,0x4B16,{ 0xAE,0xE6,0xE0,0x52,0xA6,0x5D,0xEF,0xB2 } }; // 1744DB47-F635-4B16-AEE6-E052A65DEFB2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IFontFamily>{ 0x92467E64,0xD66A,0x4CF4,{ 0x93,0x22,0x3D,0x23,0xB3,0xC0,0xC3,0x61 } }; // 92467E64-D66A-4CF4-9322-3D23B3C0C361
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IFontFamilyFactory>{ 0xD5603377,0x3DAE,0x4DCD,{ 0xAF,0x09,0xF9,0x49,0x8E,0x9E,0xC6,0x59 } }; // D5603377-3DAE-4DCD-AF09-F9498E9EC659
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IFontFamilyStatics2>{ 0x52AD7AF9,0x37E6,0x4297,{ 0xA2,0x38,0x97,0xFB,0x6A,0x40,0x8D,0x9E } }; // 52AD7AF9-37E6-4297-A238-97FB6A408D9E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGeneralTransform>{ 0xA06798B7,0xA2EC,0x415F,{ 0xAD,0xE2,0xEA,0xDE,0x93,0x33,0xF2,0xC7 } }; // A06798B7-A2EC-415F-ADE2-EADE9333F2C7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGeneralTransformFactory>{ 0x7A25C930,0x29C4,0x4E31,{ 0xB6,0xF9,0xDE,0xDD,0x52,0xE4,0xDF,0x1B } }; // 7A25C930-29C4-4E31-B6F9-DEDD52E4DF1B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGeneralTransformOverrides>{ 0x4F121083,0x24CF,0x4524,{ 0x90,0xAD,0x8A,0x42,0xB1,0xC1,0x27,0x83 } }; // 4F121083-24CF-4524-90AD-8A42B1C12783
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGeometry>{ 0xFA123889,0x0ACD,0x417B,{ 0xB6,0x2D,0x5C,0xA1,0xBF,0x4D,0xFC,0x0E } }; // FA123889-0ACD-417B-B62D-5CA1BF4DFC0E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGeometryFactory>{ 0xF65DAF23,0xD5FD,0x42F9,{ 0xB3,0x2A,0x92,0x9C,0x5A,0x4B,0x54,0xE1 } }; // F65DAF23-D5FD-42F9-B32A-929C5A4B54E1
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGeometryGroup>{ 0x55225A61,0x8677,0x4C8C,{ 0x8E,0x46,0xEE,0x3D,0xC3,0x55,0x11,0x4B } }; // 55225A61-8677-4C8C-8E46-EE3DC355114B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGeometryGroupStatics>{ 0x56C955F4,0x8496,0x4BB6,{ 0xAB,0xF0,0x61,0x7B,0x1F,0xE7,0x8B,0x45 } }; // 56C955F4-8496-4BB6-ABF0-617B1FE78B45
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGeometryStatics>{ 0x7A70AA8C,0x0B06,0x465F,{ 0xB6,0x37,0x9A,0x47,0xE5,0xA7,0x01,0x11 } }; // 7A70AA8C-0B06-465F-B637-9A47E5A70111
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGradientBrush>{ 0x2166E69F,0x935A,0x4191,{ 0x8E,0x3C,0x1C,0x8D,0xFD,0xFC,0xDC,0x78 } }; // 2166E69F-935A-4191-8E3C-1C8DFDFCDC78
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGradientBrushFactory>{ 0xED4779CA,0x45BD,0x4131,{ 0xB6,0x25,0xBE,0x86,0xE0,0x7C,0x61,0x12 } }; // ED4779CA-45BD-4131-B625-BE86E07C6112
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGradientBrushStatics>{ 0x961661F9,0x8BB4,0x4E6C,{ 0xB9,0x23,0xB5,0xD7,0x87,0xE0,0xF1,0xA9 } }; // 961661F9-8BB4-4E6C-B923-B5D787E0F1A9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGradientStop>{ 0x665F44FE,0x2E59,0x4C4A,{ 0xAB,0x53,0x07,0x6A,0x10,0x0C,0xCD,0x81 } }; // 665F44FE-2E59-4C4A-AB53-076A100CCD81
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IGradientStopStatics>{ 0x602A6D75,0x6193,0x4FE5,{ 0x8E,0x82,0xC7,0xC6,0xF6,0xFE,0xBA,0xFD } }; // 602A6D75-6193-4FE5-8E82-C7C6F6FEBAFD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IImageBrush>{ 0x9FD11377,0xC12A,0x4493,{ 0xBF,0x7D,0xF3,0xA8,0xAD,0x74,0xB5,0x54 } }; // 9FD11377-C12A-4493-BF7D-F3A8AD74B554
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IImageBrushStatics>{ 0x1255B1B2,0xDD18,0x42E5,{ 0x89,0x2C,0xEA,0xE3,0x0C,0x30,0x5B,0x8C } }; // 1255B1B2-DD18-42E5-892C-EAE30C305B8C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IImageSource>{ 0x737EF309,0xEA41,0x4D96,{ 0xA7,0x1C,0x98,0xE9,0x8E,0xFC,0xAB,0x07 } }; // 737EF309-EA41-4D96-A71C-98E98EFCAB07
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IImageSourceFactory>{ 0x297EC001,0x2540,0x4E5A,{ 0xAB,0x66,0x88,0x03,0x5D,0xD3,0xDD,0xB5 } }; // 297EC001-2540-4E5A-AB66-88035DD3DDB5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILineGeometry>{ 0x30EDD4A2,0x8FC5,0x40AF,{ 0xA7,0xA2,0xC2,0x7F,0xE7,0xAA,0x13,0x63 } }; // 30EDD4A2-8FC5-40AF-A7A2-C27FE7AA1363
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILineGeometryStatics>{ 0x578AE763,0x5562,0x4EE4,{ 0x87,0x03,0xEA,0x40,0x36,0xD8,0x91,0xE3 } }; // 578AE763-5562-4EE4-8703-EA4036D891E3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILineSegment>{ 0xEF6A2E25,0x3FF0,0x4420,{ 0xA4,0x11,0x71,0x82,0xA4,0xCE,0xCB,0x15 } }; // EF6A2E25-3FF0-4420-A411-7182A4CECB15
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILineSegmentStatics>{ 0x9FCAB141,0x04C0,0x4AFB,{ 0x87,0xB3,0xE8,0x00,0xB9,0x69,0xB8,0x94 } }; // 9FCAB141-04C0-4AFB-87B3-E800B969B894
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILinearGradientBrush>{ 0x8E96D16B,0xBB84,0x4C6F,{ 0x9D,0xBF,0x9D,0x6C,0x5C,0x6D,0x9C,0x39 } }; // 8E96D16B-BB84-4C6F-9DBF-9D6C5C6D9C39
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILinearGradientBrushFactory>{ 0x0AE0861C,0x1E7A,0x4FED,{ 0x98,0x57,0xEA,0x8C,0xAA,0x79,0x84,0x90 } }; // 0AE0861C-1E7A-4FED-9857-EA8CAA798490
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILinearGradientBrushStatics>{ 0x7AF6E504,0x2DC3,0x40E3,{ 0xBE,0x0B,0xB3,0x14,0xC1,0x3C,0xB9,0x91 } }; // 7AF6E504-2DC3-40E3-BE0B-B314C13CB991
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>{ 0x1AC60B1E,0x7837,0x4489,{ 0xB3,0xE5,0xD0,0xD5,0xAD,0x0A,0x56,0xC4 } }; // 1AC60B1E-7837-4489-B3E5-D0D5AD0A56C4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILoadedImageSurface>{ 0x050C8313,0x6737,0x45BA,{ 0x85,0x31,0x33,0x09,0x4F,0xEB,0xEF,0x55 } }; // 050C8313-6737-45BA-8531-33094FEBEF55
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>{ 0x22B8EDF6,0x84AD,0x40AB,{ 0x93,0x7D,0x48,0x71,0x61,0x3E,0x76,0x5D } }; // 22B8EDF6-84AD-40AB-937D-4871613E765D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IMatrix3DProjection>{ 0x6F03E149,0xBFC9,0x4C01,{ 0xB5,0x78,0x50,0x33,0x8C,0xEC,0x97,0xFC } }; // 6F03E149-BFC9-4C01-B578-50338CEC97FC
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>{ 0xAE9D5895,0x41EC,0x4E37,{ 0xAB,0xAA,0x69,0xF4,0x1D,0x2F,0x87,0x6B } }; // AE9D5895-41EC-4E37-ABAA-69F41D2F876B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IMatrixHelper>{ 0xF3CF4882,0x06B5,0x48C8,{ 0x9E,0xB2,0x17,0x63,0xE9,0x36,0x40,0x38 } }; // F3CF4882-06B5-48C8-9EB2-1763E9364038
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IMatrixHelperStatics>{ 0xC18606A6,0x39F4,0x4B8A,{ 0x84,0x03,0x28,0xE5,0xE5,0xF0,0x33,0xB4 } }; // C18606A6-39F4-4B8A-8403-28E5E5F033B4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IMatrixTransform>{ 0xEDFDD551,0x5FED,0x45FC,{ 0xAE,0x62,0x92,0xA4,0xB6,0xCF,0x97,0x07 } }; // EDFDD551-5FED-45FC-AE62-92A4B6CF9707
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IMatrixTransformStatics>{ 0x43E02E47,0x15B8,0x4758,{ 0xBB,0x97,0x7D,0x52,0x42,0x0A,0xCC,0x5B } }; // 43E02E47-15B8-4758-BB97-7D52420ACC5B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>{ 0xE4A8B21C,0xE3C2,0x485C,{ 0xAE,0x69,0xF1,0x53,0x7B,0x76,0x75,0x5A } }; // E4A8B21C-E3C2-485C-AE69-F1537B76755A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>{ 0x02B65A91,0xE5A1,0x442B,{ 0x88,0xD3,0x2D,0xC1,0x27,0xBF,0xC5,0x9B } }; // 02B65A91-E5A1-442B-88D3-2DC127BFC59B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>{ 0x73074875,0x890D,0x416B,{ 0xB9,0xAE,0xE8,0x4D,0xFD,0x9C,0x4B,0x1B } }; // 73074875-890D-416B-B9AE-E84DFD9C4B1B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPathFigure>{ 0x5D955C8C,0x5FA9,0x4DDA,{ 0xA3,0xCC,0x10,0xFC,0xDC,0xAA,0x20,0xD7 } }; // 5D955C8C-5FA9-4DDA-A3CC-10FCDCAA20D7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPathFigureStatics>{ 0xB60591D9,0x2395,0x4317,{ 0x95,0x52,0x3A,0x58,0x52,0x6F,0x8C,0x7B } }; // B60591D9-2395-4317-9552-3A58526F8C7B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPathGeometry>{ 0x081B9DF8,0xBAE6,0x4BCB,{ 0x81,0x3C,0xBD,0xE0,0xE4,0x6D,0xC8,0xB7 } }; // 081B9DF8-BAE6-4BCB-813C-BDE0E46DC8B7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPathGeometryStatics>{ 0xD9E58BBA,0x2CBA,0x4741,{ 0x8F,0x8D,0x31,0x98,0xCF,0x51,0x86,0xB9 } }; // D9E58BBA-2CBA-4741-8F8D-3198CF5186B9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPathSegment>{ 0xFCFA71CF,0x9CE3,0x474F,{ 0x81,0x57,0x10,0xB6,0x43,0x5A,0x61,0x6B } }; // FCFA71CF-9CE3-474F-8157-10B6435A616B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPathSegmentFactory>{ 0x2A1C0AAE,0xECCD,0x4464,{ 0xA1,0x48,0x6F,0xFD,0xB3,0xAA,0x28,0x1F } }; // 2A1C0AAE-ECCD-4464-A148-6FFDB3AA281F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPlaneProjection>{ 0xE6F82BFA,0x6726,0x469A,{ 0xB2,0x59,0xA5,0x18,0x83,0x47,0xCA,0x8F } }; // E6F82BFA-6726-469A-B259-A5188347CA8F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPlaneProjectionStatics>{ 0xAD919C67,0x3BDC,0x4855,{ 0x89,0x69,0xD1,0xF9,0xA3,0xAD,0xC2,0x7D } }; // AD919C67-3BDC-4855-8969-D1F9A3ADC27D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPolyBezierSegment>{ 0x36805271,0x38C4,0x4BCF,{ 0x96,0xCD,0x02,0x8A,0x6D,0x38,0xAF,0x25 } }; // 36805271-38C4-4BCF-96CD-028A6D38AF25
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>{ 0x1D91A6DA,0x1492,0x4ACC,{ 0xBD,0x66,0xA4,0x96,0xF3,0xD8,0x29,0xD6 } }; // 1D91A6DA-1492-4ACC-BD66-A496F3D829D6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPolyLineSegment>{ 0x4B397F87,0xA2E6,0x479D,{ 0xBD,0xC8,0x6F,0x44,0x64,0x64,0x68,0x87 } }; // 4B397F87-A2E6-479D-BDC8-6F4464646887
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPolyLineSegmentStatics>{ 0xD64A2C87,0x33F1,0x4E70,{ 0xA4,0x7F,0xB4,0x98,0x1E,0xF6,0x48,0xA2 } }; // D64A2C87-33F1-4E70-A47F-B4981EF648A2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>{ 0xDD5CED7D,0xE6DB,0x4C96,{ 0xB6,0xA1,0x3F,0xCE,0x96,0xE9,0x87,0xA6 } }; // DD5CED7D-E6DB-4C96-B6A1-3FCE96E987A6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>{ 0xFDF5EB75,0x7AD5,0x4C89,{ 0x81,0x69,0x8C,0x97,0x86,0xAB,0xD9,0xEB } }; // FDF5EB75-7AD5-4C89-8169-8C9786ABD9EB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IProjection>{ 0xB3443557,0x7F39,0x4D04,{ 0xA8,0x9C,0x84,0x43,0x38,0xCA,0xC8,0x97 } }; // B3443557-7F39-4D04-A89C-844338CAC897
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IProjectionFactory>{ 0xC4F29CAB,0x60AD,0x4F24,{ 0xBD,0x27,0x9D,0x69,0xC3,0x12,0x7C,0x9A } }; // C4F29CAB-60AD-4F24-BD27-9D69C3127C9A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IQuadraticBezierSegment>{ 0x2C509A5B,0xBF18,0x455A,{ 0xA0,0x78,0x91,0x4B,0x52,0x32,0xD8,0xAF } }; // 2C509A5B-BF18-455A-A078-914B5232D8AF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>{ 0x69C78278,0x3C0B,0x4B4F,{ 0xB7,0xA2,0xF0,0x03,0xDE,0xD4,0x1B,0xB0 } }; // 69C78278-3C0B-4B4F-B7A2-F003DED41BB0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>{ 0x9016AA6F,0x3CA8,0x4C80,{ 0x8E,0x2F,0x88,0x51,0xA6,0x8F,0x13,0x1F } }; // 9016AA6F-3CA8-4C80-8E2F-8851A68F131F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRectangleGeometry>{ 0xA25A1F58,0xC575,0x4196,{ 0x91,0xCF,0x9F,0xDF,0xB1,0x04,0x45,0xC3 } }; // A25A1F58-C575-4196-91CF-9FDFB10445C3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRectangleGeometryStatics>{ 0x377F8DBA,0x7902,0x48E3,{ 0x83,0xBE,0x7C,0x80,0x02,0xA6,0x65,0x3C } }; // 377F8DBA-7902-48E3-83BE-7C8002A6653C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRenderedEventArgs>{ 0xE349817D,0x81C7,0x4938,{ 0x82,0x8C,0xA7,0xE2,0x79,0x7B,0x35,0xA6 } }; // E349817D-81C7-4938-828C-A7E2797B35A6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRenderingEventArgs>{ 0x5BF7D30D,0x9748,0x4AED,{ 0x83,0x80,0xD7,0x89,0x0E,0xB7,0x76,0xA0 } }; // 5BF7D30D-9748-4AED-8380-D7890EB776A0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRevealBackgroundBrush>{ 0x261DCC0E,0x1991,0x4CDF,{ 0xAE,0xE0,0x63,0x50,0xA3,0xF9,0x0B,0xB9 } }; // 261DCC0E-1991-4CDF-AEE0-6350A3F90BB9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>{ 0x8C56BCAA,0x02A5,0x4F45,{ 0x85,0x06,0x8D,0x39,0x22,0x8F,0x5D,0x3F } }; // 8C56BCAA-02A5-4F45-8506-8D39228F5D3F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRevealBorderBrush>{ 0x060BA115,0xC542,0x483C,{ 0x82,0x02,0x5F,0x03,0x33,0x18,0x66,0xC9 } }; // 060BA115-C542-483C-8202-5F03331866C9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRevealBorderBrushFactory>{ 0x94C25298,0xF5F8,0x4482,{ 0xA2,0x5C,0x67,0x58,0x50,0x1A,0x86,0x26 } }; // 94C25298-F5F8-4482-A25C-6758501A8626
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRevealBrush>{ 0x2036A0ED,0x8271,0x4398,{ 0x90,0x19,0x25,0x87,0x20,0x93,0xF1,0x3F } }; // 2036A0ED-8271-4398-9019-25872093F13F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRevealBrushFactory>{ 0x9D9379CE,0xE3A0,0x4AAF,{ 0xBE,0x37,0xEA,0x9D,0x9D,0xD4,0x31,0x05 } }; // 9D9379CE-E3A0-4AAF-BE37-EA9D9DD43105
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRevealBrushStatics>{ 0x190F2625,0x7209,0x4D42,{ 0xA8,0x47,0x1A,0xC4,0xBB,0xBB,0x34,0x99 } }; // 190F2625-7209-4D42-A847-1AC4BBBB3499
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRotateTransform>{ 0x688EA9B9,0x1E4E,0x4596,{ 0x86,0xE3,0x42,0x8B,0x27,0x33,0x4F,0xAF } }; // 688EA9B9-1E4E-4596-86E3-428B27334FAF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IRotateTransformStatics>{ 0xA131EB8A,0x51A3,0x41B6,{ 0xB9,0xD3,0xA1,0x0E,0x42,0x90,0x54,0xAB } }; // A131EB8A-51A3-41B6-B9D3-A10E429054AB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IScaleTransform>{ 0xED67F18D,0x936E,0x43AB,{ 0x92,0x9A,0xE9,0xCD,0x0A,0x51,0x1E,0x52 } }; // ED67F18D-936E-43AB-929A-E9CD0A511E52
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IScaleTransformStatics>{ 0x9D9436F4,0x40A7,0x46DD,{ 0x97,0x5A,0x07,0xD3,0x37,0xCD,0x85,0x2E } }; // 9D9436F4-40A7-46DD-975A-07D337CD852E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IShadow>{ 0x6813A583,0xF3B4,0x5FCF,{ 0x86,0x94,0x2C,0xD0,0xAE,0xFC,0x2F,0xAD } }; // 6813A583-F3B4-5FCF-8694-2CD0AEFC2FAD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IShadowFactory>{ 0x19899F25,0xD28B,0x51E6,{ 0x94,0xB0,0xD7,0xE7,0x09,0x68,0x63,0x05 } }; // 19899F25-D28B-51E6-94B0-D7E709686305
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ISkewTransform>{ 0x4E8A3B15,0x7A0F,0x4617,{ 0x9E,0x98,0x1E,0x65,0xBD,0xC9,0x21,0x15 } }; // 4E8A3B15-7A0F-4617-9E98-1E65BDC92115
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ISkewTransformStatics>{ 0xECD11D73,0x5614,0x4B31,{ 0xB6,0xAF,0xBE,0xAE,0x10,0x10,0x56,0x24 } }; // ECD11D73-5614-4B31-B6AF-BEAE10105624
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ISolidColorBrush>{ 0x9D850850,0x66F3,0x48DF,{ 0x9A,0x8F,0x82,0x4B,0xD5,0xE0,0x70,0xAF } }; // 9D850850-66F3-48DF-9A8F-824BD5E070AF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ISolidColorBrushFactory>{ 0xD935CE0C,0x86F5,0x4DA6,{ 0x8A,0x27,0xB1,0x61,0x9E,0xF7,0xF9,0x2B } }; // D935CE0C-86F5-4DA6-8A27-B1619EF7F92B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ISolidColorBrushStatics>{ 0xE1A65EFA,0x2B23,0x41BA,{ 0xB9,0xBA,0x70,0x94,0xEC,0x8E,0x4E,0x9F } }; // E1A65EFA-2B23-41BA-B9BA-7094EC8E4E9F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IThemeShadow>{ 0x3ECCAD09,0x7985,0x5F39,{ 0x8B,0x62,0x6C,0x10,0x69,0x6D,0xCA,0x6F } }; // 3ECCAD09-7985-5F39-8B62-6C10696DCA6F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IThemeShadowFactory>{ 0x2E71465D,0x0F67,0x590E,{ 0x83,0x1B,0x7E,0x5E,0x2A,0x32,0xB7,0x78 } }; // 2E71465D-0F67-590E-831B-7E5E2A32B778
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITileBrush>{ 0xC201CF06,0xCD84,0x48A5,{ 0x96,0x07,0x66,0x4D,0x73,0x61,0xCD,0x61 } }; // C201CF06-CD84-48A5-9607-664D7361CD61
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITileBrushFactory>{ 0xAA159F7C,0xED6A,0x4FB3,{ 0xB0,0x14,0xB5,0xC7,0xE3,0x79,0xA4,0xDE } }; // AA159F7C-ED6A-4FB3-B014-B5C7E379A4DE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITileBrushStatics>{ 0x3497C25B,0xB562,0x4E68,{ 0x84,0x35,0x23,0x99,0xF6,0xEB,0x94,0xD5 } }; // 3497C25B-B562-4E68-8435-2399F6EB94D5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITimelineMarker>{ 0xA68EF02D,0x45BA,0x4E50,{ 0x8C,0xAD,0xAA,0xEA,0x3A,0x22,0x7A,0xF5 } }; // A68EF02D-45BA-4E50-8CAD-AAEA3A227AF5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>{ 0x7C3B3EF3,0x2C88,0x4D9C,{ 0x99,0xB6,0x46,0xCD,0xBD,0x48,0xD4,0xC1 } }; // 7C3B3EF3-2C88-4D9C-99B6-46CDBD48D4C1
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITimelineMarkerStatics>{ 0xC4AEF0C6,0x16A3,0x484B,{ 0x87,0xF5,0x65,0x28,0xB8,0xF0,0x4A,0x47 } }; // C4AEF0C6-16A3-484B-87F5-6528B8F04A47
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITransform>{ 0x4DF74078,0xBFD6,0x4ED1,{ 0x96,0x82,0xD2,0xFD,0x8B,0xF2,0xFE,0x6F } }; // 4DF74078-BFD6-4ED1-9682-D2FD8BF2FE6F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITransformFactory>{ 0x1A955A66,0x7CF4,0x4320,{ 0xB4,0x16,0x61,0x81,0x19,0x2F,0xCC,0x6D } }; // 1A955A66-7CF4-4320-B416-6181192FCC6D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITransformGroup>{ 0x63418CCC,0x8D2D,0x4737,{ 0xB9,0x51,0x2A,0xFC,0xE1,0xDD,0xC4,0xC4 } }; // 63418CCC-8D2D-4737-B951-2AFCE1DDC4C4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITransformGroupStatics>{ 0x25312F2A,0xCFAB,0x4B24,{ 0x97,0x13,0x5B,0xDE,0xAD,0x19,0x29,0xC0 } }; // 25312F2A-CFAB-4B24-9713-5BDEAD1929C0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITranslateTransform>{ 0xC975905C,0x3C36,0x4229,{ 0x81,0x7B,0x17,0x8F,0x64,0xC0,0xE1,0x13 } }; // C975905C-3C36-4229-817B-178F64C0E113
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::ITranslateTransformStatics>{ 0xF419AA91,0xE042,0x4111,{ 0x9C,0x2F,0xD2,0x01,0x30,0x41,0x23,0xDD } }; // F419AA91-E042-4111-9C2F-D201304123DD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IVisualTreeHelper>{ 0x24B935E3,0x52C7,0x4141,{ 0x8B,0xAC,0xA7,0x3D,0x06,0x13,0x05,0x69 } }; // 24B935E3-52C7-4141-8BAC-A73D06130569
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IVisualTreeHelperStatics>{ 0xE75758C4,0xD25D,0x4B1D,{ 0x97,0x1F,0x59,0x6F,0x17,0xF1,0x2B,0xAA } }; // E75758C4-D25D-4B1D-971F-596F17F12BAA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>{ 0x07BCD176,0x869F,0x44A7,{ 0x87,0x97,0x21,0x03,0xA4,0xC3,0xE4,0x7A } }; // 07BCD176-869F-44A7-8797-2103A4C3E47A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>{ 0x40420D50,0xCA16,0x57DA,{ 0x8A,0xAC,0x94,0x4C,0x8A,0xF5,0x77,0xFD } }; // 40420D50-CA16-57DA-8AAC-944C8AF577FD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBase>{ 0x03E432D9,0xB35C,0x4A79,{ 0x81,0x1C,0xC5,0x65,0x20,0x04,0xDA,0x0E } }; // 03E432D9-B35C-4A79-811C-C5652004DA0E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>{ 0x394F0823,0x2451,0x4ED8,{ 0xBD,0x24,0x48,0x81,0x49,0xB3,0x42,0x8D } }; // 394F0823-2451-4ED8-BD24-488149B3428D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>{ 0xD19127F1,0x38B4,0x4EA1,{ 0x8F,0x33,0x84,0x96,0x29,0xA4,0xC9,0xC1 } }; // D19127F1-38B4-4EA1-8F33-849629A4C9C1
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>{ 0x1513F3D8,0x0457,0x4E1C,{ 0xAD,0x77,0x11,0xC1,0xD9,0x87,0x97,0x43 } }; // 1513F3D8-0457-4E1C-AD77-11C1D9879743
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>{ 0x4FD49B06,0x061A,0x441F,{ 0xB9,0x7A,0xAD,0xFB,0xD4,0x1A,0xE6,0x81 } }; // 4FD49B06-061A-441F-B97A-ADFBD41AE681
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlLight>{ 0x0CC3FC1F,0xB327,0x4A18,{ 0x96,0x48,0x7C,0x84,0xDB,0x26,0xCE,0x22 } }; // 0CC3FC1F-B327-4A18-9648-7C84DB26CE22
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlLightFactory>{ 0x87DED768,0x3055,0x43B8,{ 0x8E,0xF6,0x79,0x8D,0xC4,0xC2,0x32,0x9A } }; // 87DED768-3055-43B8-8EF6-798DC4C2329A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlLightOverrides>{ 0x7C6296C7,0x0173,0x48E1,{ 0xB7,0x3D,0x7F,0xA2,0x16,0xA9,0xAC,0x28 } }; // 7C6296C7-0173-48E1-B73D-7FA216A9AC28
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlLightProtected>{ 0x5ECF220B,0x1252,0x43D0,{ 0x97,0x29,0x6E,0xA6,0x92,0x04,0x68,0x38 } }; // 5ECF220B-1252-43D0-9729-6EA692046838
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::IXamlLightStatics>{ 0xB5EA9D69,0xB508,0x4E9C,{ 0xBD,0x27,0x6B,0x04,0x4B,0x5F,0x78,0xA0 } }; // B5EA9D69-B508-4E9C-BD27-6B044B5F78A0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler>{ 0x08E9A257,0xAE05,0x489B,{ 0x88,0x39,0x28,0xC6,0x22,0x5D,0x23,0x49 } }; // 08E9A257-AE05-489B-8839-28C6225D2349
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler>{ 0x72E2FA9C,0x6DEA,0x4CBE,{ 0xA1,0x59,0x06,0xCE,0x95,0xFB,0xEC,0xED } }; // 72E2FA9C-6DEA-4CBE-A159-06CE95FBECED
    template <> struct default_interface<Windows::UI::Xaml::Media::AcrylicBrush>{ using type = Windows::UI::Xaml::Media::IAcrylicBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::ArcSegment>{ using type = Windows::UI::Xaml::Media::IArcSegment; };
    template <> struct default_interface<Windows::UI::Xaml::Media::BezierSegment>{ using type = Windows::UI::Xaml::Media::IBezierSegment; };
    template <> struct default_interface<Windows::UI::Xaml::Media::BitmapCache>{ using type = Windows::UI::Xaml::Media::IBitmapCache; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Brush>{ using type = Windows::UI::Xaml::Media::IBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::BrushCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Brush>; };
    template <> struct default_interface<Windows::UI::Xaml::Media::CacheMode>{ using type = Windows::UI::Xaml::Media::ICacheMode; };
    template <> struct default_interface<Windows::UI::Xaml::Media::CompositeTransform>{ using type = Windows::UI::Xaml::Media::ICompositeTransform; };
    template <> struct default_interface<Windows::UI::Xaml::Media::CompositionTarget>{ using type = Windows::UI::Xaml::Media::ICompositionTarget; };
    template <> struct default_interface<Windows::UI::Xaml::Media::DoubleCollection>{ using type = Windows::Foundation::Collections::IVector<double>; };
    template <> struct default_interface<Windows::UI::Xaml::Media::EllipseGeometry>{ using type = Windows::UI::Xaml::Media::IEllipseGeometry; };
    template <> struct default_interface<Windows::UI::Xaml::Media::FontFamily>{ using type = Windows::UI::Xaml::Media::IFontFamily; };
    template <> struct default_interface<Windows::UI::Xaml::Media::GeneralTransform>{ using type = Windows::UI::Xaml::Media::IGeneralTransform; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Geometry>{ using type = Windows::UI::Xaml::Media::IGeometry; };
    template <> struct default_interface<Windows::UI::Xaml::Media::GeometryCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Geometry>; };
    template <> struct default_interface<Windows::UI::Xaml::Media::GeometryGroup>{ using type = Windows::UI::Xaml::Media::IGeometryGroup; };
    template <> struct default_interface<Windows::UI::Xaml::Media::GradientBrush>{ using type = Windows::UI::Xaml::Media::IGradientBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::GradientStop>{ using type = Windows::UI::Xaml::Media::IGradientStop; };
    template <> struct default_interface<Windows::UI::Xaml::Media::GradientStopCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::GradientStop>; };
    template <> struct default_interface<Windows::UI::Xaml::Media::ImageBrush>{ using type = Windows::UI::Xaml::Media::IImageBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::ImageSource>{ using type = Windows::UI::Xaml::Media::IImageSource; };
    template <> struct default_interface<Windows::UI::Xaml::Media::LineGeometry>{ using type = Windows::UI::Xaml::Media::ILineGeometry; };
    template <> struct default_interface<Windows::UI::Xaml::Media::LineSegment>{ using type = Windows::UI::Xaml::Media::ILineSegment; };
    template <> struct default_interface<Windows::UI::Xaml::Media::LinearGradientBrush>{ using type = Windows::UI::Xaml::Media::ILinearGradientBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs>{ using type = Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::LoadedImageSurface>{ using type = Windows::UI::Xaml::Media::ILoadedImageSurface; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Matrix3DProjection>{ using type = Windows::UI::Xaml::Media::IMatrix3DProjection; };
    template <> struct default_interface<Windows::UI::Xaml::Media::MatrixHelper>{ using type = Windows::UI::Xaml::Media::IMatrixHelper; };
    template <> struct default_interface<Windows::UI::Xaml::Media::MatrixTransform>{ using type = Windows::UI::Xaml::Media::IMatrixTransform; };
    template <> struct default_interface<Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs>{ using type = Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>{ using type = Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathFigure>{ using type = Windows::UI::Xaml::Media::IPathFigure; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathFigureCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathFigure>; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathGeometry>{ using type = Windows::UI::Xaml::Media::IPathGeometry; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathSegment>{ using type = Windows::UI::Xaml::Media::IPathSegment; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PathSegmentCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathSegment>; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PlaneProjection>{ using type = Windows::UI::Xaml::Media::IPlaneProjection; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PointCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::Foundation::Point>; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PolyBezierSegment>{ using type = Windows::UI::Xaml::Media::IPolyBezierSegment; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PolyLineSegment>{ using type = Windows::UI::Xaml::Media::IPolyLineSegment; };
    template <> struct default_interface<Windows::UI::Xaml::Media::PolyQuadraticBezierSegment>{ using type = Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Projection>{ using type = Windows::UI::Xaml::Media::IProjection; };
    template <> struct default_interface<Windows::UI::Xaml::Media::QuadraticBezierSegment>{ using type = Windows::UI::Xaml::Media::IQuadraticBezierSegment; };
    template <> struct default_interface<Windows::UI::Xaml::Media::RateChangedRoutedEventArgs>{ using type = Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::RectangleGeometry>{ using type = Windows::UI::Xaml::Media::IRectangleGeometry; };
    template <> struct default_interface<Windows::UI::Xaml::Media::RenderedEventArgs>{ using type = Windows::UI::Xaml::Media::IRenderedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::RenderingEventArgs>{ using type = Windows::UI::Xaml::Media::IRenderingEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::RevealBackgroundBrush>{ using type = Windows::UI::Xaml::Media::IRevealBackgroundBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::RevealBorderBrush>{ using type = Windows::UI::Xaml::Media::IRevealBorderBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::RevealBrush>{ using type = Windows::UI::Xaml::Media::IRevealBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::RotateTransform>{ using type = Windows::UI::Xaml::Media::IRotateTransform; };
    template <> struct default_interface<Windows::UI::Xaml::Media::ScaleTransform>{ using type = Windows::UI::Xaml::Media::IScaleTransform; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Shadow>{ using type = Windows::UI::Xaml::Media::IShadow; };
    template <> struct default_interface<Windows::UI::Xaml::Media::SkewTransform>{ using type = Windows::UI::Xaml::Media::ISkewTransform; };
    template <> struct default_interface<Windows::UI::Xaml::Media::SolidColorBrush>{ using type = Windows::UI::Xaml::Media::ISolidColorBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::ThemeShadow>{ using type = Windows::UI::Xaml::Media::IThemeShadow; };
    template <> struct default_interface<Windows::UI::Xaml::Media::TileBrush>{ using type = Windows::UI::Xaml::Media::ITileBrush; };
    template <> struct default_interface<Windows::UI::Xaml::Media::TimelineMarker>{ using type = Windows::UI::Xaml::Media::ITimelineMarker; };
    template <> struct default_interface<Windows::UI::Xaml::Media::TimelineMarkerCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::TimelineMarker>; };
    template <> struct default_interface<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs>{ using type = Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Media::Transform>{ using type = Windows::UI::Xaml::Media::ITransform; };
    template <> struct default_interface<Windows::UI::Xaml::Media::TransformCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Transform>; };
    template <> struct default_interface<Windows::UI::Xaml::Media::TransformGroup>{ using type = Windows::UI::Xaml::Media::ITransformGroup; };
    template <> struct default_interface<Windows::UI::Xaml::Media::TranslateTransform>{ using type = Windows::UI::Xaml::Media::ITranslateTransform; };
    template <> struct default_interface<Windows::UI::Xaml::Media::VisualTreeHelper>{ using type = Windows::UI::Xaml::Media::IVisualTreeHelper; };
    template <> struct default_interface<Windows::UI::Xaml::Media::XamlCompositionBrushBase>{ using type = Windows::UI::Xaml::Media::IXamlCompositionBrushBase; };
    template <> struct default_interface<Windows::UI::Xaml::Media::XamlLight>{ using type = Windows::UI::Xaml::Media::IXamlLight; };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundSource(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BackgroundSource(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TintColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_TintColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_TintOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_TintOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_TintTransitionDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_TintTransitionDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysUseFallback(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlwaysUseFallback(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrush2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TintLuminosityOpacity(void**) noexcept = 0;
            virtual int32_t __stdcall put_TintLuminosityOpacity(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BackgroundSourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TintColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TintOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TintTransitionDurationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysUseFallbackProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IAcrylicBrushStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TintLuminosityOpacityProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IArcSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall put_Size(Windows::Foundation::Size) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngle(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngle(double) noexcept = 0;
            virtual int32_t __stdcall get_IsLargeArc(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLargeArc(bool) noexcept = 0;
            virtual int32_t __stdcall get_SweepDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SweepDirection(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IArcSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SizeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsLargeArcProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SweepDirectionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBezierSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point1(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point1(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Point2(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point2(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Point3(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point3(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBezierSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point1Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point2Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point3Property(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBitmapCache>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Opacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_Opacity(double) noexcept = 0;
            virtual int32_t __stdcall get_Transform(void**) noexcept = 0;
            virtual int32_t __stdcall put_Transform(void*) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTransform(void**) noexcept = 0;
            virtual int32_t __stdcall put_RelativeTransform(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBrushOverrides2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PopulatePropertyInfoOverride(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransformProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RelativeTransformProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICacheMode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICacheModeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositeTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleX(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleX(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleY(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleY(double) noexcept = 0;
            virtual int32_t __stdcall get_SkewX(double*) noexcept = 0;
            virtual int32_t __stdcall put_SkewX(double) noexcept = 0;
            virtual int32_t __stdcall get_SkewY(double*) noexcept = 0;
            virtual int32_t __stdcall put_SkewY(double) noexcept = 0;
            virtual int32_t __stdcall get_Rotation(double*) noexcept = 0;
            virtual int32_t __stdcall put_Rotation(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateX(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateX(double) noexcept = 0;
            virtual int32_t __stdcall get_TranslateY(double*) noexcept = 0;
            virtual int32_t __stdcall put_TranslateY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositeTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SkewXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SkewYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TranslateYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositionTarget>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositionTargetStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Rendering(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Rendering(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SurfaceContentsLost(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SurfaceContentsLost(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ICompositionTargetStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Rendered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Rendered(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IEllipseGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Center(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Center(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_RadiusX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RadiusX(double) noexcept = 0;
            virtual int32_t __stdcall get_RadiusY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RadiusY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IEllipseGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RadiusXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RadiusYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IFontFamily>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Source(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IFontFamilyFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithName(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IFontFamilyStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XamlAutoFontFamily(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeneralTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Inverse(void**) noexcept = 0;
            virtual int32_t __stdcall TransformPoint(Windows::Foundation::Point, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall TryTransform(Windows::Foundation::Point, Windows::Foundation::Point*, bool*) noexcept = 0;
            virtual int32_t __stdcall TransformBounds(Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeneralTransformFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InverseCore(void**) noexcept = 0;
            virtual int32_t __stdcall TryTransformCore(Windows::Foundation::Point, Windows::Foundation::Point*, bool*) noexcept = 0;
            virtual int32_t __stdcall TransformBoundsCore(Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Transform(void**) noexcept = 0;
            virtual int32_t __stdcall put_Transform(void*) noexcept = 0;
            virtual int32_t __stdcall get_Bounds(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometryFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometryGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRule(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FillRule(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall put_Children(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometryGroupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRuleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChildrenProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Empty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StandardFlatteningTolerance(double*) noexcept = 0;
            virtual int32_t __stdcall get_TransformProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SpreadMethod(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SpreadMethod(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MappingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MappingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ColorInterpolationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ColorInterpolationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_GradientStops(void**) noexcept = 0;
            virtual int32_t __stdcall put_GradientStops(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SpreadMethodProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MappingModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ColorInterpolationModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GradientStopsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientStop>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Offset(double*) noexcept = 0;
            virtual int32_t __stdcall put_Offset(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IGradientStopStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IImageBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ImageSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_ImageSource(void*) noexcept = 0;
            virtual int32_t __stdcall add_ImageFailed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ImageFailed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ImageOpened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ImageOpened(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IImageBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ImageSourceProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IImageSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IImageSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILineGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_StartPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_EndPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_EndPoint(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILineGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EndPointProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILineSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILineSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILinearGradientBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_StartPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_EndPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_EndPoint(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILinearGradientBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithGradientStopCollectionAndAngle(void*, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILinearGradientBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EndPointProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILoadedImageSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DecodedPhysicalSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_DecodedSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall get_NaturalSize(Windows::Foundation::Size*) noexcept = 0;
            virtual int32_t __stdcall add_LoadCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LoadCompleted(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartLoadFromUriWithSize(void*, Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall StartLoadFromUri(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StartLoadFromStreamWithSize(void*, Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall StartLoadFromStream(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrix3DProjection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
            virtual int32_t __stdcall put_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProjectionMatrixProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrixHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrixHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Identity(struct struct_Windows_UI_Xaml_Media_Matrix*) noexcept = 0;
            virtual int32_t __stdcall FromElements(double, double, double, double, double, double, struct struct_Windows_UI_Xaml_Media_Matrix*) noexcept = 0;
            virtual int32_t __stdcall GetIsIdentity(struct struct_Windows_UI_Xaml_Media_Matrix, bool*) noexcept = 0;
            virtual int32_t __stdcall Transform(struct struct_Windows_UI_Xaml_Media_Matrix, Windows::Foundation::Point, Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrixTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Matrix(struct struct_Windows_UI_Xaml_Media_Matrix*) noexcept = 0;
            virtual int32_t __stdcall put_Matrix(struct struct_Windows_UI_Xaml_Media_Matrix) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMatrixTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MatrixProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetThumbnailImage(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StreamKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathFigure>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Segments(void**) noexcept = 0;
            virtual int32_t __stdcall put_Segments(void*) noexcept = 0;
            virtual int32_t __stdcall get_StartPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_StartPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_IsClosed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsClosed(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsFilled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsFilled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathFigureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SegmentsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StartPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsClosedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsFilledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRule(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FillRule(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Figures(void**) noexcept = 0;
            virtual int32_t __stdcall put_Figures(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillRuleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FiguresProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPathSegmentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPlaneProjection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalOffsetX(double*) noexcept = 0;
            virtual int32_t __stdcall put_LocalOffsetX(double) noexcept = 0;
            virtual int32_t __stdcall get_LocalOffsetY(double*) noexcept = 0;
            virtual int32_t __stdcall put_LocalOffsetY(double) noexcept = 0;
            virtual int32_t __stdcall get_LocalOffsetZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_LocalOffsetZ(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationX(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationX(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationY(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationY(double) noexcept = 0;
            virtual int32_t __stdcall get_RotationZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_RotationZ(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterOfRotationX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterOfRotationY(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterOfRotationZ(double) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetX(double*) noexcept = 0;
            virtual int32_t __stdcall put_GlobalOffsetX(double) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetY(double*) noexcept = 0;
            virtual int32_t __stdcall put_GlobalOffsetY(double) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetZ(double*) noexcept = 0;
            virtual int32_t __stdcall put_GlobalOffsetZ(double) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPlaneProjectionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalOffsetXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalOffsetYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalOffsetZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotationZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterOfRotationZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GlobalOffsetZProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProjectionMatrixProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyBezierSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Points(void**) noexcept = 0;
            virtual int32_t __stdcall put_Points(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyLineSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Points(void**) noexcept = 0;
            virtual int32_t __stdcall put_Points(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyLineSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Points(void**) noexcept = 0;
            virtual int32_t __stdcall put_Points(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PointsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IProjection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IProjectionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IQuadraticBezierSegment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point1(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point1(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Point2(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Point2(Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Point1Property(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point2Property(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRectangleGeometry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Rect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall put_Rect(Windows::Foundation::Rect) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRectangleGeometryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RectProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRenderedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameDuration(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRenderingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RenderingTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBackgroundBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBorderBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBorderBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_TargetTheme(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TargetTheme(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysUseFallback(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AlwaysUseFallback(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRevealBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetThemeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlwaysUseFallbackProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StateProperty(void**) noexcept = 0;
            virtual int32_t __stdcall SetState(void*, int32_t) noexcept = 0;
            virtual int32_t __stdcall GetState(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRotateTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_Angle(double*) noexcept = 0;
            virtual int32_t __stdcall put_Angle(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IRotateTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AngleProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IScaleTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleX(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleX(double) noexcept = 0;
            virtual int32_t __stdcall get_ScaleY(double*) noexcept = 0;
            virtual int32_t __stdcall put_ScaleY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IScaleTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IShadow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IShadowFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISkewTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterX(double) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
            virtual int32_t __stdcall put_CenterY(double) noexcept = 0;
            virtual int32_t __stdcall get_AngleX(double*) noexcept = 0;
            virtual int32_t __stdcall put_AngleX(double) noexcept = 0;
            virtual int32_t __stdcall get_AngleY(double*) noexcept = 0;
            virtual int32_t __stdcall put_AngleY(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISkewTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CenterYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AngleXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AngleYProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISolidColorBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISolidColorBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithColor(struct struct_Windows_UI_Color, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ISolidColorBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IThemeShadow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Receivers(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IThemeShadowFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITileBrush>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlignmentX(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AlignmentX(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AlignmentY(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AlignmentY(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Stretch(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Stretch(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITileBrushFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITileBrushStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlignmentXProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AlignmentYProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StretchProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITimelineMarker>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Time(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_Time(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_Type(void**) noexcept = 0;
            virtual int32_t __stdcall put_Type(void*) noexcept = 0;
            virtual int32_t __stdcall get_Text(void**) noexcept = 0;
            virtual int32_t __stdcall put_Text(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Marker(void**) noexcept = 0;
            virtual int32_t __stdcall put_Marker(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITimelineMarkerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TimeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TypeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TextProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITransformFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITransformGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall put_Children(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(struct struct_Windows_UI_Xaml_Media_Matrix*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITransformGroupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChildrenProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITranslateTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_X(double*) noexcept = 0;
            virtual int32_t __stdcall put_X(double) noexcept = 0;
            virtual int32_t __stdcall get_Y(double*) noexcept = 0;
            virtual int32_t __stdcall put_Y(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::ITranslateTransformStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_XProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_YProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IVisualTreeHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IVisualTreeHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindElementsInHostCoordinatesPoint(Windows::Foundation::Point, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindElementsInHostCoordinatesRect(Windows::Foundation::Rect, void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllElementsInHostCoordinatesPoint(Windows::Foundation::Point, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall FindAllElementsInHostCoordinatesRect(Windows::Foundation::Rect, void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall GetChild(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetChildrenCount(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetParent(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DisconnectChildrenRecursive(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetOpenPopups(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetOpenPopupsForXamlRoot(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_FallbackColor(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnConnected() noexcept = 0;
            virtual int32_t __stdcall OnDisconnected() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompositionBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompositionBrush(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FallbackColorProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLight>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLightFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLightOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetId(void**) noexcept = 0;
            virtual int32_t __stdcall OnConnected(void*) noexcept = 0;
            virtual int32_t __stdcall OnDisconnected(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLightProtected>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CompositionLight(void**) noexcept = 0;
            virtual int32_t __stdcall put_CompositionLight(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::IXamlLightStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddTargetElement(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveTargetElement(void*, void*) noexcept = 0;
            virtual int32_t __stdcall AddTargetBrush(void*, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveTargetBrush(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrush
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::AcrylicBackgroundSource) BackgroundSource() const;
        WINRT_IMPL_AUTO(void) BackgroundSource(Windows::UI::Xaml::Media::AcrylicBackgroundSource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) TintColor() const;
        WINRT_IMPL_AUTO(void) TintColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) TintOpacity() const;
        WINRT_IMPL_AUTO(void) TintOpacity(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) TintTransitionDuration() const;
        WINRT_IMPL_AUTO(void) TintTransitionDuration(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AlwaysUseFallback() const;
        WINRT_IMPL_AUTO(void) AlwaysUseFallback(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrush2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<double>) TintLuminosityOpacity() const;
        WINRT_IMPL_AUTO(void) TintLuminosityOpacity(Windows::Foundation::IReference<double> const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrush2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrush2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::AcrylicBrush) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) BackgroundSourceProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TintColorProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TintOpacityProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TintTransitionDurationProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AlwaysUseFallbackProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TintLuminosityOpacityProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IAcrylicBrushStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IArcSegment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Point() const;
        WINRT_IMPL_AUTO(void) Point(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) Size() const;
        WINRT_IMPL_AUTO(void) Size(Windows::Foundation::Size const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RotationAngle() const;
        WINRT_IMPL_AUTO(void) RotationAngle(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsLargeArc() const;
        WINRT_IMPL_AUTO(void) IsLargeArc(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::SweepDirection) SweepDirection() const;
        WINRT_IMPL_AUTO(void) SweepDirection(Windows::UI::Xaml::Media::SweepDirection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IArcSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IArcSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IArcSegmentStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SizeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RotationAngleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsLargeArcProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SweepDirectionProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IArcSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBezierSegment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Point1() const;
        WINRT_IMPL_AUTO(void) Point1(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Point2() const;
        WINRT_IMPL_AUTO(void) Point2(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Point3() const;
        WINRT_IMPL_AUTO(void) Point3(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBezierSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBezierSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBezierSegmentStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) Point1Property() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) Point2Property() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) Point3Property() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBezierSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBezierSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBitmapCache
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBitmapCache>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBitmapCache<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBrush
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Opacity() const;
        WINRT_IMPL_AUTO(void) Opacity(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Transform) Transform() const;
        WINRT_IMPL_AUTO(void) Transform(Windows::UI::Xaml::Media::Transform const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Transform) RelativeTransform() const;
        WINRT_IMPL_AUTO(void) RelativeTransform(Windows::UI::Xaml::Media::Transform const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBrushFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBrushOverrides2
    {
        WINRT_IMPL_AUTO(void) PopulatePropertyInfoOverride(param::hstring const& propertyName, Windows::UI::Composition::AnimationPropertyInfo const& animationPropertyInfo) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBrushOverrides2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBrushOverrides2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IBrushStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) OpacityProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TransformProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RelativeTransformProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICacheMode
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICacheMode>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICacheMode<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICacheModeFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::CacheMode) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICacheModeFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICacheModeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositeTransform
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterX() const;
        WINRT_IMPL_AUTO(void) CenterX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterY() const;
        WINRT_IMPL_AUTO(void) CenterY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ScaleX() const;
        WINRT_IMPL_AUTO(void) ScaleX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ScaleY() const;
        WINRT_IMPL_AUTO(void) ScaleY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SkewX() const;
        WINRT_IMPL_AUTO(void) SkewX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SkewY() const;
        WINRT_IMPL_AUTO(void) SkewY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Rotation() const;
        WINRT_IMPL_AUTO(void) Rotation(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) TranslateX() const;
        WINRT_IMPL_AUTO(void) TranslateX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) TranslateY() const;
        WINRT_IMPL_AUTO(void) TranslateY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositeTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositeTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositeTransformStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ScaleXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ScaleYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SkewXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SkewYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RotationProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TranslateXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TranslateYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositeTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositionTarget
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositionTarget>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositionTarget<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositionTargetStatics
    {
        WINRT_IMPL_AUTO(winrt::event_token) Rendering(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Rendering_revoker = impl::event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_Rendering>;
        [[nodiscard]] Rendering_revoker Rendering(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Rendering(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SurfaceContentsLost(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using SurfaceContentsLost_revoker = impl::event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_SurfaceContentsLost>;
        [[nodiscard]] SurfaceContentsLost_revoker SurfaceContentsLost(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SurfaceContentsLost(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositionTargetStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3
    {
        WINRT_IMPL_AUTO(winrt::event_token) Rendered(Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& handler) const;
        using Rendered_revoker = impl::event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics3, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics3>::remove_Rendered>;
        [[nodiscard]] Rendered_revoker Rendered(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Rendered(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ICompositionTargetStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IEllipseGeometry
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Center() const;
        WINRT_IMPL_AUTO(void) Center(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RadiusX() const;
        WINRT_IMPL_AUTO(void) RadiusX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RadiusY() const;
        WINRT_IMPL_AUTO(void) RadiusY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IEllipseGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RadiusXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RadiusYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IEllipseGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IFontFamily
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Source() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IFontFamily>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IFontFamily<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IFontFamilyFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::FontFamily) CreateInstanceWithName(param::hstring const& familyName, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IFontFamilyFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IFontFamilyFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IFontFamilyStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::FontFamily) XamlAutoFontFamily() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IFontFamilyStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IFontFamilyStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeneralTransform
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::GeneralTransform) Inverse() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) TransformPoint(Windows::Foundation::Point const& point) const;
        WINRT_IMPL_AUTO(bool) TryTransform(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Rect) TransformBounds(Windows::Foundation::Rect const& rect) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeneralTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeneralTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeneralTransformFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::GeneralTransform) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeneralTransformFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeneralTransformFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::GeneralTransform) InverseCore() const;
        WINRT_IMPL_AUTO(bool) TryTransformCore(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Rect) TransformBoundsCore(Windows::Foundation::Rect const& rect) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometry
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Transform) Transform() const;
        WINRT_IMPL_AUTO(void) Transform(Windows::UI::Xaml::Media::Transform const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) Bounds() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometryFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometryFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometryFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometryGroup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::FillRule) FillRule() const;
        WINRT_IMPL_AUTO(void) FillRule(Windows::UI::Xaml::Media::FillRule const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::GeometryCollection) Children() const;
        WINRT_IMPL_AUTO(void) Children(Windows::UI::Xaml::Media::GeometryCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometryGroup>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometryGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometryGroupStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FillRuleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ChildrenProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometryGroupStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometryGroupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGeometryStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Geometry) Empty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) StandardFlatteningTolerance() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TransformProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientBrush
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::GradientSpreadMethod) SpreadMethod() const;
        WINRT_IMPL_AUTO(void) SpreadMethod(Windows::UI::Xaml::Media::GradientSpreadMethod const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::BrushMappingMode) MappingMode() const;
        WINRT_IMPL_AUTO(void) MappingMode(Windows::UI::Xaml::Media::BrushMappingMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::ColorInterpolationMode) ColorInterpolationMode() const;
        WINRT_IMPL_AUTO(void) ColorInterpolationMode(Windows::UI::Xaml::Media::ColorInterpolationMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::GradientStopCollection) GradientStops() const;
        WINRT_IMPL_AUTO(void) GradientStops(Windows::UI::Xaml::Media::GradientStopCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientBrushFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::GradientBrush) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientBrushStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SpreadMethodProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MappingModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ColorInterpolationModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) GradientStopsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientStop
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Offset() const;
        WINRT_IMPL_AUTO(void) Offset(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientStop>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientStop<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IGradientStopStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ColorProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) OffsetProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IGradientStopStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IGradientStopStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IImageBrush
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::ImageSource) ImageSource() const;
        WINRT_IMPL_AUTO(void) ImageSource(Windows::UI::Xaml::Media::ImageSource const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) ImageFailed(Windows::UI::Xaml::ExceptionRoutedEventHandler const& handler) const;
        using ImageFailed_revoker = impl::event_revoker<Windows::UI::Xaml::Media::IImageBrush, &impl::abi_t<Windows::UI::Xaml::Media::IImageBrush>::remove_ImageFailed>;
        [[nodiscard]] ImageFailed_revoker ImageFailed(auto_revoke_t, Windows::UI::Xaml::ExceptionRoutedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) ImageFailed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ImageOpened(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using ImageOpened_revoker = impl::event_revoker<Windows::UI::Xaml::Media::IImageBrush, &impl::abi_t<Windows::UI::Xaml::Media::IImageBrush>::remove_ImageOpened>;
        [[nodiscard]] ImageOpened_revoker ImageOpened(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) ImageOpened(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IImageBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IImageBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IImageBrushStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ImageSourceProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IImageBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IImageBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IImageSource
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IImageSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IImageSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IImageSourceFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IImageSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IImageSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILineGeometry
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) StartPoint() const;
        WINRT_IMPL_AUTO(void) StartPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) EndPoint() const;
        WINRT_IMPL_AUTO(void) EndPoint(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILineGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILineGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILineGeometryStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StartPointProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) EndPointProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILineGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILineGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILineSegment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Point() const;
        WINRT_IMPL_AUTO(void) Point(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILineSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILineSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILineSegmentStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILineSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILineSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILinearGradientBrush
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) StartPoint() const;
        WINRT_IMPL_AUTO(void) StartPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) EndPoint() const;
        WINRT_IMPL_AUTO(void) EndPoint(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILinearGradientBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILinearGradientBrushFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::LinearGradientBrush) CreateInstanceWithGradientStopCollectionAndAngle(Windows::UI::Xaml::Media::GradientStopCollection const& gradientStopCollection, double angle) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILinearGradientBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILinearGradientBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILinearGradientBrushStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StartPointProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) EndPointProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILinearGradientBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILinearGradientBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILoadedImageSourceLoadCompletedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus) Status() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILoadedImageSourceLoadCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILoadedImageSurface
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) DecodedPhysicalSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) DecodedSize() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Size) NaturalSize() const;
        WINRT_IMPL_AUTO(winrt::event_token) LoadCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::LoadedImageSurface, Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const& handler) const;
        using LoadCompleted_revoker = impl::event_revoker<Windows::UI::Xaml::Media::ILoadedImageSurface, &impl::abi_t<Windows::UI::Xaml::Media::ILoadedImageSurface>::remove_LoadCompleted>;
        [[nodiscard]] LoadCompleted_revoker LoadCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::LoadedImageSurface, Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) LoadCompleted(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILoadedImageSurface>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::LoadedImageSurface) StartLoadFromUri(Windows::Foundation::Uri const& uri, Windows::Foundation::Size const& desiredMaxSize) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::LoadedImageSurface) StartLoadFromUri(Windows::Foundation::Uri const& uri) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::LoadedImageSurface) StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Foundation::Size const& desiredMaxSize) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::LoadedImageSurface) StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrix3DProjection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Media3D::Matrix3D) ProjectionMatrix() const;
        WINRT_IMPL_AUTO(void) ProjectionMatrix(Windows::UI::Xaml::Media::Media3D::Matrix3D const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrix3DProjection>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrix3DProjection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrix3DProjectionStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ProjectionMatrixProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrix3DProjectionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrixHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrixHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrixHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrixHelperStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Matrix) Identity() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Matrix) FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY) const;
        WINRT_IMPL_AUTO(bool) GetIsIdentity(Windows::UI::Xaml::Media::Matrix const& target) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) Transform(Windows::UI::Xaml::Media::Matrix const& target, Windows::Foundation::Point const& point) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrixHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrixTransform
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Matrix) Matrix() const;
        WINRT_IMPL_AUTO(void) Matrix(Windows::UI::Xaml::Media::Matrix const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrixTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrixTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMatrixTransformStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MatrixProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMatrixTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMatrixTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IMediaTransportControlsThumbnailRequestedEventArgs
    {
        WINRT_IMPL_AUTO(void) SetThumbnailImage(Windows::Storage::Streams::IInputStream const& source) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IMediaTransportControlsThumbnailRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::Playback::FailedMediaStreamKind) StreamKind() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathFigure
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::PathSegmentCollection) Segments() const;
        WINRT_IMPL_AUTO(void) Segments(Windows::UI::Xaml::Media::PathSegmentCollection const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) StartPoint() const;
        WINRT_IMPL_AUTO(void) StartPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsClosed() const;
        WINRT_IMPL_AUTO(void) IsClosed(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsFilled() const;
        WINRT_IMPL_AUTO(void) IsFilled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathFigure>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathFigure<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathFigureStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SegmentsProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StartPointProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsClosedProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsFilledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathFigureStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathGeometry
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::FillRule) FillRule() const;
        WINRT_IMPL_AUTO(void) FillRule(Windows::UI::Xaml::Media::FillRule const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::PathFigureCollection) Figures() const;
        WINRT_IMPL_AUTO(void) Figures(Windows::UI::Xaml::Media::PathFigureCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathGeometryStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FillRuleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FiguresProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathSegment
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPathSegmentFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPathSegmentFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPathSegmentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPlaneProjection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) LocalOffsetX() const;
        WINRT_IMPL_AUTO(void) LocalOffsetX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) LocalOffsetY() const;
        WINRT_IMPL_AUTO(void) LocalOffsetY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) LocalOffsetZ() const;
        WINRT_IMPL_AUTO(void) LocalOffsetZ(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RotationX() const;
        WINRT_IMPL_AUTO(void) RotationX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RotationY() const;
        WINRT_IMPL_AUTO(void) RotationY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) RotationZ() const;
        WINRT_IMPL_AUTO(void) RotationZ(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterOfRotationX() const;
        WINRT_IMPL_AUTO(void) CenterOfRotationX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterOfRotationY() const;
        WINRT_IMPL_AUTO(void) CenterOfRotationY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterOfRotationZ() const;
        WINRT_IMPL_AUTO(void) CenterOfRotationZ(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) GlobalOffsetX() const;
        WINRT_IMPL_AUTO(void) GlobalOffsetX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) GlobalOffsetY() const;
        WINRT_IMPL_AUTO(void) GlobalOffsetY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) GlobalOffsetZ() const;
        WINRT_IMPL_AUTO(void) GlobalOffsetZ(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Media3D::Matrix3D) ProjectionMatrix() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPlaneProjection>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPlaneProjection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LocalOffsetXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LocalOffsetYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LocalOffsetZProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RotationXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RotationYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RotationZProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterOfRotationXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterOfRotationYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterOfRotationZProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) GlobalOffsetXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) GlobalOffsetYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) GlobalOffsetZProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ProjectionMatrixProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPlaneProjectionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyBezierSegment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::PointCollection) Points() const;
        WINRT_IMPL_AUTO(void) Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyBezierSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyBezierSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyBezierSegmentStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyBezierSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyLineSegment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::PointCollection) Points() const;
        WINRT_IMPL_AUTO(void) Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyLineSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyLineSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyLineSegmentStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyLineSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyLineSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::PointCollection) Points() const;
        WINRT_IMPL_AUTO(void) Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegmentStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IProjection
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IProjection>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IProjection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IProjectionFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Projection) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IProjectionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IProjectionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Point1() const;
        WINRT_IMPL_AUTO(void) Point1(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Point2() const;
        WINRT_IMPL_AUTO(void) Point2(Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IQuadraticBezierSegment>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IQuadraticBezierSegmentStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) Point1Property() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) Point2Property() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IQuadraticBezierSegmentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRateChangedRoutedEventArgs
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRateChangedRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRectangleGeometry
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) Rect() const;
        WINRT_IMPL_AUTO(void) Rect(Windows::Foundation::Rect const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRectangleGeometry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRectangleGeometry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRectangleGeometryStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RectProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRectangleGeometryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRectangleGeometryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRenderedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) FrameDuration() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRenderedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRenderedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRenderingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) RenderingTime() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRenderingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRenderingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBackgroundBrush
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBackgroundBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBackgroundBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBackgroundBrushFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::RevealBackgroundBrush) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBackgroundBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBorderBrush
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBorderBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBorderBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBorderBrushFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::RevealBorderBrush) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBorderBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBorderBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBrush
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::ApplicationTheme) TargetTheme() const;
        WINRT_IMPL_AUTO(void) TargetTheme(Windows::UI::Xaml::ApplicationTheme const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AlwaysUseFallback() const;
        WINRT_IMPL_AUTO(void) AlwaysUseFallback(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBrushFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::RevealBrush) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRevealBrushStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ColorProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TargetThemeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AlwaysUseFallbackProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StateProperty() const;
        WINRT_IMPL_AUTO(void) SetState(Windows::UI::Xaml::UIElement const& element, Windows::UI::Xaml::Media::RevealBrushState const& value) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::RevealBrushState) GetState(Windows::UI::Xaml::UIElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRevealBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRotateTransform
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterX() const;
        WINRT_IMPL_AUTO(void) CenterX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterY() const;
        WINRT_IMPL_AUTO(void) CenterY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Angle() const;
        WINRT_IMPL_AUTO(void) Angle(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRotateTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRotateTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IRotateTransformStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AngleProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IRotateTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IRotateTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IScaleTransform
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterX() const;
        WINRT_IMPL_AUTO(void) CenterX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterY() const;
        WINRT_IMPL_AUTO(void) CenterY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ScaleX() const;
        WINRT_IMPL_AUTO(void) ScaleX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ScaleY() const;
        WINRT_IMPL_AUTO(void) ScaleY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IScaleTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IScaleTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IScaleTransformStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ScaleXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ScaleYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IScaleTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IShadow
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IShadow>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IShadow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IShadowFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IShadowFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IShadowFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISkewTransform
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterX() const;
        WINRT_IMPL_AUTO(void) CenterX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterY() const;
        WINRT_IMPL_AUTO(void) CenterY(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AngleX() const;
        WINRT_IMPL_AUTO(void) AngleX(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) AngleY() const;
        WINRT_IMPL_AUTO(void) AngleY(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISkewTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISkewTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISkewTransformStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AngleXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AngleYProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISkewTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISolidColorBrush
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISolidColorBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISolidColorBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::SolidColorBrush) CreateInstanceWithColor(Windows::UI::Color const& color) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISolidColorBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ISolidColorBrushStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ColorProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ISolidColorBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ISolidColorBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IThemeShadow
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElementWeakCollection) Receivers() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IThemeShadow>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IThemeShadow<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IThemeShadowFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::ThemeShadow) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IThemeShadowFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IThemeShadowFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITileBrush
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::AlignmentX) AlignmentX() const;
        WINRT_IMPL_AUTO(void) AlignmentX(Windows::UI::Xaml::Media::AlignmentX const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::AlignmentY) AlignmentY() const;
        WINRT_IMPL_AUTO(void) AlignmentY(Windows::UI::Xaml::Media::AlignmentY const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Stretch) Stretch() const;
        WINRT_IMPL_AUTO(void) Stretch(Windows::UI::Xaml::Media::Stretch const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITileBrush>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITileBrush<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITileBrushFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::TileBrush) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITileBrushFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITileBrushFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITileBrushStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AlignmentXProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AlignmentYProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StretchProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITileBrushStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITileBrushStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITimelineMarker
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) Time() const;
        WINRT_IMPL_AUTO(void) Time(Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Type() const;
        WINRT_IMPL_AUTO(void) Type(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Text() const;
        WINRT_IMPL_AUTO(void) Text(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITimelineMarker>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITimelineMarker<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITimelineMarkerRoutedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::TimelineMarker) Marker() const;
        WINRT_IMPL_AUTO(void) Marker(Windows::UI::Xaml::Media::TimelineMarker const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITimelineMarkerRoutedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TimeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TypeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TextProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITimelineMarkerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITransform
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITransformFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITransformFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITransformFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITransformGroup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::TransformCollection) Children() const;
        WINRT_IMPL_AUTO(void) Children(Windows::UI::Xaml::Media::TransformCollection const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Matrix) Value() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITransformGroup>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITransformGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITransformGroupStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ChildrenProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITransformGroupStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITransformGroupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITranslateTransform
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) X() const;
        WINRT_IMPL_AUTO(void) X(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Y() const;
        WINRT_IMPL_AUTO(void) Y(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITranslateTransform>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITranslateTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_ITranslateTransformStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) XProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) YProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::ITranslateTransformStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_ITranslateTransformStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IVisualTreeHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IVisualTreeHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IVisualTreeHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement>) FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement>) FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement>) FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement>) FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) GetChild(Windows::UI::Xaml::DependencyObject const& reference, int32_t childIndex) const;
        WINRT_IMPL_AUTO(int32_t) GetChildrenCount(Windows::UI::Xaml::DependencyObject const& reference) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) GetParent(Windows::UI::Xaml::DependencyObject const& reference) const;
        WINRT_IMPL_AUTO(void) DisconnectChildrenRecursive(Windows::UI::Xaml::UIElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IVisualTreeHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Primitives::Popup>) GetOpenPopups(Windows::UI::Xaml::Window const& window) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Primitives::Popup>) GetOpenPopupsForXamlRoot(Windows::UI::Xaml::XamlRoot const& xamlRoot) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IVisualTreeHelperStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) FallbackColor() const;
        WINRT_IMPL_AUTO(void) FallbackColor(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::XamlCompositionBrushBase) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseOverrides
    {
        WINRT_IMPL_AUTO(void) OnConnected() const;
        WINRT_IMPL_AUTO(void) OnDisconnected() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseProtected
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::CompositionBrush) CompositionBrush() const;
        WINRT_IMPL_AUTO(void) CompositionBrush(Windows::UI::Composition::CompositionBrush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseProtected<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FallbackColorProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLight
    {
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLight>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLight<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLightFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::XamlLight) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLightFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLightFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLightOverrides
    {
        WINRT_IMPL_AUTO(hstring) GetId() const;
        WINRT_IMPL_AUTO(void) OnConnected(Windows::UI::Xaml::UIElement const& newElement) const;
        WINRT_IMPL_AUTO(void) OnDisconnected(Windows::UI::Xaml::UIElement const& oldElement) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLightOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLightOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLightProtected
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::CompositionLight) CompositionLight() const;
        WINRT_IMPL_AUTO(void) CompositionLight(Windows::UI::Composition::CompositionLight const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLightProtected>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLightProtected<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_IXamlLightStatics
    {
        WINRT_IMPL_AUTO(void) AddTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element) const;
        WINRT_IMPL_AUTO(void) RemoveTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element) const;
        WINRT_IMPL_AUTO(void) AddTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush) const;
        WINRT_IMPL_AUTO(void) RemoveTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush) const;
    };
    template <> struct consume<Windows::UI::Xaml::Media::IXamlLightStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>;
    };
    struct struct_Windows_UI_Xaml_Media_Matrix
    {
        double M11;
        double M12;
        double M21;
        double M22;
        double OffsetX;
        double OffsetY;
    };
    template <> struct abi<Windows::UI::Xaml::Media::Matrix>
    {
        using type = struct_Windows_UI_Xaml_Media_Matrix;
    };
}
#endif
