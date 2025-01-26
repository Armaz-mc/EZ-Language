
// Generated from grammar/EZLanguage.g4 by ANTLR 4.13.2


#include "EZLanguageListener.h"

#include "EZLanguageParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct EZLanguageParserStaticData final {
  EZLanguageParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  EZLanguageParserStaticData(const EZLanguageParserStaticData&) = delete;
  EZLanguageParserStaticData(EZLanguageParserStaticData&&) = delete;
  EZLanguageParserStaticData& operator=(const EZLanguageParserStaticData&) = delete;
  EZLanguageParserStaticData& operator=(EZLanguageParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ezlanguageParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<EZLanguageParserStaticData> ezlanguageParserStaticData = nullptr;

void ezlanguageParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (ezlanguageParserStaticData != nullptr) {
    return;
  }
#else
  assert(ezlanguageParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<EZLanguageParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "envDeclaration", "includeStatement", "friendStatement", 
      "packageDeclaration", "classDeclaration", "variableDeclaration", "functionDeclaration", 
      "parameterList", "parameter", "functionCall", "argumentList", "controlFlowStatement", 
      "ifStatement", "loopStatement", "foreachStatement", "tryCatchStatement", 
      "runStatement", "expressionStatement", "expression", "primaryExpression", 
      "literal", "accessModifier", "type", "baseType", "mapType"
    },
    std::vector<std::string>{
      "", "'doing'", "';'", "'include'", "'friend'", "':'", "'as'", "'package'", 
      "'class'", "'('", "')'", "'extends'", "'implements'", "','", "'{'", 
      "'}'", "'='", "'if'", "'elif'", "'else'", "'while'", "'for'", "'in'", 
      "'try'", "'catch'", "'finally'", "'run'", "'public'", "'private'", 
      "'protected'", "'[]'", "'int'", "'float'", "'boolean'", "'string'", 
      "'void'", "'map'", "'<'", "'>'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "OPERATOR", "IDENTIFIER", "STRING", "NUMBER", 
      "BOOLEAN", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,44,347,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,0,1,0,
  	1,0,5,0,60,8,0,10,0,12,0,63,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,3,1,75,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,5,1,5,1,5,1,5,5,5,97,8,5,10,5,12,5,100,9,5,1,6,3,6,103,8,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,3,6,111,8,6,1,6,1,6,1,6,1,6,5,6,117,8,6,10,6,
  	12,6,120,9,6,3,6,122,8,6,1,6,1,6,1,6,5,6,127,8,6,10,6,12,6,130,9,6,1,
  	6,1,6,1,7,3,7,135,8,7,1,7,1,7,1,7,1,7,3,7,141,8,7,1,7,1,7,1,8,3,8,146,
  	8,8,1,8,1,8,1,8,1,8,3,8,152,8,8,1,8,1,8,1,8,5,8,157,8,8,10,8,12,8,160,
  	9,8,1,8,1,8,1,9,1,9,1,9,5,9,167,8,9,10,9,12,9,170,9,9,1,10,1,10,1,10,
  	1,11,1,11,1,11,3,11,178,8,11,1,11,1,11,1,11,1,12,1,12,1,12,5,12,186,8,
  	12,10,12,12,12,189,9,12,1,13,1,13,3,13,193,8,13,1,14,1,14,1,14,1,14,1,
  	14,1,14,5,14,201,8,14,10,14,12,14,204,9,14,1,14,1,14,1,14,1,14,1,14,1,
  	14,1,14,5,14,213,8,14,10,14,12,14,216,9,14,1,14,1,14,5,14,220,8,14,10,
  	14,12,14,223,9,14,1,14,1,14,1,14,5,14,228,8,14,10,14,12,14,231,9,14,1,
  	14,3,14,234,8,14,1,15,1,15,1,15,3,15,239,8,15,1,15,1,15,1,15,5,15,244,
  	8,15,10,15,12,15,247,9,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,5,16,
  	257,8,16,10,16,12,16,260,9,16,1,16,1,16,1,17,1,17,1,17,5,17,267,8,17,
  	10,17,12,17,270,9,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,5,17,279,8,17,
  	10,17,12,17,282,9,17,1,17,3,17,285,8,17,1,17,1,17,1,17,5,17,290,8,17,
  	10,17,12,17,293,9,17,1,17,3,17,296,8,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,19,1,19,1,19,1,20,1,20,1,20,5,20,310,8,20,10,20,12,20,313,9,20,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,3,21,322,8,21,1,22,1,22,1,23,1,23,1,24,
  	1,24,3,24,330,8,24,1,25,1,25,1,25,1,25,1,25,1,25,3,25,338,8,25,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,0,0,27,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,0,3,1,0,20,21,1,0,41,43,
  	1,0,27,29,370,0,61,1,0,0,0,2,74,1,0,0,0,4,76,1,0,0,0,6,80,1,0,0,0,8,84,
  	1,0,0,0,10,92,1,0,0,0,12,102,1,0,0,0,14,134,1,0,0,0,16,145,1,0,0,0,18,
  	163,1,0,0,0,20,171,1,0,0,0,22,174,1,0,0,0,24,182,1,0,0,0,26,192,1,0,0,
  	0,28,194,1,0,0,0,30,235,1,0,0,0,32,250,1,0,0,0,34,263,1,0,0,0,36,297,
  	1,0,0,0,38,303,1,0,0,0,40,306,1,0,0,0,42,321,1,0,0,0,44,323,1,0,0,0,46,
  	325,1,0,0,0,48,327,1,0,0,0,50,337,1,0,0,0,52,339,1,0,0,0,54,60,3,2,1,
  	0,55,60,3,12,6,0,56,60,3,10,5,0,57,60,3,34,17,0,58,60,3,36,18,0,59,54,
  	1,0,0,0,59,55,1,0,0,0,59,56,1,0,0,0,59,57,1,0,0,0,59,58,1,0,0,0,60,63,
  	1,0,0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,64,1,0,0,0,63,61,1,0,0,0,64,65,
  	5,0,0,1,65,1,1,0,0,0,66,75,3,4,2,0,67,75,3,6,3,0,68,75,3,8,4,0,69,75,
  	3,38,19,0,70,75,3,22,11,0,71,75,3,14,7,0,72,75,3,26,13,0,73,75,3,32,16,
  	0,74,66,1,0,0,0,74,67,1,0,0,0,74,68,1,0,0,0,74,69,1,0,0,0,74,70,1,0,0,
  	0,74,71,1,0,0,0,74,72,1,0,0,0,74,73,1,0,0,0,75,3,1,0,0,0,76,77,5,1,0,
  	0,77,78,5,40,0,0,78,79,5,2,0,0,79,5,1,0,0,0,80,81,5,3,0,0,81,82,5,40,
  	0,0,82,83,5,2,0,0,83,7,1,0,0,0,84,85,5,4,0,0,85,86,5,40,0,0,86,87,5,5,
  	0,0,87,88,5,40,0,0,88,89,5,6,0,0,89,90,5,40,0,0,90,91,5,2,0,0,91,9,1,
  	0,0,0,92,93,5,7,0,0,93,94,5,40,0,0,94,98,5,5,0,0,95,97,3,12,6,0,96,95,
  	1,0,0,0,97,100,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,11,1,0,0,0,100,
  	98,1,0,0,0,101,103,3,46,23,0,102,101,1,0,0,0,102,103,1,0,0,0,103,104,
  	1,0,0,0,104,105,5,8,0,0,105,106,5,40,0,0,106,107,5,9,0,0,107,110,5,10,
  	0,0,108,109,5,11,0,0,109,111,5,40,0,0,110,108,1,0,0,0,110,111,1,0,0,0,
  	111,121,1,0,0,0,112,113,5,12,0,0,113,118,5,40,0,0,114,115,5,13,0,0,115,
  	117,5,40,0,0,116,114,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,118,119,
  	1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,121,112,1,0,0,0,121,122,1,0,0,
  	0,122,123,1,0,0,0,123,128,5,14,0,0,124,127,3,14,7,0,125,127,3,16,8,0,
  	126,124,1,0,0,0,126,125,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,0,128,129,
  	1,0,0,0,129,131,1,0,0,0,130,128,1,0,0,0,131,132,5,15,0,0,132,13,1,0,0,
  	0,133,135,3,46,23,0,134,133,1,0,0,0,134,135,1,0,0,0,135,136,1,0,0,0,136,
  	137,3,48,24,0,137,140,5,40,0,0,138,139,5,16,0,0,139,141,3,40,20,0,140,
  	138,1,0,0,0,140,141,1,0,0,0,141,142,1,0,0,0,142,143,5,2,0,0,143,15,1,
  	0,0,0,144,146,3,46,23,0,145,144,1,0,0,0,145,146,1,0,0,0,146,147,1,0,0,
  	0,147,148,3,48,24,0,148,149,5,40,0,0,149,151,5,9,0,0,150,152,3,18,9,0,
  	151,150,1,0,0,0,151,152,1,0,0,0,152,153,1,0,0,0,153,154,5,10,0,0,154,
  	158,5,14,0,0,155,157,3,2,1,0,156,155,1,0,0,0,157,160,1,0,0,0,158,156,
  	1,0,0,0,158,159,1,0,0,0,159,161,1,0,0,0,160,158,1,0,0,0,161,162,5,15,
  	0,0,162,17,1,0,0,0,163,168,3,20,10,0,164,165,5,13,0,0,165,167,3,20,10,
  	0,166,164,1,0,0,0,167,170,1,0,0,0,168,166,1,0,0,0,168,169,1,0,0,0,169,
  	19,1,0,0,0,170,168,1,0,0,0,171,172,3,48,24,0,172,173,5,40,0,0,173,21,
  	1,0,0,0,174,175,5,40,0,0,175,177,5,9,0,0,176,178,3,24,12,0,177,176,1,
  	0,0,0,177,178,1,0,0,0,178,179,1,0,0,0,179,180,5,10,0,0,180,181,5,2,0,
  	0,181,23,1,0,0,0,182,187,3,40,20,0,183,184,5,13,0,0,184,186,3,40,20,0,
  	185,183,1,0,0,0,186,189,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,25,
  	1,0,0,0,189,187,1,0,0,0,190,193,3,28,14,0,191,193,3,30,15,0,192,190,1,
  	0,0,0,192,191,1,0,0,0,193,27,1,0,0,0,194,195,5,17,0,0,195,196,5,9,0,0,
  	196,197,3,40,20,0,197,198,5,10,0,0,198,202,5,14,0,0,199,201,3,2,1,0,200,
  	199,1,0,0,0,201,204,1,0,0,0,202,200,1,0,0,0,202,203,1,0,0,0,203,205,1,
  	0,0,0,204,202,1,0,0,0,205,221,5,15,0,0,206,207,5,18,0,0,207,208,5,9,0,
  	0,208,209,3,40,20,0,209,210,5,10,0,0,210,214,5,14,0,0,211,213,3,2,1,0,
  	212,211,1,0,0,0,213,216,1,0,0,0,214,212,1,0,0,0,214,215,1,0,0,0,215,217,
  	1,0,0,0,216,214,1,0,0,0,217,218,5,15,0,0,218,220,1,0,0,0,219,206,1,0,
  	0,0,220,223,1,0,0,0,221,219,1,0,0,0,221,222,1,0,0,0,222,233,1,0,0,0,223,
  	221,1,0,0,0,224,225,5,19,0,0,225,229,5,14,0,0,226,228,3,2,1,0,227,226,
  	1,0,0,0,228,231,1,0,0,0,229,227,1,0,0,0,229,230,1,0,0,0,230,232,1,0,0,
  	0,231,229,1,0,0,0,232,234,5,15,0,0,233,224,1,0,0,0,233,234,1,0,0,0,234,
  	29,1,0,0,0,235,236,7,0,0,0,236,238,5,9,0,0,237,239,3,40,20,0,238,237,
  	1,0,0,0,238,239,1,0,0,0,239,240,1,0,0,0,240,241,5,10,0,0,241,245,5,14,
  	0,0,242,244,3,2,1,0,243,242,1,0,0,0,244,247,1,0,0,0,245,243,1,0,0,0,245,
  	246,1,0,0,0,246,248,1,0,0,0,247,245,1,0,0,0,248,249,5,15,0,0,249,31,1,
  	0,0,0,250,251,5,21,0,0,251,252,5,40,0,0,252,253,5,22,0,0,253,254,5,40,
  	0,0,254,258,5,14,0,0,255,257,3,2,1,0,256,255,1,0,0,0,257,260,1,0,0,0,
  	258,256,1,0,0,0,258,259,1,0,0,0,259,261,1,0,0,0,260,258,1,0,0,0,261,262,
  	5,15,0,0,262,33,1,0,0,0,263,264,5,23,0,0,264,268,5,14,0,0,265,267,3,2,
  	1,0,266,265,1,0,0,0,267,270,1,0,0,0,268,266,1,0,0,0,268,269,1,0,0,0,269,
  	271,1,0,0,0,270,268,1,0,0,0,271,284,5,15,0,0,272,273,5,24,0,0,273,274,
  	5,9,0,0,274,275,5,40,0,0,275,276,5,10,0,0,276,280,5,14,0,0,277,279,3,
  	2,1,0,278,277,1,0,0,0,279,282,1,0,0,0,280,278,1,0,0,0,280,281,1,0,0,0,
  	281,283,1,0,0,0,282,280,1,0,0,0,283,285,5,15,0,0,284,272,1,0,0,0,284,
  	285,1,0,0,0,285,295,1,0,0,0,286,287,5,25,0,0,287,291,5,14,0,0,288,290,
  	3,2,1,0,289,288,1,0,0,0,290,293,1,0,0,0,291,289,1,0,0,0,291,292,1,0,0,
  	0,292,294,1,0,0,0,293,291,1,0,0,0,294,296,5,15,0,0,295,286,1,0,0,0,295,
  	296,1,0,0,0,296,35,1,0,0,0,297,298,5,26,0,0,298,299,5,40,0,0,299,300,
  	5,5,0,0,300,301,5,41,0,0,301,302,5,2,0,0,302,37,1,0,0,0,303,304,3,40,
  	20,0,304,305,5,2,0,0,305,39,1,0,0,0,306,311,3,42,21,0,307,308,5,39,0,
  	0,308,310,3,42,21,0,309,307,1,0,0,0,310,313,1,0,0,0,311,309,1,0,0,0,311,
  	312,1,0,0,0,312,41,1,0,0,0,313,311,1,0,0,0,314,322,5,40,0,0,315,322,3,
  	44,22,0,316,322,3,22,11,0,317,318,5,9,0,0,318,319,3,40,20,0,319,320,5,
  	10,0,0,320,322,1,0,0,0,321,314,1,0,0,0,321,315,1,0,0,0,321,316,1,0,0,
  	0,321,317,1,0,0,0,322,43,1,0,0,0,323,324,7,1,0,0,324,45,1,0,0,0,325,326,
  	7,2,0,0,326,47,1,0,0,0,327,329,3,50,25,0,328,330,5,30,0,0,329,328,1,0,
  	0,0,329,330,1,0,0,0,330,49,1,0,0,0,331,338,5,31,0,0,332,338,5,32,0,0,
  	333,338,5,33,0,0,334,338,5,34,0,0,335,338,5,35,0,0,336,338,3,52,26,0,
  	337,331,1,0,0,0,337,332,1,0,0,0,337,333,1,0,0,0,337,334,1,0,0,0,337,335,
  	1,0,0,0,337,336,1,0,0,0,338,51,1,0,0,0,339,340,5,36,0,0,340,341,5,37,
  	0,0,341,342,3,50,25,0,342,343,5,13,0,0,343,344,3,50,25,0,344,345,5,38,
  	0,0,345,53,1,0,0,0,36,59,61,74,98,102,110,118,121,126,128,134,140,145,
  	151,158,168,177,187,192,202,214,221,229,233,238,245,258,268,280,284,291,
  	295,311,321,329,337
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ezlanguageParserStaticData = std::move(staticData);
}

}

EZLanguageParser::EZLanguageParser(TokenStream *input) : EZLanguageParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

EZLanguageParser::EZLanguageParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  EZLanguageParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ezlanguageParserStaticData->atn, ezlanguageParserStaticData->decisionToDFA, ezlanguageParserStaticData->sharedContextCache, options);
}

EZLanguageParser::~EZLanguageParser() {
  delete _interpreter;
}

const atn::ATN& EZLanguageParser::getATN() const {
  return *ezlanguageParserStaticData->atn;
}

std::string EZLanguageParser::getGrammarFileName() const {
  return "EZLanguage.g4";
}

const std::vector<std::string>& EZLanguageParser::getRuleNames() const {
  return ezlanguageParserStaticData->ruleNames;
}

const dfa::Vocabulary& EZLanguageParser::getVocabulary() const {
  return ezlanguageParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView EZLanguageParser::getSerializedATN() const {
  return ezlanguageParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

EZLanguageParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::ProgramContext::EOF() {
  return getToken(EZLanguageParser::EOF, 0);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::ProgramContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::ProgramContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}

std::vector<EZLanguageParser::ClassDeclarationContext *> EZLanguageParser::ProgramContext::classDeclaration() {
  return getRuleContexts<EZLanguageParser::ClassDeclarationContext>();
}

EZLanguageParser::ClassDeclarationContext* EZLanguageParser::ProgramContext::classDeclaration(size_t i) {
  return getRuleContext<EZLanguageParser::ClassDeclarationContext>(i);
}

std::vector<EZLanguageParser::PackageDeclarationContext *> EZLanguageParser::ProgramContext::packageDeclaration() {
  return getRuleContexts<EZLanguageParser::PackageDeclarationContext>();
}

EZLanguageParser::PackageDeclarationContext* EZLanguageParser::ProgramContext::packageDeclaration(size_t i) {
  return getRuleContext<EZLanguageParser::PackageDeclarationContext>(i);
}

std::vector<EZLanguageParser::TryCatchStatementContext *> EZLanguageParser::ProgramContext::tryCatchStatement() {
  return getRuleContexts<EZLanguageParser::TryCatchStatementContext>();
}

EZLanguageParser::TryCatchStatementContext* EZLanguageParser::ProgramContext::tryCatchStatement(size_t i) {
  return getRuleContext<EZLanguageParser::TryCatchStatementContext>(i);
}

std::vector<EZLanguageParser::RunStatementContext *> EZLanguageParser::ProgramContext::runStatement() {
  return getRuleContexts<EZLanguageParser::RunStatementContext>();
}

EZLanguageParser::RunStatementContext* EZLanguageParser::ProgramContext::runStatement(size_t i) {
  return getRuleContext<EZLanguageParser::RunStatementContext>(i);
}


size_t EZLanguageParser::ProgramContext::getRuleIndex() const {
  return EZLanguageParser::RuleProgram;
}

void EZLanguageParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void EZLanguageParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

EZLanguageParser::ProgramContext* EZLanguageParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, EZLanguageParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628984185754) != 0)) {
      setState(59);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(54);
        statement();
        break;
      }

      case 2: {
        setState(55);
        classDeclaration();
        break;
      }

      case 3: {
        setState(56);
        packageDeclaration();
        break;
      }

      case 4: {
        setState(57);
        tryCatchStatement();
        break;
      }

      case 5: {
        setState(58);
        runStatement();
        break;
      }

      default:
        break;
      }
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(64);
    match(EZLanguageParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

EZLanguageParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::EnvDeclarationContext* EZLanguageParser::StatementContext::envDeclaration() {
  return getRuleContext<EZLanguageParser::EnvDeclarationContext>(0);
}

EZLanguageParser::IncludeStatementContext* EZLanguageParser::StatementContext::includeStatement() {
  return getRuleContext<EZLanguageParser::IncludeStatementContext>(0);
}

EZLanguageParser::FriendStatementContext* EZLanguageParser::StatementContext::friendStatement() {
  return getRuleContext<EZLanguageParser::FriendStatementContext>(0);
}

EZLanguageParser::ExpressionStatementContext* EZLanguageParser::StatementContext::expressionStatement() {
  return getRuleContext<EZLanguageParser::ExpressionStatementContext>(0);
}

EZLanguageParser::FunctionCallContext* EZLanguageParser::StatementContext::functionCall() {
  return getRuleContext<EZLanguageParser::FunctionCallContext>(0);
}

EZLanguageParser::VariableDeclarationContext* EZLanguageParser::StatementContext::variableDeclaration() {
  return getRuleContext<EZLanguageParser::VariableDeclarationContext>(0);
}

EZLanguageParser::ControlFlowStatementContext* EZLanguageParser::StatementContext::controlFlowStatement() {
  return getRuleContext<EZLanguageParser::ControlFlowStatementContext>(0);
}

EZLanguageParser::ForeachStatementContext* EZLanguageParser::StatementContext::foreachStatement() {
  return getRuleContext<EZLanguageParser::ForeachStatementContext>(0);
}


size_t EZLanguageParser::StatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleStatement;
}

void EZLanguageParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void EZLanguageParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

EZLanguageParser::StatementContext* EZLanguageParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, EZLanguageParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(74);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(66);
      envDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(67);
      includeStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(68);
      friendStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(69);
      expressionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(70);
      functionCall();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(71);
      variableDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(72);
      controlFlowStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(73);
      foreachStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnvDeclarationContext ------------------------------------------------------------------

EZLanguageParser::EnvDeclarationContext::EnvDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::EnvDeclarationContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}


size_t EZLanguageParser::EnvDeclarationContext::getRuleIndex() const {
  return EZLanguageParser::RuleEnvDeclaration;
}

void EZLanguageParser::EnvDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnvDeclaration(this);
}

void EZLanguageParser::EnvDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnvDeclaration(this);
}

EZLanguageParser::EnvDeclarationContext* EZLanguageParser::envDeclaration() {
  EnvDeclarationContext *_localctx = _tracker.createInstance<EnvDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, EZLanguageParser::RuleEnvDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(EZLanguageParser::T__0);
    setState(77);
    match(EZLanguageParser::IDENTIFIER);
    setState(78);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeStatementContext ------------------------------------------------------------------

EZLanguageParser::IncludeStatementContext::IncludeStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::IncludeStatementContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}


size_t EZLanguageParser::IncludeStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleIncludeStatement;
}

void EZLanguageParser::IncludeStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncludeStatement(this);
}

void EZLanguageParser::IncludeStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncludeStatement(this);
}

EZLanguageParser::IncludeStatementContext* EZLanguageParser::includeStatement() {
  IncludeStatementContext *_localctx = _tracker.createInstance<IncludeStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, EZLanguageParser::RuleIncludeStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(EZLanguageParser::T__2);
    setState(81);
    match(EZLanguageParser::IDENTIFIER);
    setState(82);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FriendStatementContext ------------------------------------------------------------------

EZLanguageParser::FriendStatementContext::FriendStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> EZLanguageParser::FriendStatementContext::IDENTIFIER() {
  return getTokens(EZLanguageParser::IDENTIFIER);
}

tree::TerminalNode* EZLanguageParser::FriendStatementContext::IDENTIFIER(size_t i) {
  return getToken(EZLanguageParser::IDENTIFIER, i);
}


size_t EZLanguageParser::FriendStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleFriendStatement;
}

void EZLanguageParser::FriendStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFriendStatement(this);
}

void EZLanguageParser::FriendStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFriendStatement(this);
}

EZLanguageParser::FriendStatementContext* EZLanguageParser::friendStatement() {
  FriendStatementContext *_localctx = _tracker.createInstance<FriendStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, EZLanguageParser::RuleFriendStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(EZLanguageParser::T__3);
    setState(85);
    match(EZLanguageParser::IDENTIFIER);
    setState(86);
    match(EZLanguageParser::T__4);
    setState(87);
    match(EZLanguageParser::IDENTIFIER);
    setState(88);
    match(EZLanguageParser::T__5);
    setState(89);
    match(EZLanguageParser::IDENTIFIER);
    setState(90);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageDeclarationContext ------------------------------------------------------------------

EZLanguageParser::PackageDeclarationContext::PackageDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::PackageDeclarationContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

std::vector<EZLanguageParser::ClassDeclarationContext *> EZLanguageParser::PackageDeclarationContext::classDeclaration() {
  return getRuleContexts<EZLanguageParser::ClassDeclarationContext>();
}

EZLanguageParser::ClassDeclarationContext* EZLanguageParser::PackageDeclarationContext::classDeclaration(size_t i) {
  return getRuleContext<EZLanguageParser::ClassDeclarationContext>(i);
}


size_t EZLanguageParser::PackageDeclarationContext::getRuleIndex() const {
  return EZLanguageParser::RulePackageDeclaration;
}

void EZLanguageParser::PackageDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageDeclaration(this);
}

void EZLanguageParser::PackageDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageDeclaration(this);
}

EZLanguageParser::PackageDeclarationContext* EZLanguageParser::packageDeclaration() {
  PackageDeclarationContext *_localctx = _tracker.createInstance<PackageDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, EZLanguageParser::RulePackageDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(EZLanguageParser::T__6);
    setState(93);
    match(EZLanguageParser::IDENTIFIER);
    setState(94);
    match(EZLanguageParser::T__4);
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(95);
        classDeclaration(); 
      }
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

EZLanguageParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> EZLanguageParser::ClassDeclarationContext::IDENTIFIER() {
  return getTokens(EZLanguageParser::IDENTIFIER);
}

tree::TerminalNode* EZLanguageParser::ClassDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(EZLanguageParser::IDENTIFIER, i);
}

EZLanguageParser::AccessModifierContext* EZLanguageParser::ClassDeclarationContext::accessModifier() {
  return getRuleContext<EZLanguageParser::AccessModifierContext>(0);
}

std::vector<EZLanguageParser::VariableDeclarationContext *> EZLanguageParser::ClassDeclarationContext::variableDeclaration() {
  return getRuleContexts<EZLanguageParser::VariableDeclarationContext>();
}

EZLanguageParser::VariableDeclarationContext* EZLanguageParser::ClassDeclarationContext::variableDeclaration(size_t i) {
  return getRuleContext<EZLanguageParser::VariableDeclarationContext>(i);
}

std::vector<EZLanguageParser::FunctionDeclarationContext *> EZLanguageParser::ClassDeclarationContext::functionDeclaration() {
  return getRuleContexts<EZLanguageParser::FunctionDeclarationContext>();
}

EZLanguageParser::FunctionDeclarationContext* EZLanguageParser::ClassDeclarationContext::functionDeclaration(size_t i) {
  return getRuleContext<EZLanguageParser::FunctionDeclarationContext>(i);
}


size_t EZLanguageParser::ClassDeclarationContext::getRuleIndex() const {
  return EZLanguageParser::RuleClassDeclaration;
}

void EZLanguageParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void EZLanguageParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}

EZLanguageParser::ClassDeclarationContext* EZLanguageParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, EZLanguageParser::RuleClassDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(101);
      accessModifier();
    }
    setState(104);
    match(EZLanguageParser::T__7);
    setState(105);
    match(EZLanguageParser::IDENTIFIER);
    setState(106);
    match(EZLanguageParser::T__8);
    setState(107);
    match(EZLanguageParser::T__9);
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__10) {
      setState(108);
      match(EZLanguageParser::T__10);
      setState(109);
      match(EZLanguageParser::IDENTIFIER);
    }
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__11) {
      setState(112);
      match(EZLanguageParser::T__11);
      setState(113);
      match(EZLanguageParser::IDENTIFIER);
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == EZLanguageParser::T__12) {
        setState(114);
        match(EZLanguageParser::T__12);
        setState(115);
        match(EZLanguageParser::IDENTIFIER);
        setState(120);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(123);
    match(EZLanguageParser::T__13);
    setState(128);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 136230993920) != 0)) {
      setState(126);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
      case 1: {
        setState(124);
        variableDeclaration();
        break;
      }

      case 2: {
        setState(125);
        functionDeclaration();
        break;
      }

      default:
        break;
      }
      setState(130);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(131);
    match(EZLanguageParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

EZLanguageParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::TypeContext* EZLanguageParser::VariableDeclarationContext::type() {
  return getRuleContext<EZLanguageParser::TypeContext>(0);
}

tree::TerminalNode* EZLanguageParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

EZLanguageParser::AccessModifierContext* EZLanguageParser::VariableDeclarationContext::accessModifier() {
  return getRuleContext<EZLanguageParser::AccessModifierContext>(0);
}

EZLanguageParser::ExpressionContext* EZLanguageParser::VariableDeclarationContext::expression() {
  return getRuleContext<EZLanguageParser::ExpressionContext>(0);
}


size_t EZLanguageParser::VariableDeclarationContext::getRuleIndex() const {
  return EZLanguageParser::RuleVariableDeclaration;
}

void EZLanguageParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void EZLanguageParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

EZLanguageParser::VariableDeclarationContext* EZLanguageParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, EZLanguageParser::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(133);
      accessModifier();
    }
    setState(136);
    type();
    setState(137);
    match(EZLanguageParser::IDENTIFIER);
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__15) {
      setState(138);
      match(EZLanguageParser::T__15);
      setState(139);
      expression();
    }
    setState(142);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

EZLanguageParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::TypeContext* EZLanguageParser::FunctionDeclarationContext::type() {
  return getRuleContext<EZLanguageParser::TypeContext>(0);
}

tree::TerminalNode* EZLanguageParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

EZLanguageParser::AccessModifierContext* EZLanguageParser::FunctionDeclarationContext::accessModifier() {
  return getRuleContext<EZLanguageParser::AccessModifierContext>(0);
}

EZLanguageParser::ParameterListContext* EZLanguageParser::FunctionDeclarationContext::parameterList() {
  return getRuleContext<EZLanguageParser::ParameterListContext>(0);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::FunctionDeclarationContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::FunctionDeclarationContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}


size_t EZLanguageParser::FunctionDeclarationContext::getRuleIndex() const {
  return EZLanguageParser::RuleFunctionDeclaration;
}

void EZLanguageParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void EZLanguageParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

EZLanguageParser::FunctionDeclarationContext* EZLanguageParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, EZLanguageParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0)) {
      setState(144);
      accessModifier();
    }
    setState(147);
    type();
    setState(148);
    match(EZLanguageParser::IDENTIFIER);
    setState(149);
    match(EZLanguageParser::T__8);
    setState(151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 135291469824) != 0)) {
      setState(150);
      parameterList();
    }
    setState(153);
    match(EZLanguageParser::T__9);
    setState(154);
    match(EZLanguageParser::T__13);
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687898) != 0)) {
      setState(155);
      statement();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(EZLanguageParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

EZLanguageParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::ParameterContext *> EZLanguageParser::ParameterListContext::parameter() {
  return getRuleContexts<EZLanguageParser::ParameterContext>();
}

EZLanguageParser::ParameterContext* EZLanguageParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<EZLanguageParser::ParameterContext>(i);
}


size_t EZLanguageParser::ParameterListContext::getRuleIndex() const {
  return EZLanguageParser::RuleParameterList;
}

void EZLanguageParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void EZLanguageParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}

EZLanguageParser::ParameterListContext* EZLanguageParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 18, EZLanguageParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    parameter();
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::T__12) {
      setState(164);
      match(EZLanguageParser::T__12);
      setState(165);
      parameter();
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

EZLanguageParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::TypeContext* EZLanguageParser::ParameterContext::type() {
  return getRuleContext<EZLanguageParser::TypeContext>(0);
}

tree::TerminalNode* EZLanguageParser::ParameterContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}


size_t EZLanguageParser::ParameterContext::getRuleIndex() const {
  return EZLanguageParser::RuleParameter;
}

void EZLanguageParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void EZLanguageParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

EZLanguageParser::ParameterContext* EZLanguageParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 20, EZLanguageParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    type();
    setState(172);
    match(EZLanguageParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

EZLanguageParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::FunctionCallContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

EZLanguageParser::ArgumentListContext* EZLanguageParser::FunctionCallContext::argumentList() {
  return getRuleContext<EZLanguageParser::ArgumentListContext>(0);
}


size_t EZLanguageParser::FunctionCallContext::getRuleIndex() const {
  return EZLanguageParser::RuleFunctionCall;
}

void EZLanguageParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void EZLanguageParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

EZLanguageParser::FunctionCallContext* EZLanguageParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 22, EZLanguageParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(EZLanguageParser::IDENTIFIER);
    setState(175);
    match(EZLanguageParser::T__8);
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492674417152) != 0)) {
      setState(176);
      argumentList();
    }
    setState(179);
    match(EZLanguageParser::T__9);
    setState(180);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

EZLanguageParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::ExpressionContext *> EZLanguageParser::ArgumentListContext::expression() {
  return getRuleContexts<EZLanguageParser::ExpressionContext>();
}

EZLanguageParser::ExpressionContext* EZLanguageParser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<EZLanguageParser::ExpressionContext>(i);
}


size_t EZLanguageParser::ArgumentListContext::getRuleIndex() const {
  return EZLanguageParser::RuleArgumentList;
}

void EZLanguageParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void EZLanguageParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}

EZLanguageParser::ArgumentListContext* EZLanguageParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 24, EZLanguageParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    expression();
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::T__12) {
      setState(183);
      match(EZLanguageParser::T__12);
      setState(184);
      expression();
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlFlowStatementContext ------------------------------------------------------------------

EZLanguageParser::ControlFlowStatementContext::ControlFlowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::IfStatementContext* EZLanguageParser::ControlFlowStatementContext::ifStatement() {
  return getRuleContext<EZLanguageParser::IfStatementContext>(0);
}

EZLanguageParser::LoopStatementContext* EZLanguageParser::ControlFlowStatementContext::loopStatement() {
  return getRuleContext<EZLanguageParser::LoopStatementContext>(0);
}


size_t EZLanguageParser::ControlFlowStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleControlFlowStatement;
}

void EZLanguageParser::ControlFlowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlFlowStatement(this);
}

void EZLanguageParser::ControlFlowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlFlowStatement(this);
}

EZLanguageParser::ControlFlowStatementContext* EZLanguageParser::controlFlowStatement() {
  ControlFlowStatementContext *_localctx = _tracker.createInstance<ControlFlowStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, EZLanguageParser::RuleControlFlowStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(192);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EZLanguageParser::T__16: {
        enterOuterAlt(_localctx, 1);
        setState(190);
        ifStatement();
        break;
      }

      case EZLanguageParser::T__19:
      case EZLanguageParser::T__20: {
        enterOuterAlt(_localctx, 2);
        setState(191);
        loopStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

EZLanguageParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::ExpressionContext *> EZLanguageParser::IfStatementContext::expression() {
  return getRuleContexts<EZLanguageParser::ExpressionContext>();
}

EZLanguageParser::ExpressionContext* EZLanguageParser::IfStatementContext::expression(size_t i) {
  return getRuleContext<EZLanguageParser::ExpressionContext>(i);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::IfStatementContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}


size_t EZLanguageParser::IfStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleIfStatement;
}

void EZLanguageParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void EZLanguageParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

EZLanguageParser::IfStatementContext* EZLanguageParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, EZLanguageParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(EZLanguageParser::T__16);
    setState(195);
    match(EZLanguageParser::T__8);
    setState(196);
    expression();
    setState(197);
    match(EZLanguageParser::T__9);
    setState(198);
    match(EZLanguageParser::T__13);
    setState(202);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687898) != 0)) {
      setState(199);
      statement();
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(205);
    match(EZLanguageParser::T__14);
    setState(221);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::T__17) {
      setState(206);
      match(EZLanguageParser::T__17);
      setState(207);
      match(EZLanguageParser::T__8);
      setState(208);
      expression();
      setState(209);
      match(EZLanguageParser::T__9);
      setState(210);
      match(EZLanguageParser::T__13);
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16628908687898) != 0)) {
        setState(211);
        statement();
        setState(216);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(217);
      match(EZLanguageParser::T__14);
      setState(223);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__18) {
      setState(224);
      match(EZLanguageParser::T__18);
      setState(225);
      match(EZLanguageParser::T__13);
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16628908687898) != 0)) {
        setState(226);
        statement();
        setState(231);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(232);
      match(EZLanguageParser::T__14);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopStatementContext ------------------------------------------------------------------

EZLanguageParser::LoopStatementContext::LoopStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::ExpressionContext* EZLanguageParser::LoopStatementContext::expression() {
  return getRuleContext<EZLanguageParser::ExpressionContext>(0);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::LoopStatementContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::LoopStatementContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}


size_t EZLanguageParser::LoopStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleLoopStatement;
}

void EZLanguageParser::LoopStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStatement(this);
}

void EZLanguageParser::LoopStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStatement(this);
}

EZLanguageParser::LoopStatementContext* EZLanguageParser::loopStatement() {
  LoopStatementContext *_localctx = _tracker.createInstance<LoopStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, EZLanguageParser::RuleLoopStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    _la = _input->LA(1);
    if (!(_la == EZLanguageParser::T__19

    || _la == EZLanguageParser::T__20)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(236);
    match(EZLanguageParser::T__8);
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492674417152) != 0)) {
      setState(237);
      expression();
    }
    setState(240);
    match(EZLanguageParser::T__9);
    setState(241);
    match(EZLanguageParser::T__13);
    setState(245);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687898) != 0)) {
      setState(242);
      statement();
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(248);
    match(EZLanguageParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachStatementContext ------------------------------------------------------------------

EZLanguageParser::ForeachStatementContext::ForeachStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> EZLanguageParser::ForeachStatementContext::IDENTIFIER() {
  return getTokens(EZLanguageParser::IDENTIFIER);
}

tree::TerminalNode* EZLanguageParser::ForeachStatementContext::IDENTIFIER(size_t i) {
  return getToken(EZLanguageParser::IDENTIFIER, i);
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::ForeachStatementContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::ForeachStatementContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}


size_t EZLanguageParser::ForeachStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleForeachStatement;
}

void EZLanguageParser::ForeachStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeachStatement(this);
}

void EZLanguageParser::ForeachStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeachStatement(this);
}

EZLanguageParser::ForeachStatementContext* EZLanguageParser::foreachStatement() {
  ForeachStatementContext *_localctx = _tracker.createInstance<ForeachStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, EZLanguageParser::RuleForeachStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(EZLanguageParser::T__20);
    setState(251);
    match(EZLanguageParser::IDENTIFIER);
    setState(252);
    match(EZLanguageParser::T__21);
    setState(253);
    match(EZLanguageParser::IDENTIFIER);
    setState(254);
    match(EZLanguageParser::T__13);
    setState(258);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687898) != 0)) {
      setState(255);
      statement();
      setState(260);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(261);
    match(EZLanguageParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryCatchStatementContext ------------------------------------------------------------------

EZLanguageParser::TryCatchStatementContext::TryCatchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::StatementContext *> EZLanguageParser::TryCatchStatementContext::statement() {
  return getRuleContexts<EZLanguageParser::StatementContext>();
}

EZLanguageParser::StatementContext* EZLanguageParser::TryCatchStatementContext::statement(size_t i) {
  return getRuleContext<EZLanguageParser::StatementContext>(i);
}

tree::TerminalNode* EZLanguageParser::TryCatchStatementContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}


size_t EZLanguageParser::TryCatchStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleTryCatchStatement;
}

void EZLanguageParser::TryCatchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryCatchStatement(this);
}

void EZLanguageParser::TryCatchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryCatchStatement(this);
}

EZLanguageParser::TryCatchStatementContext* EZLanguageParser::tryCatchStatement() {
  TryCatchStatementContext *_localctx = _tracker.createInstance<TryCatchStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, EZLanguageParser::RuleTryCatchStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(EZLanguageParser::T__22);
    setState(264);
    match(EZLanguageParser::T__13);
    setState(268);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16628908687898) != 0)) {
      setState(265);
      statement();
      setState(270);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(271);
    match(EZLanguageParser::T__14);
    setState(284);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__23) {
      setState(272);
      match(EZLanguageParser::T__23);
      setState(273);
      match(EZLanguageParser::T__8);
      setState(274);
      match(EZLanguageParser::IDENTIFIER);
      setState(275);
      match(EZLanguageParser::T__9);
      setState(276);
      match(EZLanguageParser::T__13);
      setState(280);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16628908687898) != 0)) {
        setState(277);
        statement();
        setState(282);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(283);
      match(EZLanguageParser::T__14);
    }
    setState(295);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__24) {
      setState(286);
      match(EZLanguageParser::T__24);
      setState(287);
      match(EZLanguageParser::T__13);
      setState(291);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16628908687898) != 0)) {
        setState(288);
        statement();
        setState(293);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(294);
      match(EZLanguageParser::T__14);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RunStatementContext ------------------------------------------------------------------

EZLanguageParser::RunStatementContext::RunStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::RunStatementContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

tree::TerminalNode* EZLanguageParser::RunStatementContext::STRING() {
  return getToken(EZLanguageParser::STRING, 0);
}


size_t EZLanguageParser::RunStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleRunStatement;
}

void EZLanguageParser::RunStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRunStatement(this);
}

void EZLanguageParser::RunStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRunStatement(this);
}

EZLanguageParser::RunStatementContext* EZLanguageParser::runStatement() {
  RunStatementContext *_localctx = _tracker.createInstance<RunStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, EZLanguageParser::RuleRunStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(EZLanguageParser::T__25);
    setState(298);
    match(EZLanguageParser::IDENTIFIER);
    setState(299);
    match(EZLanguageParser::T__4);
    setState(300);
    match(EZLanguageParser::STRING);
    setState(301);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

EZLanguageParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::ExpressionContext* EZLanguageParser::ExpressionStatementContext::expression() {
  return getRuleContext<EZLanguageParser::ExpressionContext>(0);
}


size_t EZLanguageParser::ExpressionStatementContext::getRuleIndex() const {
  return EZLanguageParser::RuleExpressionStatement;
}

void EZLanguageParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void EZLanguageParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

EZLanguageParser::ExpressionStatementContext* EZLanguageParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, EZLanguageParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    expression();
    setState(304);
    match(EZLanguageParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

EZLanguageParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::PrimaryExpressionContext *> EZLanguageParser::ExpressionContext::primaryExpression() {
  return getRuleContexts<EZLanguageParser::PrimaryExpressionContext>();
}

EZLanguageParser::PrimaryExpressionContext* EZLanguageParser::ExpressionContext::primaryExpression(size_t i) {
  return getRuleContext<EZLanguageParser::PrimaryExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EZLanguageParser::ExpressionContext::OPERATOR() {
  return getTokens(EZLanguageParser::OPERATOR);
}

tree::TerminalNode* EZLanguageParser::ExpressionContext::OPERATOR(size_t i) {
  return getToken(EZLanguageParser::OPERATOR, i);
}


size_t EZLanguageParser::ExpressionContext::getRuleIndex() const {
  return EZLanguageParser::RuleExpression;
}

void EZLanguageParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void EZLanguageParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

EZLanguageParser::ExpressionContext* EZLanguageParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, EZLanguageParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    primaryExpression();
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EZLanguageParser::OPERATOR) {
      setState(307);
      match(EZLanguageParser::OPERATOR);
      setState(308);
      primaryExpression();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

EZLanguageParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::PrimaryExpressionContext::IDENTIFIER() {
  return getToken(EZLanguageParser::IDENTIFIER, 0);
}

EZLanguageParser::LiteralContext* EZLanguageParser::PrimaryExpressionContext::literal() {
  return getRuleContext<EZLanguageParser::LiteralContext>(0);
}

EZLanguageParser::FunctionCallContext* EZLanguageParser::PrimaryExpressionContext::functionCall() {
  return getRuleContext<EZLanguageParser::FunctionCallContext>(0);
}

EZLanguageParser::ExpressionContext* EZLanguageParser::PrimaryExpressionContext::expression() {
  return getRuleContext<EZLanguageParser::ExpressionContext>(0);
}


size_t EZLanguageParser::PrimaryExpressionContext::getRuleIndex() const {
  return EZLanguageParser::RulePrimaryExpression;
}

void EZLanguageParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void EZLanguageParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}

EZLanguageParser::PrimaryExpressionContext* EZLanguageParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, EZLanguageParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(321);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      match(EZLanguageParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(315);
      literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(316);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(317);
      match(EZLanguageParser::T__8);
      setState(318);
      expression();
      setState(319);
      match(EZLanguageParser::T__9);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

EZLanguageParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EZLanguageParser::LiteralContext::STRING() {
  return getToken(EZLanguageParser::STRING, 0);
}

tree::TerminalNode* EZLanguageParser::LiteralContext::NUMBER() {
  return getToken(EZLanguageParser::NUMBER, 0);
}

tree::TerminalNode* EZLanguageParser::LiteralContext::BOOLEAN() {
  return getToken(EZLanguageParser::BOOLEAN, 0);
}


size_t EZLanguageParser::LiteralContext::getRuleIndex() const {
  return EZLanguageParser::RuleLiteral;
}

void EZLanguageParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void EZLanguageParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

EZLanguageParser::LiteralContext* EZLanguageParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 44, EZLanguageParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15393162788864) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessModifierContext ------------------------------------------------------------------

EZLanguageParser::AccessModifierContext::AccessModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t EZLanguageParser::AccessModifierContext::getRuleIndex() const {
  return EZLanguageParser::RuleAccessModifier;
}

void EZLanguageParser::AccessModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessModifier(this);
}

void EZLanguageParser::AccessModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessModifier(this);
}

EZLanguageParser::AccessModifierContext* EZLanguageParser::accessModifier() {
  AccessModifierContext *_localctx = _tracker.createInstance<AccessModifierContext>(_ctx, getState());
  enterRule(_localctx, 46, EZLanguageParser::RuleAccessModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 939524096) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

EZLanguageParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::BaseTypeContext* EZLanguageParser::TypeContext::baseType() {
  return getRuleContext<EZLanguageParser::BaseTypeContext>(0);
}


size_t EZLanguageParser::TypeContext::getRuleIndex() const {
  return EZLanguageParser::RuleType;
}

void EZLanguageParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void EZLanguageParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

EZLanguageParser::TypeContext* EZLanguageParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 48, EZLanguageParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    baseType();
    setState(329);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EZLanguageParser::T__29) {
      setState(328);
      match(EZLanguageParser::T__29);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeContext ------------------------------------------------------------------

EZLanguageParser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EZLanguageParser::MapTypeContext* EZLanguageParser::BaseTypeContext::mapType() {
  return getRuleContext<EZLanguageParser::MapTypeContext>(0);
}


size_t EZLanguageParser::BaseTypeContext::getRuleIndex() const {
  return EZLanguageParser::RuleBaseType;
}

void EZLanguageParser::BaseTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseType(this);
}

void EZLanguageParser::BaseTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseType(this);
}

EZLanguageParser::BaseTypeContext* EZLanguageParser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 50, EZLanguageParser::RuleBaseType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(337);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EZLanguageParser::T__30: {
        enterOuterAlt(_localctx, 1);
        setState(331);
        match(EZLanguageParser::T__30);
        break;
      }

      case EZLanguageParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(332);
        match(EZLanguageParser::T__31);
        break;
      }

      case EZLanguageParser::T__32: {
        enterOuterAlt(_localctx, 3);
        setState(333);
        match(EZLanguageParser::T__32);
        break;
      }

      case EZLanguageParser::T__33: {
        enterOuterAlt(_localctx, 4);
        setState(334);
        match(EZLanguageParser::T__33);
        break;
      }

      case EZLanguageParser::T__34: {
        enterOuterAlt(_localctx, 5);
        setState(335);
        match(EZLanguageParser::T__34);
        break;
      }

      case EZLanguageParser::T__35: {
        enterOuterAlt(_localctx, 6);
        setState(336);
        mapType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapTypeContext ------------------------------------------------------------------

EZLanguageParser::MapTypeContext::MapTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EZLanguageParser::BaseTypeContext *> EZLanguageParser::MapTypeContext::baseType() {
  return getRuleContexts<EZLanguageParser::BaseTypeContext>();
}

EZLanguageParser::BaseTypeContext* EZLanguageParser::MapTypeContext::baseType(size_t i) {
  return getRuleContext<EZLanguageParser::BaseTypeContext>(i);
}


size_t EZLanguageParser::MapTypeContext::getRuleIndex() const {
  return EZLanguageParser::RuleMapType;
}

void EZLanguageParser::MapTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapType(this);
}

void EZLanguageParser::MapTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EZLanguageListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapType(this);
}

EZLanguageParser::MapTypeContext* EZLanguageParser::mapType() {
  MapTypeContext *_localctx = _tracker.createInstance<MapTypeContext>(_ctx, getState());
  enterRule(_localctx, 52, EZLanguageParser::RuleMapType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(EZLanguageParser::T__35);
    setState(340);
    match(EZLanguageParser::T__36);
    setState(341);
    baseType();
    setState(342);
    match(EZLanguageParser::T__12);
    setState(343);
    baseType();
    setState(344);
    match(EZLanguageParser::T__37);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void EZLanguageParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ezlanguageParserInitialize();
#else
  ::antlr4::internal::call_once(ezlanguageParserOnceFlag, ezlanguageParserInitialize);
#endif
}
