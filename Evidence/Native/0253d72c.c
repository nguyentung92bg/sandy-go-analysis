/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate.<Run>d__1$$MoveNext
void Dino_BusSand_Sdk_SandBusUpdateGate__Run_d__1__MoveNext (Dino_BusSand_Sdk_SandBusUpdateGate__Run_d__1_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate.<Run>d__1$$MoveNext
   void Dino_BusSand_Sdk_SandBusUpdateGate__Run_d__1__MoveNext
   (Dino_BusSand_Sdk_SandBusUpdateGate__Run_d__1_o __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusUpdateGate__Run_d__1__MoveNext_243d72c(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  long *plStack_38;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f9cc88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf5f0);
    FUN_02132f7c(PTR_DAT_04cbf5f8);
    FUN_02132f7c(PTR_DAT_04cbf600);
    FUN_02132f7c(PTR_DAT_04cbf608);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf5e8);
    FUN_02132f7c(PTR_DAT_04cbf5e0);
    FUN_02132f7c(PTR_DAT_04cbf610);
    FUN_02132f7c(PTR_DAT_04caa970);
    FUN_02132f7c(PTR_DAT_04cbf618);
    bRam0000000004f9cc88 = 1;
  }
  puVar1 = PTR_DAT_04cbf5e0;
  plStack_38 = (long *)0x0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_0253d818:
    uVar2 = auStack_50._0_8_;
    if ((long *)auStack_50._0_8_ == (long *)0x0) {
      uVar5 = auStack_50._8_4_;
    }
    else {
      uVar3 = auStack_50._12_2_;
      lVar9 = *(long *)(*(long *)PTR_DAT_04cbf600 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470(lVar9);
      }
      lVar8 = *(long *)uVar2;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0253d950;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(uVar2,lVar9,0);
LAB_0253d950:
      uVar5 = (*(code *)*puVar7)(uVar2,uVar3,puVar7[1]);
    }
    if (uVar5 != 2) {
      uVar5 = (uint)(uVar5 == 1);
    }
    param_1[6] = uVar5;
  }
  else {
    if (*param_1 == 1) {
      auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      auStack_70 = ZEXT816(0);
      auStack_50 = ZEXT816(0);
      goto LAB_0253d9bc;
    }
    param_1[6] = 0;
    uVar6 = Sisus_Init_Service__TryGet_object__28b2b2c(&plStack_38,*(undefined8 *)puVar1);
    plVar4 = plStack_38;
    if ((uVar6 & 1) != 0) {
      if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = *plStack_38;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04cbf5e8) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0253da44;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plStack_38,*(long *)PTR_DAT_04cbf5e8,0);
LAB_0253da44:
      auVar11 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      auStack_30._0_8_ = 0;
      auStack_30._8_8_ = 0;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_04cbf610 + 0x20) + 0x135) & 1) == 0) {
        FUN_0216b470();
      }
      auStack_30 = auVar11;
      thunk_FUN_02134474(auStack_30,0);
      auStack_50 = auStack_30;
      uVar6 = FUN_025417ec(auStack_50,*(undefined8 *)PTR_DAT_04cbf608);
      if ((uVar6 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_50;
        thunk_FUN_02134474(param_1 + 8,0);
        FUN_025418d4(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_04cbf5f0);
        return;
      }
      goto LAB_0253d818;
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)PTR_DAT_04cbf618,0);
  }
  if (*(int *)(*(long *)PTR_DAT_04caa970 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_70 = Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_407421c(0,0);
  auStack_60 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_4076f10(auStack_70,0)
  ;
  uVar6 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_4076f58
                    (auStack_60,0);
  if ((uVar6 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
    thunk_FUN_02134474(param_1 + 0xe,0);
    FUN_02541b14(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_04cbf5f8);
    return;
  }
LAB_0253d9bc:
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_4077008(auStack_60,0);
  lVar9 = *(long *)(param_1 + 4);
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x18))
              (*(undefined8 *)(lVar9 + 0x40),param_1[6],*(undefined8 *)(lVar9 + 0x28));
  }
  *param_1 = -2;
  FUN_02247558(param_1 + 2,0);
  return;
}

