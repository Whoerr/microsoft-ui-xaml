﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "common.h"
#include "TypeLogging.h"
#include "ScrollingPresenterTypeLogging.h"
#include "ScrollingPresenter.h"
#include "ScrollControllerScrollToRequestedEventArgs.h"

#include "ScrollControllerScrollToRequestedEventArgs.properties.cpp"

ScrollControllerScrollToRequestedEventArgs::ScrollControllerScrollToRequestedEventArgs(
    double offset,
    winrt::ScrollingScrollOptions const & options)
{
    SCROLLINGPRESENTER_TRACE_VERBOSE(nullptr, TRACE_MSG_METH_STR_DBL, METH_NAME, this,
        TypeLogging::ScrollOptionsToString(options).c_str(), offset);

    m_offset = offset;
    m_options = options;
}

double ScrollControllerScrollToRequestedEventArgs::Offset() const
{
    return m_offset;
}

winrt::ScrollingScrollOptions ScrollControllerScrollToRequestedEventArgs::Options() const
{
    return m_options;
}

winrt::ScrollInfo ScrollControllerScrollToRequestedEventArgs::Info() const
{
    return m_info;
}

void ScrollControllerScrollToRequestedEventArgs::Info(winrt::ScrollInfo info)
{
    SCROLLINGPRESENTER_TRACE_VERBOSE(nullptr, TRACE_MSG_METH_INT, METH_NAME, this, info.OffsetsChangeId);

    m_info = info;
}