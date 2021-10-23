// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_ForceFeedback_H
#define WINRT_Windows_Gaming_Input_ForceFeedback_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Gaming.Input.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind) consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect<D>::Kind() const
    {
        Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IConditionForceEffect)->get_Kind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect<D>::SetParameters(Windows::Foundation::Numerics::float3 const& direction, float positiveCoefficient, float negativeCoefficient, float maxPositiveMagnitude, float maxNegativeMagnitude, float deadZone, float bias) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IConditionForceEffect)->SetParameters(impl::bind_in(direction), positiveCoefficient, negativeCoefficient, maxPositiveMagnitude, maxNegativeMagnitude, deadZone, bias));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::ForceFeedback::ConditionForceEffect) consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffectFactory<D>::CreateInstance(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const& effectKind) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory)->CreateInstance(static_cast<int32_t>(effectKind), &value));
        return Windows::Gaming::Input::ForceFeedback::ConditionForceEffect{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect<D>::SetParameters(Windows::Foundation::Numerics::float3 const& vector, Windows::Foundation::TimeSpan const& duration) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IConstantForceEffect)->SetParameters(impl::bind_in(vector), impl::bind_in(duration)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect<D>::SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& vector, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IConstantForceEffect)->SetParametersWithEnvelope(impl::bind_in(vector), attackGain, sustainGain, releaseGain, impl::bind_in(startDelay), impl::bind_in(attackDuration), impl::bind_in(sustainDuration), impl::bind_in(releaseDuration), repeatCount));
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::Gain() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->get_Gain(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::Gain(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->put_Gain(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::State() const
    {
        Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->Start());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect)->Stop());
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::AreEffectsPaused() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->get_AreEffectsPaused(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::MasterGain() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->get_MasterGain(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::MasterGain(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->put_MasterGain(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::IsEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->get_IsEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::SupportedAxes() const
    {
        Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->get_SupportedAxes(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::LoadEffectAsync(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const& effect) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->LoadEffectAsync(*(void**)(&effect), &asyncOperation));
        return Windows::Foundation::IAsyncOperation<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::PauseAllEffects() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->PauseAllEffects());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::ResumeAllEffects() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->ResumeAllEffects());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::StopAllEffects() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->StopAllEffects());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::TryDisableAsync() const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->TryDisableAsync(&asyncOperation));
        return Windows::Foundation::IAsyncOperation<bool>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::TryEnableAsync() const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->TryEnableAsync(&asyncOperation));
        return Windows::Foundation::IAsyncOperation<bool>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::TryResetAsync() const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->TryResetAsync(&asyncOperation));
        return Windows::Foundation::IAsyncOperation<bool>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>::TryUnloadEffectAsync(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const& effect) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor)->TryUnloadEffectAsync(*(void**)(&effect), &asyncOperation));
        return Windows::Foundation::IAsyncOperation<bool>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind) consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect<D>::Kind() const
    {
        Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect)->get_Kind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect<D>::SetParameters(Windows::Foundation::Numerics::float3 const& vector, float frequency, float phase, float bias, Windows::Foundation::TimeSpan const& duration) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect)->SetParameters(impl::bind_in(vector), frequency, phase, bias, impl::bind_in(duration)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect<D>::SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& vector, float frequency, float phase, float bias, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect)->SetParametersWithEnvelope(impl::bind_in(vector), frequency, phase, bias, attackGain, sustainGain, releaseGain, impl::bind_in(startDelay), impl::bind_in(attackDuration), impl::bind_in(sustainDuration), impl::bind_in(releaseDuration), repeatCount));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect) consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffectFactory<D>::CreateInstance(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const& effectKind) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory)->CreateInstance(static_cast<int32_t>(effectKind), &value));
        return Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IRampForceEffect<D>::SetParameters(Windows::Foundation::Numerics::float3 const& startVector, Windows::Foundation::Numerics::float3 const& endVector, Windows::Foundation::TimeSpan const& duration) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IRampForceEffect)->SetParameters(impl::bind_in(startVector), impl::bind_in(endVector), impl::bind_in(duration)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Input_ForceFeedback_IRampForceEffect<D>::SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& startVector, Windows::Foundation::Numerics::float3 const& endVector, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::ForceFeedback::IRampForceEffect)->SetParametersWithEnvelope(impl::bind_in(startVector), impl::bind_in(endVector), attackGain, sustainGain, releaseGain, impl::bind_in(startDelay), impl::bind_in(attackDuration), impl::bind_in(sustainDuration), impl::bind_in(releaseDuration), repeatCount));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::ForceFeedback::IConditionForceEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>
    {
        int32_t __stdcall get_Kind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetParameters(Windows::Foundation::Numerics::float3 direction, float positiveCoefficient, float negativeCoefficient, float maxPositiveMagnitude, float maxNegativeMagnitude, float deadZone, float bias) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParameters(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&direction), positiveCoefficient, negativeCoefficient, maxPositiveMagnitude, maxNegativeMagnitude, deadZone, bias);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>
    {
        int32_t __stdcall CreateInstance(int32_t effectKind, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::ForceFeedback::ConditionForceEffect>(this->shim().CreateInstance(*reinterpret_cast<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const*>(&effectKind)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::ForceFeedback::IConstantForceEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>
    {
        int32_t __stdcall SetParameters(Windows::Foundation::Numerics::float3 vector, int64_t duration) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParameters(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&vector), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 vector, float attackGain, float sustainGain, float releaseGain, int64_t startDelay, int64_t attackDuration, int64_t sustainDuration, int64_t releaseDuration, uint32_t repeatCount) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParametersWithEnvelope(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&vector), attackGain, sustainGain, releaseGain, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startDelay), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&attackDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&sustainDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&releaseDuration), repeatCount);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        int32_t __stdcall get_Gain(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Gain());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Gain(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gain(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>
    {
        int32_t __stdcall get_AreEffectsPaused(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreEffectsPaused());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MasterGain(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MasterGain());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MasterGain(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MasterGain(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedAxes(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes>(this->shim().SupportedAxes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LoadEffectAsync(void* effect, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>>(this->shim().LoadEffectAsync(*reinterpret_cast<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const*>(&effect)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PauseAllEffects() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PauseAllEffects();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ResumeAllEffects() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResumeAllEffects();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopAllEffects() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAllEffects();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryDisableAsync(void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryDisableAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryEnableAsync(void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryEnableAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryResetAsync(void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryResetAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUnloadEffectAsync(void* effect, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryUnloadEffectAsync(*reinterpret_cast<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const*>(&effect)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>
    {
        int32_t __stdcall get_Kind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetParameters(Windows::Foundation::Numerics::float3 vector, float frequency, float phase, float bias, int64_t duration) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParameters(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&vector), frequency, phase, bias, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 vector, float frequency, float phase, float bias, float attackGain, float sustainGain, float releaseGain, int64_t startDelay, int64_t attackDuration, int64_t sustainDuration, int64_t releaseDuration, uint32_t repeatCount) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParametersWithEnvelope(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&vector), frequency, phase, bias, attackGain, sustainGain, releaseGain, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startDelay), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&attackDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&sustainDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&releaseDuration), repeatCount);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>
    {
        int32_t __stdcall CreateInstance(int32_t effectKind, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect>(this->shim().CreateInstance(*reinterpret_cast<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const*>(&effectKind)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Gaming::Input::ForceFeedback::IRampForceEffect> : produce_base<D, Windows::Gaming::Input::ForceFeedback::IRampForceEffect>
    {
        int32_t __stdcall SetParameters(Windows::Foundation::Numerics::float3 startVector, Windows::Foundation::Numerics::float3 endVector, int64_t duration) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParameters(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&startVector), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&endVector), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 startVector, Windows::Foundation::Numerics::float3 endVector, float attackGain, float sustainGain, float releaseGain, int64_t startDelay, int64_t attackDuration, int64_t sustainDuration, int64_t releaseDuration, uint32_t repeatCount) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParametersWithEnvelope(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&startVector), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&endVector), attackGain, sustainGain, releaseGain, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startDelay), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&attackDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&sustainDuration), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&releaseDuration), repeatCount);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::ForceFeedback
{
    constexpr auto operator|(ForceFeedbackEffectAxes const left, ForceFeedbackEffectAxes const right) noexcept
    {
        return static_cast<ForceFeedbackEffectAxes>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(ForceFeedbackEffectAxes& left, ForceFeedbackEffectAxes const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(ForceFeedbackEffectAxes const left, ForceFeedbackEffectAxes const right) noexcept
    {
        return static_cast<ForceFeedbackEffectAxes>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(ForceFeedbackEffectAxes& left, ForceFeedbackEffectAxes const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(ForceFeedbackEffectAxes const value) noexcept
    {
        return static_cast<ForceFeedbackEffectAxes>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(ForceFeedbackEffectAxes const left, ForceFeedbackEffectAxes const right) noexcept
    {
        return static_cast<ForceFeedbackEffectAxes>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(ForceFeedbackEffectAxes& left, ForceFeedbackEffectAxes const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline ConditionForceEffect::ConditionForceEffect(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const& effectKind) :
        ConditionForceEffect(impl::call_factory<ConditionForceEffect, IConditionForceEffectFactory>([&](IConditionForceEffectFactory const& f) { return f.CreateInstance(effectKind); }))
    {
    }
    inline ConstantForceEffect::ConstantForceEffect() :
        ConstantForceEffect(impl::call_factory_cast<ConstantForceEffect(*)(Windows::Foundation::IActivationFactory const&), ConstantForceEffect>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ConstantForceEffect>(); }))
    {
    }
    inline PeriodicForceEffect::PeriodicForceEffect(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const& effectKind) :
        PeriodicForceEffect(impl::call_factory<PeriodicForceEffect, IPeriodicForceEffectFactory>([&](IPeriodicForceEffectFactory const& f) { return f.CreateInstance(effectKind); }))
    {
    }
    inline RampForceEffect::RampForceEffect() :
        RampForceEffect(impl::call_factory_cast<RampForceEffect(*)(Windows::Foundation::IActivationFactory const&), RampForceEffect>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<RampForceEffect>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IConditionForceEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IConstantForceEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::IRampForceEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::ConditionForceEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::ConstantForceEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::ForceFeedback::RampForceEffect> : winrt::impl::hash_base {};
#endif
}
#endif
