/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig.<AnnounceLater>d__5$$MoveNext
void Dino_BusSand_Sdk_SandBusAdConfig__AnnounceLater_d__5__MoveNext (Dino_BusSand_Sdk_SandBusAdConfig__AnnounceLater_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig.<AnnounceLater>d__5$$MoveNext
   void Dino_BusSand_Sdk_SandBusAdConfig__AnnounceLater_d__5__MoveNext
   (Dino_BusSand_Sdk_SandBusAdConfig__AnnounceLater_d__5_o __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusAdConfig__AnnounceLater_d__5__MoveNext_2434494(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f9cc3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf1d8);
    FUN_02132f7c(PTR_DAT_04cbf1a8);
    FUN_02132f7c(PTR_DAT_04caa538);
    FUN_02132f7c(PTR_DAT_04caa970);
    bRam0000000004f9cc3a = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04caa538 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = System_TimeSpan__FromSeconds_48470a4(0x4000000000000000,0);
    puVar1 = PTR_DAT_04caa970;
    if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auStack_40 = Cysharp_Threading_Tasks_UniTask__Delay_40733c8(uVar4,2,8,0,0,0);
    thunk_FUN_02134474(auStack_40,0);
    uVar2 = auStack_40._8_8_;
    uVar4 = auStack_40._0_8_;
    auStack_50 = auStack_40;
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
    if ((long *)uVar4 != (long *)0x0) {
      lVar6 = *(long *)uVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04caac88) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02534638;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(uVar4,*(long *)PTR_DAT_04caac88,0);
LAB_02534638:
      iVar3 = (*(code *)*puVar5)(uVar4,uVar2 & 0xffffffff,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_50;
        thunk_FUN_02134474(param_1 + 6,0);
        FUN_02540cf4(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_04cbf1d8);
        return;
      }
    }
  }
  if (cRam0000000004f9b748 == '\0') {
    FUN_02132f7c(PTR_DAT_04caac88);
    cRam0000000004f9b748 = '\x01';
  }
  uVar4 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_50._0_8_;
    uVar9 = auStack_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04caac88) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_025346d0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(auStack_50._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_025346d0:
    (*(code *)*puVar5)(uVar4,uVar9,puVar5[1]);
  }
  uVar4 = *(undefined8 *)(param_1 + 4);
  if (*(int *)(*(long *)PTR_DAT_04cbf1a8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Sdk_SandBusAdConfig__Announce_24341e0(uVar4);
  *param_1 = -2;
  FUN_02247558(param_1 + 2,0);
  return;
}

