/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<ShowInterstitialAsync>d__27$$MoveNext
void Dino_BusSand_Sdk_DinoAdProvider__ShowInterstitialAsync_d__27__MoveNext (Dino_BusSand_Sdk_DinoAdProvider__ShowInterstitialAsync_d__27_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<ShowInterstitialAsync>d__27$$MoveNext
   void Dino_BusSand_Sdk_DinoAdProvider__ShowInterstitialAsync_d__27__MoveNext
   (Dino_BusSand_Sdk_DinoAdProvider__ShowInterstitialAsync_d__27_o __this, const MethodInfo*
   method); */

void Dino_BusSand_Sdk_DinoAdProvider__ShowInterstitialAsync_d__27__MoveNext_2432e04(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [16];
  undefined8 uStack_48;
  
  if ((bRam0000000004f9cc31 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbf0d8);
    FUN_02132f7c(PTR_DAT_04cbf0e0);
    FUN_02132f7c(PTR_DAT_04cab0c0);
    FUN_02132f7c(PTR_DAT_04cab0c8);
    FUN_02132f7c(PTR_DAT_04cbf0e8);
    FUN_02132f7c(PTR_DAT_04cbeff0);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cbf0f0);
    FUN_02132f7c(PTR_DAT_04cbf0f8);
    FUN_02132f7c(PTR_DAT_04cbf100);
    FUN_02132f7c(PTR_DAT_04cbf108);
    FUN_02132f7c(PTR_DAT_04cbf110);
    FUN_02132f7c(PTR_DAT_04cbf028);
    FUN_02132f7c(PTR_DAT_04cbf118);
    FUN_02132f7c(PTR_DAT_04cbf120);
    FUN_02132f7c(PTR_DAT_04cbf128);
    FUN_02132f7c(PTR_DAT_04cab0d8);
    FUN_02132f7c(PTR_DAT_04caa970);
    FUN_02132f7c(PTR_DAT_04cacad8);
    bRam0000000004f9cc31 = 1;
  }
  uStack_48 = 0;
  auStack_64[0] = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_02532f84:
    uVar15 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ == (long *)0x0) {
      bVar4 = auStack_80[8] != '\0';
    }
    else {
      uVar3 = auStack_80._10_2_;
      lVar11 = *(long *)(*(long *)PTR_DAT_04cab0c0 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0216b470(lVar11);
      }
      lVar7 = *(long *)uVar15;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02533334;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(uVar15,lVar11,0);
LAB_02533334:
      bVar4 = (*(code *)*puVar10)(uVar15,uVar3,puVar10[1]);
    }
    *(byte *)(param_1 + 8) = bVar4 & 1;
  }
  else {
    if (*param_1 == 1) {
      auStack_90 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
      auStack_a0 = ZEXT816(0);
      auStack_80 = ZEXT816(0);
      goto LAB_02533394;
    }
    *(undefined1 *)(param_1 + 8) = 0;
    uVar5 = Dino_BusSand_Sdk_DinoAdProvider__TryService_243099c(&uStack_48);
    if ((uVar5 & 1) != 0) {
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf110);
      System_Object___ctor_4870e5c(lVar11,0);
      Dino_BusSand_Sdk_DinoAdProvider__Hook_2430c78();
      puVar2 = PTR_DAT_04cbeff0;
      Dino_BusSand_Sdk_DinoAdProvider__KeyCreative_2431240
                (*(long *)(*(long *)PTR_DAT_04cbeff0 + 0xb8) + 0x30);
      uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
      thunk_FUN_02142dc8();
      puVar2 = PTR_DAT_04cbf0f0;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lVar11 + 0x10) = uVar1;
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(uVar6,0);
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf128);
      Cysharp_Threading_Tasks_UniTaskCompletionSource_bool____ctor_3033ab4
                (lVar7,*(undefined8 *)PTR_DAT_04cbf118);
      uVar15 = uStack_48;
      uVar14 = *(undefined8 *)(param_1 + 4);
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar14 = Dino_BusSand_App_Meta_GameTracking__AdPlacement_22155d8(uVar14,0);
      auStack_64[0] =
           Dino_BusSand_Sdk_DinoAdProvider__InterstitialFromPackage_24313b0
                     (uVar15,uVar14,uVar6,lVar7);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(auStack_64,0);
      puVar2 = PTR_DAT_04cbf028;
      lVar8 = *(long *)PTR_DAT_04cbf028;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      puVar10 = *(undefined8 **)(lVar8 + 0xb8);
      lVar13 = puVar10[10];
      if (lVar13 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar15 = *puVar10;
        lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
        System_Func_bool____ctor_379d5fc(lVar13,uVar15,*(undefined8 *)PTR_DAT_04cbf0f8,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
        *plVar9 = lVar13;
        thunk_FUN_02134474(plVar9,lVar13);
      }
      uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
      System_Func_bool____ctor_379d5fc(uVar15,lVar11,*(undefined8 *)PTR_DAT_04cbf108,0);
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar2;
      }
      puVar10 = *(undefined8 **)(lVar11 + 0xb8);
      lVar8 = puVar10[0xb];
      if (lVar8 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar14 = *puVar10;
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(lVar8,uVar14,*(undefined8 *)PTR_DAT_04cbf100,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
        *plVar9 = lVar8;
        thunk_FUN_02134474(plVar9,lVar8);
      }
      uVar14 = System_String__Concat_46c82e0
                         (*(undefined8 *)PTR_DAT_04cacad8,*(undefined8 *)(param_1 + 4),0);
      auStack_64[0] =
           Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_bool__2726aa4
                     (lVar7,uVar6,lVar13,uVar15,lVar8,uVar14,*(undefined8 *)PTR_DAT_04cbf0e8);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(auStack_64,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      auVar16 = Cysharp_Threading_Tasks_UniTaskCompletionSource_bool___get_Task_3033ad4
                          (lVar7,*(undefined8 *)PTR_DAT_04cbf120);
      auStack_60._0_8_ = 0;
      auStack_60._8_8_ = 0;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_04cab0d8 + 0x20) + 0x135) & 1) == 0) {
        FUN_0216b470();
      }
      auStack_60 = auVar16;
      thunk_FUN_02134474(auStack_60,0);
      auStack_80 = auStack_60;
      uVar5 = FUN_0224ca0c(auStack_80,*(undefined8 *)PTR_DAT_04cab0c8);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
        thunk_FUN_02134474(param_1 + 10,0);
        FUN_025406a8(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_04cbf0e0);
        return;
      }
      goto LAB_02532f84;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_a0 = Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_407421c(0,0);
  auStack_90 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_4076f10(auStack_a0,0)
  ;
  uVar5 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_4076f58
                    (auStack_90,0);
  if ((uVar5 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0xe) = auStack_90;
    thunk_FUN_02134474(param_1 + 0x10,0);
    FUN_025407b4(param_1 + 2,auStack_90,param_1,*(undefined8 *)PTR_DAT_04cbf0d8);
    return;
  }
LAB_02533394:
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_4077008(auStack_90,0);
  lVar11 = *(long *)(param_1 + 6);
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 0x18))
              (*(undefined8 *)(lVar11 + 0x40),(char)param_1[8],*(undefined8 *)(lVar11 + 0x28));
  }
  *param_1 = -2;
  FUN_02247558(param_1 + 2,0);
  return;
}

