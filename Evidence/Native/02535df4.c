/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig.<Schedule>d__21$$MoveNext
void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Schedule_d__21__MoveNext (Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Schedule_d__21_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdsRemoteConfig.<Schedule>d__21$$MoveNext
   void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Schedule_d__21__MoveNext
   (Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Schedule_d__21_o __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Schedule_d__21__MoveNext_2435df4(int *param_1)

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
  
  if ((bRam0000000004f9cc4c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf2e8);
    FUN_02132f7c(PTR_DAT_04caa538);
    FUN_02132f7c(PTR_DAT_04caa970);
    bRam0000000004f9cc4c = 1;
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
LAB_02536054:
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
              goto LAB_025360d4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_025360d4:
        (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      auVar10 = Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Refresh_2435494(lVar8);
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
              goto LAB_025361d8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_025361d8:
        iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
          thunk_FUN_02134474(param_1 + 6,0);
          FUN_02540f0c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf2e8);
          return;
        }
      }
LAB_025361ec:
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
              goto LAB_0253626c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_0253626c:
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
              goto LAB_025363a0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_025363a0:
        iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
          thunk_FUN_02134474(param_1 + 6,0);
          FUN_02540f0c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf2e8);
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
        goto LAB_025361ec;
      }
      if (iVar2 != 2) goto LAB_02535eec;
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
            goto LAB_02536434;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_02536434:
      (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    auVar10 = Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Refresh_2435494(lVar8);
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
            goto LAB_02536538;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_02536538:
      iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_02134474(param_1 + 6,0);
        FUN_02540f0c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf2e8);
        return;
      }
    }
LAB_0253654c:
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
            goto LAB_02536608;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_02536608:
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
            goto LAB_02536740;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_02536740:
      iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_02134474(param_1 + 6,0);
        FUN_02540f0c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf2e8);
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
      goto LAB_0253654c;
    }
    if (iVar2 != 4) {
      if (iVar2 == 5) {
        auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        *param_1 = -1;
        goto LAB_02536928;
      }
LAB_02535eec:
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
              goto LAB_02536040;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_02536040:
        iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
          thunk_FUN_02134474(param_1 + 6,0);
          FUN_02540f0c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf2e8);
          return;
        }
      }
      goto LAB_02536054;
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
          goto LAB_02536810;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_02536810:
    (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  auVar10 = Dino_BusSand_Sdk_SandBusAdsRemoteConfig__Refresh_2435494(lVar8);
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
          goto LAB_02536914;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,0);
LAB_02536914:
    iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
    if (iVar2 == 0) {
      *param_1 = 5;
      *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
      thunk_FUN_02134474(param_1 + 6,0);
      FUN_02540f0c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf2e8);
      return;
    }
  }
LAB_02536928:
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
          goto LAB_025369e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,*(long *)PTR_DAT_04caac88,2);
LAB_025369e4:
    (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
  }
  *param_1 = -2;
  FUN_02247558(param_1 + 2,0);
  return;
}

