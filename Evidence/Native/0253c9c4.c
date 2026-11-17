/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<AttachCrashContext>d__8$$MoveNext
void Dino_BusSand_Sdk_SdkBootstrap__AttachCrashContext_d__8__MoveNext (Dino_BusSand_Sdk_SdkBootstrap__AttachCrashContext_d__8_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<AttachCrashContext>d__8$$MoveNext
   void Dino_BusSand_Sdk_SdkBootstrap__AttachCrashContext_d__8__MoveNext
   (Dino_BusSand_Sdk_SdkBootstrap__AttachCrashContext_d__8_o __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SdkBootstrap__AttachCrashContext_d__8__MoveNext_243c9c4(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f9cc7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf5b8);
    FUN_02132f7c(PTR_DAT_04cbf5c0);
    FUN_02132f7c(PTR_DAT_04cab0c0);
    FUN_02132f7c(PTR_DAT_04cab0c8);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cbf5c8);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04caa798);
    FUN_02132f7c(PTR_DAT_04caa7a0);
    FUN_02132f7c(PTR_DAT_04cab0d8);
    FUN_02132f7c(PTR_DAT_04caa970);
    FUN_02132f7c(PTR_DAT_04cbf5d0);
    FUN_02132f7c(PTR_DAT_04cb2308);
    bRam0000000004f9cc7e = 1;
  }
  puVar3 = PTR_DAT_04caac88;
  puVar2 = PTR_DAT_04caa970;
  puVar1 = PTR_DAT_04caa7a0;
  auStack_60._8_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_70._0_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    goto LAB_0253cc14;
  }
  if (*param_1 == 1) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    auStack_60 = ZEXT816(0);
LAB_0253cdc0:
    uVar8 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ == (long *)0x0) {
      if (auStack_70[8] == '\0') goto LAB_0253cf3c;
    }
    else {
      uVar4 = auStack_70._10_2_;
      lVar6 = *(long *)(*(long *)PTR_DAT_04cab0c0 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0216b470();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0216b470(lVar6);
      }
      lVar10 = *(long *)uVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0253cf28;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(uVar8,lVar6,0);
LAB_0253cf28:
      uVar11 = (*(code *)*puVar7)(uVar8,uVar4,puVar7[1]);
      if ((uVar11 & 1) == 0) goto LAB_0253cf3c;
    }
    uVar8 = UnityEngine_SystemInfo__get_graphicsDeviceName_43cc484(0);
    uVar9 = UnityEngine_SystemInfo__get_graphicsDeviceVersion_43cc74c(0);
    uVar8 = System_String__Concat_46d2b84(uVar8,*(undefined8 *)PTR_DAT_04cb2308,uVar9,0);
    uVar9 = Dino_BusSand_Sdk_SdkBootstrap__WebViewPackage_243bf70();
    if (*(int *)(*(long *)PTR_DAT_04cac450 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_CrashContext__Graphics_2173700(uVar8,uVar9,0);
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf5c8);
    System_Object___ctor_4870e5c(uVar8,0);
    Dino_BusSand_App_CrashContext__Attach_2172d7c(uVar8,0);
  }
  else {
    piVar12 = param_1 + 4;
    piVar12[0] = 0;
    piVar12[1] = 0;
    thunk_FUN_02134474(piVar12,0);
    iVar5 = 0;
    param_1[6] = 0;
    while (iVar5 < 0x3c) {
      uVar11 = Dino_IGlobalService_object___TryGet_37f7630(param_1 + 4,*(undefined8 *)puVar1);
      if ((uVar11 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      auVar15 = Cysharp_Threading_Tasks_UniTask__Delay_4073288(500,1,8,0,0,0);
      auStack_50 = auVar15;
      thunk_FUN_02134474(auStack_50,0);
      uVar9 = auStack_50._8_8_;
      uVar8 = auStack_50._0_8_;
      auStack_60 = auStack_50;
      if (cRam0000000004f9b746 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa970);
        cRam0000000004f9b746 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b747 == '\0') {
        FUN_02132f7c(PTR_DAT_04caac88);
        cRam0000000004f9b747 = '\x01';
      }
      if ((long *)uVar8 != (long *)0x0) {
        lVar10 = *(long *)uVar8;
        lVar6 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0253cc00;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(uVar8,lVar6,0);
LAB_0253cc00:
        iVar5 = (*(code *)*puVar7)(uVar8,uVar9 & 0xffffffff,puVar7[1]);
        if (iVar5 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
          thunk_FUN_02134474(param_1 + 8,0);
          FUN_025415d4(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf5c0);
          return;
        }
      }
LAB_0253cc14:
      if (cRam0000000004f9b748 == '\0') {
        FUN_02132f7c(PTR_DAT_04caac88);
        cRam0000000004f9b748 = '\x01';
      }
      uVar8 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar10 = *(long *)auStack_60._0_8_;
        uVar14 = auStack_60._8_8_ & 0xffff;
        lVar6 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_0253cc90;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(auStack_60._0_8_,lVar6,2);
LAB_0253cc90:
        (*(code *)*puVar7)(uVar8,uVar14,puVar7[1]);
      }
      iVar5 = param_1[6] + 1;
      param_1[6] = iVar5;
    }
    plVar13 = *(long **)(param_1 + 4);
    if (plVar13 != (long *)0x0) {
      lVar6 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04caa798) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 6) * 0x10 + 0x138);
            goto LAB_0253cd5c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)PTR_DAT_04caa798,6);
LAB_0253cd5c:
      auVar15 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      auStack_50._0_8_ = 0;
      auStack_50._8_8_ = 0;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_04cab0d8 + 0x20) + 0x135) & 1) == 0) {
        FUN_0216b470();
      }
      auStack_50 = auVar15;
      thunk_FUN_02134474(auStack_50,0);
      auStack_70 = auStack_50;
      uVar11 = FUN_0224ca0c(auStack_70,*(undefined8 *)PTR_DAT_04cab0c8);
      if ((uVar11 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_70;
        thunk_FUN_02134474(param_1 + 0xc,0);
        FUN_025416e0(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_04cbf5b8);
        return;
      }
      goto LAB_0253cdc0;
    }
LAB_0253cf3c:
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)PTR_DAT_04cbf5d0,0);
  }
  piVar12 = param_1 + 4;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *param_1 = -2;
  thunk_FUN_02134474(piVar12,0);
  FUN_02247558(param_1 + 2,0);
  return;
}

