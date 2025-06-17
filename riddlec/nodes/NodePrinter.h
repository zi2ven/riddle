/*
 * Copyright (c) 2025 wangziwenhk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once
#include "NodeVisitor.h"

namespace riddle {
    class NodePrinter final : public NodeVisitor {
    public:
        int depth = 0;
        std::any visitInteger(IntegerNode *node) override;
        std::any visitFloat(FloatNode *node) override;
        std::any visitChar(CharNode *node) override;
        std::any visitVarDecl(VarDeclNode *node) override;
        std::any visitObject(ObjectNode *node) override;
        std::any visitProgram(ProgramNode *node) override;
        std::any visitFuncDecl(FuncDeclNode *node) override;
        std::any visitArgDecl(ArgDeclNode *node) override;
        std::any visitBlock(BlockNode *node) override;
        std::any visitCall(CallNode *node) override;
        std::any visitReturn(ReturnNode *node) override;
    };
}
