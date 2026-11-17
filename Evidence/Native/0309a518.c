/* IL2CPP: Dino.Tracking.TrackingEventLevelBase<object>$$SetPlayType
Il2CppObject* Dino_Tracking_TrackingEventLevelBase_object___SetPlayType (Dino_Tracking_TrackingEventLevelBase_TSelf__o* __this, int32_t value, const MethodInfo_2F9A518* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLevelBase<object>$$SetPlayType
   Il2CppObject* Dino_Tracking_TrackingEventLevelBase_object___SetPlayType
   (Dino_Tracking_TrackingEventLevelBase_TSelf__o* __this, int32_t value, const MethodInfo_2F9A518*
   method); */

void Dino_Tracking_TrackingEventLevelBase_object___SetPlayType_2f9a518
               (long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04cc5fc8;
  if ((bRam0000000004f9e73e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc5fc8);
    bRam0000000004f9e73e = 1;
  }
  uStack_38 = 0;
  System_Nullable_Int32Enum____ctor_2bcbf5c(&uStack_38,param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x24) = uStack_38;
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0216b470(lVar3);
  }
  lVar2 = thunk_FUN_0216e7a0(param_1,lVar3);
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021335a4(param_1,lVar3);
}

