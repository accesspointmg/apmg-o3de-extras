/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <Nodes/FeedForward.h>
#include <Models/MultilayerPerceptron.h>

namespace MachineLearning
{
    AZ::VectorN FeedForward::In(INeuralNetworkPtr Model, AZ::VectorN Activations)
    {
        AZStd::unique_ptr<IInferenceContext> inferenceContext;
        inferenceContext.reset(Model->CreateInferenceContext());
        AZ::VectorN results = *Model->Forward(inferenceContext.get(), Activations);
        return results;
    }
}
