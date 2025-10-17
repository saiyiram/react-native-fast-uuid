// src/NativeFastUUID.ts
import { TurboModuleRegistry } from 'react-native';
import type { TurboModule } from 'react-native';

// Declare the Spec (the native methods available to JS)
export interface Spec extends TurboModule {
  generateV4(): string;
  generateV7(): string;
}

// Register and export the TurboModule instance
export default TurboModuleRegistry.getEnforcing<Spec>('FastUUID');
// export default fastUuid;
