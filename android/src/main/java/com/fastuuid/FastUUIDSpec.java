package com.fastuuid;

import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.module.annotations.ReactModule;

@ReactModule(name = FastUUIDModule.NAME)
public abstract class FastUUIDSpec extends NativeFastUUIDSpec implements TurboModule {
  public FastUUIDSpec(ReactApplicationContext context) {
    super(context);
  }
}
