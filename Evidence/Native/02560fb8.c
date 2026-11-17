/* IL2CPP: Dino.Tracking.ServerTrackingCore$$SetUserProperty
void Dino_Tracking_ServerTrackingCore__SetUserProperty (Dino_Tracking_ServerTrackingCore_o* __this, System_String_o* propertyName, Il2CppObject* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore$$SetUserProperty
   void Dino_Tracking_ServerTrackingCore__SetUserProperty (Dino_Tracking_ServerTrackingCore_o*
   __this, System_String_o* propertyName, Il2CppObject* value, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore__SetUserProperty_2460fb8
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9ce25 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0a30);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cc0a38);
    FUN_02132f7c(PTR_DAT_04caa800);
    FUN_02132f7c(PTR_DAT_04cc0a40);
    FUN_02132f7c(PTR_DAT_04cae4f8);
    bRam0000000004f9ce25 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  puVar2 = PTR_DAT_04cc0a40;
  puVar1 = PTR_DAT_04cc0a30;
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (param_3 == (long *)0x0) {
    uVar5 = **(undefined8 **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
  }
  else {
    lVar4 = thunk_FUN_0216e7a0(param_3,*(undefined8 *)PTR_DAT_04caa038);
    if (lVar4 == 0) {
      uVar5 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    }
    else {
      uVar5 = System_String__Join_46d390c(*(undefined8 *)PTR_DAT_04cae4f8,lVar4,0);
    }
  }
  lVar4 = FUN_02133068(*(undefined8 *)puVar1,2);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518(&uStack_70,*(undefined8 *)puVar2,param_2,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uStack_68;
      *(undefined8 *)(lVar4 + 0x20) = uStack_70;
      *(undefined8 *)(lVar4 + 0x38) = uStack_58;
      *(undefined8 *)(lVar4 + 0x30) = uStack_60;
      *(undefined8 *)(lVar4 + 0x48) = uStack_48;
      *(undefined8 *)(lVar4 + 0x40) = uStack_50;
      thunk_FUN_02134474(lVar4 + 0x20,0);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      Dino_Common_DinoTrackingParameter___ctor_2447518
                (&uStack_a0,*(undefined8 *)PTR_DAT_04caa800,uVar5,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x68) = uStack_88;
        *(undefined8 *)(lVar4 + 0x60) = uStack_90;
        *(undefined8 *)(lVar4 + 0x78) = uStack_78;
        *(undefined8 *)(lVar4 + 0x70) = uStack_80;
        *(undefined8 *)(lVar4 + 0x58) = uStack_98;
        *(undefined8 *)(lVar4 + 0x50) = uStack_a0;
        thunk_FUN_02134474(lVar4 + 0x50,0);
        Dino_Tracking_ServerTrackingCore__Enqueue_2460e14
                  (param_1,*(undefined8 *)PTR_DAT_04cc0a38,lVar4);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

