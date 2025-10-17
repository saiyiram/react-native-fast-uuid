package com.fastuuid;

import com.facebook.react.bridge.ReactApplicationContext;

public class FastUUIDModule extends FastUUIDSpec {
  public static final String NAME = "FastUUID";

  public FastUUIDModule(ReactApplicationContext context) {
    super(context);
  }

  @Override
  public String generateV4() {
    return NativeFastUUIDModuleProxy.generateV4();
  }

  @Override
  public String generateV7() {
    return NativeFastUUIDModuleProxy.generateV7();
  }
}
