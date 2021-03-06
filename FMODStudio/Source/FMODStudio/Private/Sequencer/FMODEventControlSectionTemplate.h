// Copyright (c), Firelight Technologies Pty, Ltd. 2012-2017.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "FMODEventControlSection.h"
#include "FMODEventControlSectionTemplate.generated.h"

USTRUCT()
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{
    GENERATED_BODY()

    FFMODEventControlSectionTemplate() {}
    FFMODEventControlSectionTemplate(const UFMODEventControlSection& Section);

private:
    UPROPERTY()
    FIntegralCurve ControlCurve;

    virtual UScriptStruct& GetScriptStructImpl() const override { return *StaticStruct(); }
    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand, const FMovieSceneContext& Context, const FPersistentEvaluationData& PersistentData, FMovieSceneExecutionTokens& ExecutionTokens) const override;
};
