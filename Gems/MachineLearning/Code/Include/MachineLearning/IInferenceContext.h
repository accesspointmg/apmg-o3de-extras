/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <MachineLearning/Types.h>

namespace MachineLearning
{
    //! This is a light-weight context suitable only for making inferences.
    //! It will not work for training purposes
    struct IInferenceContext
    {
        virtual ~IInferenceContext() = default;
    };

    using IInferenceContextPtr = IInferenceContext*;
}
