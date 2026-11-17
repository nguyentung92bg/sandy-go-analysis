/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<InterstitialFromPackage>d__28$$MoveNext
void Dino_BusSand_Sdk_DinoAdProvider__InterstitialFromPackage_d__28__MoveNext (Dino_BusSand_Sdk_DinoAdProvider__InterstitialFromPackage_d__28_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<InterstitialFromPackage>d__28$$MoveNext
   void Dino_BusSand_Sdk_DinoAdProvider__InterstitialFromPackage_d__28__MoveNext
   (Dino_BusSand_Sdk_DinoAdProvider__InterstitialFromPackage_d__28_o __this, const MethodInfo*
   method); */

void Dino_BusSand_Sdk_DinoAdProvider__InterstitialFromPackage_d__28__MoveNext_2431d5c(int *param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  ulong uStack_120;
  undefined4 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((bRam0000000004f9cc2f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf070);
    FUN_02132f7c(PTR_DAT_04cbf078);
    FUN_02132f7c(PTR_DAT_04caaa18);
    FUN_02132f7c(PTR_DAT_04caaa20);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04caa8c8);
    FUN_02132f7c(PTR_DAT_04cbf080);
    FUN_02132f7c(PTR_DAT_04caaa28);
    FUN_02132f7c(PTR_DAT_04caa970);
    FUN_02132f7c(PTR_DAT_04cbf088);
    bRam0000000004f9cc2f = 1;
  }
  plStack_40 = (long *)0x0;
  uStack_70 = 0;
  uStack_b0 = 0;
  auStack_f0._0_8_ = 0;
  auStack_f0._8_8_ = 0;
  plStack_c8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plStack_88 = (long *)0x0;
  plStack_90 = (long *)0x0;
  plStack_78 = (long *)0x0;
  plStack_80 = (long *)0x0;
  plStack_58 = (long *)0x0;
  plStack_60 = (long *)0x0;
  plStack_48 = (long *)0x0;
  plStack_50 = (long *)0x0;
  plStack_98 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  auStack_100._0_8_ = 0;
  auStack_100._8_8_ = 0;
  uStack_108 = 0;
  if (*param_1 == 0) {
    uStack_70 = *(ulong *)(param_1 + 0x1a);
    plStack_98 = *(long **)(param_1 + 0x10);
    plStack_a0 = *(long **)(param_1 + 0xe);
    plStack_88 = *(long **)(param_1 + 0x14);
    plStack_90 = *(long **)(param_1 + 0x12);
    plStack_78 = *(long **)(param_1 + 0x18);
    plStack_80 = *(long **)(param_1 + 0x16);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_f0 = *(undefined1 (*) [16])(param_1 + 0x1c);
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *param_1 = -1;
      auStack_100 = ZEXT816(0);
      goto LAB_0253211c;
    }
    plVar9 = *(long **)(param_1 + 4);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = *plVar9;
    uVar11 = *(undefined8 *)(param_1 + 6);
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04caa8c8) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_02531ef0;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04caa8c8,3);
LAB_02531ef0:
    (*(code *)*puVar3)(&plStack_150,plVar9,uVar11,puVar3[1]);
    uStack_b0 = uStack_120;
    plStack_b8 = plStack_128;
    plStack_c0 = plStack_130;
    plStack_c8 = plStack_138;
    plStack_d0 = plStack_140;
    uStack_120 = 0;
    plStack_138 = (long *)0x0;
    plStack_140 = (long *)0x0;
    plStack_128 = (long *)0x0;
    plStack_130 = (long *)0x0;
    plStack_d8 = plStack_148;
    plStack_e0 = plStack_150;
    plStack_148 = (long *)0x0;
    plStack_150 = (long *)0x0;
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_04caaa28 + 0x20) + 0x135) & 1) == 0) {
      FUN_0216b470();
    }
    plStack_128 = plStack_b8;
    plStack_130 = plStack_c0;
    plStack_148 = plStack_d8;
    plStack_150 = plStack_e0;
    plStack_138 = plStack_c8;
    plStack_140 = plStack_d0;
    uStack_120 = uStack_b0;
    thunk_FUN_02134474(&plStack_150,0);
    plStack_98 = plStack_148;
    plStack_a0 = plStack_150;
    plStack_88 = plStack_138;
    plStack_90 = plStack_140;
    plStack_78 = plStack_128;
    plStack_80 = plStack_130;
    uStack_70 = uStack_120;
    uVar4 = FUN_02241a64(&plStack_a0,*(undefined8 *)PTR_DAT_04caaa20);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(long **)(param_1 + 0x18) = plStack_78;
      *(long **)(param_1 + 0x16) = plStack_80;
      *(long **)(param_1 + 0x10) = plStack_98;
      *(long **)(param_1 + 0xe) = plStack_a0;
      *(long **)(param_1 + 0x14) = plStack_88;
      *(long **)(param_1 + 0x12) = plStack_90;
      *(ulong *)(param_1 + 0x1a) = uStack_70;
      thunk_FUN_02134474(param_1 + 0xe,0);
      FUN_0254016c(param_1 + 2,&plStack_a0,param_1,*(undefined8 *)PTR_DAT_04cbf078);
      return;
    }
  }
  plVar9 = plStack_a0;
  plVar6 = plStack_78;
  plVar12 = plStack_98;
  plVar13 = plStack_90;
  plVar14 = plStack_88;
  plVar15 = plStack_80;
  if (plStack_a0 != (long *)0x0) {
    uVar4 = uStack_70 & 0xffff;
    lVar10 = *(long *)(*(long *)PTR_DAT_04caaa18 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470(lVar10);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02532090;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(plVar9,lVar10,0);
LAB_02532090:
    (*(code *)*puVar3)(&plStack_150,plVar9,uVar4,puVar3[1]);
    plVar6 = plStack_130;
    plVar12 = plStack_150;
    plVar13 = plStack_148;
    plVar14 = plStack_140;
    plVar15 = plStack_138;
  }
  plStack_60 = plVar12;
  plStack_58 = plVar13;
  plStack_50 = plVar14;
  plStack_48 = plVar15;
  plStack_40 = plVar6;
  bVar2 = Dino_Common_AdResult__get_WasShown_2443cc0(&plStack_60,0);
  puVar1 = PTR_DAT_04caa970;
  *(byte *)(param_1 + 0xc) = bVar2 & 1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_100 = Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_407421c(0,0);
  auStack_f0 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_4076f10
                         (auStack_100,0);
  uVar4 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_4076f58
                    (auStack_f0,0);
  if ((uVar4 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x1c) = auStack_f0;
    thunk_FUN_02134474(param_1 + 0x1e,0);
    FUN_02540278(param_1 + 2,auStack_f0,param_1,*(undefined8 *)PTR_DAT_04cbf070);
    return;
  }
LAB_0253211c:
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_4077008(auStack_f0,0);
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  thunk_FUN_02142dc8();
  *(undefined1 *)(lVar10 + 0x10) = 1;
  if (*(long *)(param_1 + 10) != 0) {
    uVar4 = Cysharp_Threading_Tasks_UniTaskCompletionSource_bool___TrySetResult_3033b04
                      (*(long *)(param_1 + 10),(char)param_1[0xc],*(undefined8 *)PTR_DAT_04cbf080);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Debug__Log_4360fc8(*(undefined8 *)PTR_DAT_04cbf088,0);
    }
    *param_1 = -2;
    FUN_02247558(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

