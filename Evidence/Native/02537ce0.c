/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig.<Schedule>d__19$$MoveNext
void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Schedule_d__19__MoveNext (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Schedule_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig.<Schedule>d__19$$MoveNext
   void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Schedule_d__19__MoveNext
   (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Schedule_d__19_o __this, const MethodInfo* method);
    */

void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Schedule_d__19__MoveNext_2437ce0(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f9cc5b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf358);
    FUN_02132f7c(PTR_DAT_04caa538);
    FUN_02132f7c(PTR_DAT_04caa970);
    bRam0000000004f9cc5b = 1;
  }
  iVar2 = *param_1;
  lVar8 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = -1;
LAB_02537f40:
      if (cRam0000000004f9b748 == '\0') {
        FUN_02132f7c(PTR_DAT_04caac88);
        cRam0000000004f9b748 = '\x01';
      }
      uVar4 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar5 = *(long *)auStack_60._0_8_;
        uVar9 = auStack_60._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_02537fc0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_02537fc0:
        (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      auVar10 = Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Refresh_2437380(lVar8);
      puVar1 = PTR_DAT_04caa970;
      if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      auStack_50 = auVar10;
      thunk_FUN_02134474(auStack_50,0);
      auStack_60 = auStack_50;
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
      uVar4 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar5 = *(long *)auStack_60._0_8_;
        uVar9 = auStack_60._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_025380c4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_025380c4:
        iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
          thunk_FUN_02134474(param_1 + 6,0);
          FUN_02541124(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf358);
          return;
        }
      }
LAB_025380d8:
      if (cRam0000000004f9b748 == '\0') {
        FUN_02132f7c(PTR_DAT_04caac88);
        cRam0000000004f9b748 = '\x01';
      }
      uVar4 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar5 = *(long *)auStack_60._0_8_;
        uVar9 = auStack_60._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_02538158;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_02538158:
        (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
      }
      if (*(int *)(*(long *)PTR_DAT_04caa538 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = System_TimeSpan__FromSeconds_48470a4(0x4033000000000000,0);
      puVar1 = PTR_DAT_04caa970;
      if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      auVar10 = Cysharp_Threading_Tasks_UniTask__Delay_40733c8(uVar4,2,8,0,0,0);
      auStack_50 = auVar10;
      thunk_FUN_02134474(auStack_50,0);
      auStack_60 = auStack_50;
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
      uVar4 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar5 = *(long *)auStack_60._0_8_;
        uVar9 = auStack_60._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0253828c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_0253828c:
        iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
          thunk_FUN_02134474(param_1 + 6,0);
          FUN_02541124(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf358);
          return;
        }
      }
    }
    else {
      if (iVar2 == 1) {
        auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        *param_1 = -1;
        goto LAB_025380d8;
      }
      if (iVar2 != 2) goto LAB_02537dd8;
      auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = -1;
    }
    if (cRam0000000004f9b748 == '\0') {
      FUN_02132f7c(PTR_DAT_04caac88);
      cRam0000000004f9b748 = '\x01';
    }
    uVar4 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_02538320;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_02538320:
      (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    auVar10 = Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Refresh_2437380(lVar8);
    puVar1 = PTR_DAT_04caa970;
    if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auStack_50 = auVar10;
    thunk_FUN_02134474(auStack_50,0);
    auStack_60 = auStack_50;
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
    uVar4 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02538424;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_02538424:
      iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_02134474(param_1 + 6,0);
        FUN_02541124(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf358);
        return;
      }
    }
LAB_02538438:
    if (cRam0000000004f9b748 == '\0') {
      FUN_02132f7c(PTR_DAT_04caac88);
      cRam0000000004f9b748 = '\x01';
    }
    uVar4 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_025384f4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_025384f4:
      (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
    }
    if (*(int *)(*(long *)PTR_DAT_04caa538 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = System_TimeSpan__FromSeconds_48470a4(0x404e000000000000,0);
    puVar1 = PTR_DAT_04caa970;
    if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auVar10 = Cysharp_Threading_Tasks_UniTask__Delay_40733c8(uVar4,2,8,0,0,0);
    auStack_50 = auVar10;
    thunk_FUN_02134474(auStack_50,0);
    auStack_60 = auStack_50;
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
    uVar4 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0253862c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_0253862c:
      iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_02134474(param_1 + 6,0);
        FUN_02541124(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf358);
        return;
      }
    }
  }
  else {
    if (iVar2 == 3) {
      auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = -1;
      goto LAB_02538438;
    }
    if (iVar2 != 4) {
      if (iVar2 == 5) {
        auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        *param_1 = -1;
        goto LAB_02538814;
      }
LAB_02537dd8:
      if (*(int *)(*(long *)PTR_DAT_04caa538 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = System_TimeSpan__FromSeconds_48470a4(0x3ff0000000000000,0);
      puVar1 = PTR_DAT_04caa970;
      if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_40733c8(uVar4,2,8,0,0,0);
      thunk_FUN_02134474(auStack_50,0);
      auStack_60 = auStack_50;
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
      uVar4 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar5 = *(long *)auStack_60._0_8_;
        uVar9 = auStack_60._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02537f2c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_02537f2c:
        iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
          thunk_FUN_02134474(param_1 + 6,0);
          FUN_02541124(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf358);
          return;
        }
      }
      goto LAB_02537f40;
    }
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  if (cRam0000000004f9b748 == '\0') {
    FUN_02132f7c(PTR_DAT_04caac88);
    cRam0000000004f9b748 = '\x01';
  }
  uVar4 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_60._0_8_;
    uVar9 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025386fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_025386fc:
    (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  auVar10 = Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__Refresh_2437380(lVar8);
  puVar1 = PTR_DAT_04caa970;
  if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_50 = auVar10;
  thunk_FUN_02134474(auStack_50,0);
  auStack_60 = auStack_50;
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
  uVar4 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_60._0_8_;
    uVar9 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02538800;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_02538800:
    iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
    if (iVar2 == 0) {
      *param_1 = 5;
      *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
      thunk_FUN_02134474(param_1 + 6,0);
      FUN_02541124(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf358);
      return;
    }
  }
LAB_02538814:
  if (cRam0000000004f9b748 == '\0') {
    FUN_02132f7c(PTR_DAT_04caac88);
    cRam0000000004f9b748 = '\x01';
  }
  uVar4 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_60._0_8_;
    uVar9 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caac88) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025388d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_025388d0:
    (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
  }
  *param_1 = -2;
  FUN_02247558(param_1 + 2,0);
  return;
}

