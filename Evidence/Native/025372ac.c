/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig$$Apply
void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Apply (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig$$Apply
   void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Apply
   (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Apply_24372ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04cbf288;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9cc51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cbf288);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cc51 = 1;
  }
  lVar7 = Dino_Common_RemoteConfigDataBase_object___get_Value_2e3fafc(param_1,*(undefined8 *)puVar2)
  ;
  plVar10 = (long *)(param_1 + 0x48);
  lVar5 = *(long *)puVar1;
  if (lVar7 != 0) {
    lVar5 = lVar7;
  }
  uVar8 = System_String__op_Equality_46d1108(lVar5,*plVar10,0);
  puVar1 = PTR_DAT_04cb1d58;
  if ((uVar8 & 1) != 0) {
    return uVar8;
  }
  *plVar10 = lVar5;
  thunk_FUN_02134474(plVar10,lVar5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb1d58;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9bcd8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458,0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb1da8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bcd8 = 1;
  }
  lVar4 = *(long *)puVar2;
  lVar7 = *(long *)puVar1;
  if (lVar5 != 0) {
    lVar7 = lVar5;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  plVar10 = (long *)(*(long *)(lVar4 + 0xb8) + 0x38);
  *plVar10 = lVar7;
  thunk_FUN_02134474(plVar10,lVar7);
  Dino_BusSand_App_Meta_EconomySettings__Rebuild_220592c();
  Dino_BusSand_App_Meta_EconomySettings__CrashKey_2205bc0();
  if (cRam0000000004f9bcff == '\0') {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    cRam0000000004f9bcff = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  uVar8 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcff == '\0') {
      FUN_02132f7c(PTR_DAT_04cb1d58);
      cRam0000000004f9bcff = '\x01';
    }
    puVar3 = PTR_DAT_04cb1da8;
    puVar1 = PTR_DAT_04ca9af8;
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    uVar6 = System_String__Concat_46c82e0
                      (*(undefined8 *)puVar3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    UnityEngine_Debug__Log_4360fc8(uVar6,0);
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  plVar10 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar5 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
    puVar1 = PTR_DAT_04caa458;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar8 = 0;
      uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar10 = *(long **)(lVar5 + 0x20 + uVar8 * 8);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*plVar10 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4();
        }
        (*(code *)plVar10[3])(plVar10[8],plVar10[5]);
        uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    lVar5 = *(long *)puVar2;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcff == '\0') {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    cRam0000000004f9bcff = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  return *(ulong *)(*(long *)(lVar5 + 0xb8) + 0x10);
}

