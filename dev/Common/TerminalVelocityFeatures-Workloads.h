﻿// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

// THIS FILE IS AUTOMATICALLY GENERATED; DO NOT EDIT IT

// INPUT FILE: dev\common\TerminalVelocityFeatures-Workloads.xml
// OPTIONS: -Channel Experimental -Language C++ -Namespace Microsoft.Windows.System.Workloads -Path dev\common\TerminalVelocityFeatures-Workloads.xml -Output dev\common\TerminalVelocityFeatures-Workloads.h

#if defined(__midlrt)
namespace features
{
    feature_name Feature_Workloads = { DisabledByDefault, FALSE };
}
#endif // defined(__midlrt)

// Feature constants
#define WINDOWSAPPRUNTIME_MICROSOFT_WINDOWS_SYSTEM_WORKLOADS_FEATURE_WORKLOADS_ENABLED 1

#if defined(__cplusplus)

namespace Microsoft::Windows::System::Workloads
{

__pragma(detect_mismatch("ODR_violation_WINDOWSAPPRUNTIME_MICROSOFT_WINDOWS_SYSTEM_WORKLOADS_FEATURE_WORKLOADS_ENABLED_mismatch", "AlwaysEnabled"))
struct Feature_Workloads
{
    static constexpr bool IsEnabled() { return WINDOWSAPPRUNTIME_MICROSOFT_WINDOWS_SYSTEM_WORKLOADS_FEATURE_WORKLOADS_ENABLED == 1; }
};

} // namespace Microsoft.Windows.System.Workloads

#endif // defined(__cplusplus)
