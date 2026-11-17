/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig.<>c__DisplayClass21_0$$<HookCampaign>b__0
void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig___c__DisplayClass21_0___HookCampaign_b__0 (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig___c__DisplayClass21_0_o* __this, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig.<>c__DisplayClass21_0$$<HookCampaign>b__0
   void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig___c__DisplayClass21_0___HookCampaign_b__0
   (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig___c__DisplayClass21_0_o* __this, System_String_o*
   name, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig___c__DisplayClass21_0___HookCampaign_b__0_24377f0
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 aauStack_50 [2] [16];
  
  if ((bRam0000000004f9cc59 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf2f8);
    bRam0000000004f9cc59 = 1;
  }
  uVar6 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  puVar1 = PTR_DAT_04cbf2f8;
  if (((uVar6 & 1) != 0) ||
     (uVar6 = System_String__op_Equality_46d1108
                        (param_2,*(undefined8 *)(*(long *)(*(long *)PTR_DAT_04cbf2f8 + 0xb8) + 8),0)
     , (uVar6 & 1) != 0)) {
    return;
  }
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar7 = param_2;
  thunk_FUN_02134474(puVar7,param_2);
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  auVar14 = Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Refresh_2437380();
  puVar1 = PTR_DAT_04caa970;
  if ((bRam0000000004fa2df0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc52e8,auVar14._8_8_,0);
    FUN_02132f7c(PTR_DAT_04ce33a8);
    FUN_02132f7c(PTR_DAT_04ce33b0);
    FUN_02132f7c(PTR_DAT_04ce3388);
    FUN_02132f7c(PTR_DAT_04caa970);
    bRam0000000004fa2df0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  aauStack_50[0] = auVar14;
  thunk_FUN_02134474(aauStack_50,0);
  uVar4 = aauStack_50[0]._8_8_;
  uVar3 = aauStack_50[0]._0_8_;
  if (cRam0000000004f9b746 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa970);
    cRam0000000004f9b746 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b747 == '\0') {
    FUN_02132f7c(PTR_DAT_04caac88);
    cRam0000000004f9b747 = '\x01';
  }
  puVar1 = PTR_DAT_04caac88;
  if ((long *)uVar3 != (long *)0x0) {
    lVar9 = *(long *)uVar3;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04caac88) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_041788f0;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(uVar3,*(long *)PTR_DAT_04caac88,0);
LAB_041788f0:
    iVar5 = (*(code *)*puVar7)(uVar3,uVar4 & 0xffffffff,puVar7[1]);
    puVar2 = PTR_DAT_04ce3388;
    if (iVar5 == 0) {
      lVar9 = *(long *)PTR_DAT_04ce3388;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      puVar7 = *(undefined8 **)(lVar9 + 0xb8);
      lVar10 = puVar7[2];
      if (lVar10 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar13 = *puVar7;
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc52e8);
        System_Action_object____ctor_35f0008(lVar10,uVar13,*(undefined8 *)PTR_DAT_04ce33b0,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar8 = lVar10;
        thunk_FUN_02134474(plVar8,lVar10);
      }
      uVar13 = Cysharp_Threading_Tasks_Internal_StateTuple__Create_UniTask_Awaiter__28c7e50
                         (uVar3,uVar4,*(undefined8 *)PTR_DAT_04ce33a8);
      if (cRam0000000004fa2f8b == '\0') {
        FUN_02132f7c(PTR_DAT_04caac88);
        cRam0000000004fa2f8b = '\x01';
      }
      lVar11 = *(long *)uVar3;
      lVar9 = *(long *)puVar1;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_04178aa0;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(uVar3,lVar9,1);
LAB_04178aa0:
      (*(code *)*puVar7)(uVar3,lVar10,uVar13,uVar4 & 0xffffffff,puVar7[1]);
      return;
    }
  }
  if (cRam0000000004f9b748 == '\0') {
    FUN_02132f7c(PTR_DAT_04caac88);
    cRam0000000004f9b748 = '\x01';
  }
  if ((long *)uVar3 != (long *)0x0) {
    lVar10 = *(long *)uVar3;
    lVar9 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_04178a7c;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0216b7a4(uVar3,lVar9,2);
LAB_04178a7c:
    (*(code *)*puVar7)(uVar3,uVar4 & 0xffffffff,puVar7[1]);
  }
  return;
}

