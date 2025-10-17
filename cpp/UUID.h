#include <ReactCommon/TurboModule.h>
#include <jsi/jsi.h>

class UUID : public facebook::react::TurboModule {
public:
  UUID(std::shared_ptr<facebook::react::CallInvoker> jsInvoker);
  jsi::Value generateV4(jsi::Runtime &rt, const jsi::Value *args, size_t count);
  jsi::Value generateV7(jsi::Runtime &rt, const jsi::Value *args, size_t count);
};
