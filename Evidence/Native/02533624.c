/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<ShowRewardedAsync>d__25$$MoveNext
void Dino_BusSand_Sdk_DinoAdProvider__ShowRewardedAsync_d__25__MoveNext (Dino_BusSand_Sdk_DinoAdProvider__ShowRewardedAsync_d__25_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<ShowRewardedAsync>d__25$$MoveNext
   void Dino_BusSand_Sdk_DinoAdProvider__ShowRewardedAsync_d__25__MoveNext
   (Dino_BusSand_Sdk_DinoAdProvider__ShowRewardedAsync_d__25_o __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider__ShowRewardedAsync_d__25__MoveNext_2433624(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x1;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_54 [4];
  undefined8 uStack_48;
  
  if ((bRam0000000004f9cc32 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbf130);
    FUN_02132f7c(PTR_DAT_04cbf138);
    FUN_02132f7c(PTR_DAT_04cbf140);
    FUN_02132f7c(PTR_DAT_04cbf148);
    FUN_02132f7c(PTR_DAT_04cbf150);
    FUN_02132f7c(PTR_DAT_04cbeff0);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04cbf158);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cbf0f0);
    FUN_02132f7c(PTR_DAT_04cbf160);
    FUN_02132f7c(PTR_DAT_04cbf168);
    FUN_02132f7c(PTR_DAT_04cbf170);
    FUN_02132f7c(PTR_DAT_04cbf178);
    FUN_02132f7c(PTR_DAT_04cbf028);
    FUN_02132f7c(PTR_DAT_04cbf180);
    FUN_02132f7c(PTR_DAT_04cbf188);
    FUN_02132f7c(PTR_DAT_04cbf190);
    FUN_02132f7c(PTR_DAT_04cbf198);
    FUN_02132f7c(PTR_DAT_04caa970);
    FUN_02132f7c(PTR_DAT_04cad0a8);
    FUN_02132f7c(PTR_DAT_04cbf1a0);
    bRam0000000004f9cc32 = 1;
  }
  uStack_48 = 0;
  auStack_54[0] = 0;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_c8 = 0;
  if (*param_1 == 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0xe);
    plStack_80 = *(long **)(param_1 + 0xc);
    uStack_68 = *(ulong *)(param_1 + 0x12);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_025337c4:
    plVar7 = plStack_80;
    if (plStack_80 == (long *)0x0) {
      bVar3 = (byte)uStack_78;
      uVar6 = uStack_70;
    }
    else {
      uVar4 = uStack_68 & 0xffff;
      lVar10 = *(long *)(*(long *)PTR_DAT_04cbf140 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0216b470();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0216b470(lVar10);
      }
      lVar8 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02533b74;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_0216b7a4(plVar7,lVar10,0);
LAB_02533b74:
      bVar3 = (*(code *)*puVar9)(plVar7,uVar4,puVar9[1]);
      uVar6 = extraout_x1;
    }
    *(undefined8 *)(param_1 + 10) = uVar6;
    *(byte *)(param_1 + 8) = bVar3 & 1;
    thunk_FUN_02134474(param_1 + 10);
  }
  else {
    if (*param_1 == 1) {
      auStack_b0 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      auStack_c0 = ZEXT816(0);
      goto LAB_02533be4;
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)PTR_DAT_04cbf1a0;
    *(undefined1 *)(param_1 + 8) = 0;
    thunk_FUN_02134474();
    uVar4 = Dino_BusSand_Sdk_DinoAdProvider__TryService_243099c(&uStack_48);
    if ((uVar4 & 1) != 0) {
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf178);
      System_Object___ctor_4870e5c(lVar10,0);
      Dino_BusSand_Sdk_DinoAdProvider__Hook_2430c78();
      puVar2 = PTR_DAT_04cbeff0;
      Dino_BusSand_Sdk_DinoAdProvider__KeyCreative_2431240
                (*(long *)(*(long *)PTR_DAT_04cbeff0 + 0xb8) + 0x38);
      uVar1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
      thunk_FUN_02142dc8();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)puVar2;
      *(undefined4 *)(lVar10 + 0x10) = uVar1;
      uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 4);
      thunk_FUN_02142dc8();
      lVar8 = *(long *)puVar2;
      *(undefined4 *)(lVar10 + 0x18) = uVar1;
      uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 8);
      thunk_FUN_02142dc8();
      puVar2 = PTR_DAT_04cbf0f0;
      *(undefined4 *)(lVar10 + 0x14) = uVar1;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(uVar5,0);
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf190);
      Cysharp_Threading_Tasks_UniTaskCompletionSource_ValueTuple_bool__object_____ctor_30326c8
                (lVar8,*(undefined8 *)PTR_DAT_04cbf180);
      uVar6 = uStack_48;
      uVar14 = *(undefined8 *)(param_1 + 4);
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar14 = Dino_BusSand_App_Meta_GameTracking__AdPlacement_22155d8(uVar14,0);
      auStack_54[0] =
           Dino_BusSand_Sdk_DinoAdProvider__RewardedFromPackage_24312bc
                     (uVar6,uVar14,*(undefined4 *)(lVar10 + 0x10),*(undefined4 *)(lVar10 + 0x18),
                      uVar5,lVar8);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(auStack_54,0);
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf158);
      System_Func_ValueTuple_bool__object_____ctor_379cf0c
                (uVar6,lVar10,*(undefined8 *)PTR_DAT_04cbf168,0);
      uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
      System_Func_bool____ctor_379d5fc(uVar14,lVar10,*(undefined8 *)PTR_DAT_04cbf170,0);
      puVar2 = PTR_DAT_04cbf028;
      lVar10 = *(long *)PTR_DAT_04cbf028;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar2;
      }
      puVar9 = *(undefined8 **)(lVar10 + 0xb8);
      lVar13 = puVar9[9];
      if (lVar13 == 0) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar15 = *puVar9;
        lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(lVar13,uVar15,*(undefined8 *)PTR_DAT_04cbf160,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
        *plVar7 = lVar13;
        thunk_FUN_02134474(plVar7,lVar13);
      }
      uVar15 = System_String__Concat_46c82e0
                         (*(undefined8 *)PTR_DAT_04cad0a8,*(undefined8 *)(param_1 + 4),0);
      auStack_54[0] =
           Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose_ValueTuple_bool__object___272699c
                     (lVar8,uVar5,uVar6,uVar14,lVar13,uVar15,*(undefined8 *)PTR_DAT_04cbf150);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(auStack_54,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Cysharp_Threading_Tasks_UniTaskCompletionSource_ValueTuple_bool__object____get_Task_30326e8
                (&plStack_100,lVar8,*(undefined8 *)PTR_DAT_04cbf188);
      uStack_88 = uStack_e8;
      uStack_90 = uStack_f0;
      uStack_98 = uStack_f8;
      plStack_a0 = plStack_100;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_04cbf198 + 0x20) + 0x135) & 1) == 0) {
        FUN_0216b470();
      }
      uStack_f8 = uStack_98;
      plStack_100 = plStack_a0;
      uStack_e8 = uStack_88;
      uStack_f0 = uStack_90;
      thunk_FUN_02134474(&plStack_100,0);
      uStack_78 = uStack_f8;
      plStack_80 = plStack_100;
      uStack_68 = uStack_e8;
      uStack_70 = uStack_f0;
      uVar4 = FUN_025408c0(&plStack_80,*(undefined8 *)PTR_DAT_04cbf148);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xe) = uStack_78;
        *(long **)(param_1 + 0xc) = plStack_80;
        *(ulong *)(param_1 + 0x12) = uStack_68;
        *(undefined8 *)(param_1 + 0x10) = uStack_70;
        thunk_FUN_02134474(param_1 + 0xc,0);
        FUN_025409a8(param_1 + 2,&plStack_80,param_1,*(undefined8 *)PTR_DAT_04cbf130);
        return;
      }
      goto LAB_025337c4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_c0 = Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_407421c(0,0);
  auStack_b0 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_4076f10(auStack_c0,0)
  ;
  uVar4 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_4076f58
                    (auStack_b0,0);
  if ((uVar4 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x14) = auStack_b0;
    thunk_FUN_02134474(param_1 + 0x16,0);
    FUN_02540be8(param_1 + 2,auStack_b0,param_1,*(undefined8 *)PTR_DAT_04cbf138);
    return;
  }
LAB_02533be4:
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_4077008(auStack_b0,0);
  lVar10 = *(long *)(param_1 + 6);
  if (lVar10 != 0) {
    (**(code **)(lVar10 + 0x18))
              (*(undefined8 *)(lVar10 + 0x40),(char)param_1[8],*(undefined8 *)(param_1 + 10),
               *(undefined8 *)(lVar10 + 0x28));
  }
  piVar12 = param_1 + 10;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *param_1 = -2;
  thunk_FUN_02134474(piVar12,0);
  FUN_02247558(param_1 + 2,0);
  return;
}

