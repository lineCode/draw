#pragma once

#include "draw/common.h"
#include "draw/all.h"

namespace cultlang {
namespace draw
{
	CULTLANG_DRAW_EXPORTED void make_canvas_bindings(craft::types::instance<craft::lisp::Module> m);
}}
CRAFT_TYPE_DECLARE(CULTLANG_DRAW_EXPORTED, SkCanvas)
