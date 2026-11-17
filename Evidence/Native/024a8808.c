/* IL2CPP: Dino.BusSand.View.GameView$$OnStageEnded
void Dino_BusSand_View_GameView__OnStageEnded (Dino_BusSand_View_GameView_o* __this, bool cleared, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnStageEnded
   void Dino_BusSand_View_GameView__OnStageEnded (Dino_BusSand_View_GameView_o* __this, bool
   cleared, const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnStageEnded_23a8808(long param_1,byte param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000004f9c93e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    bRam0000000004f9c93e = 1;
  }
  if (*(char *)(param_1 + 0x114) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x114) = 1;
  *(byte *)(param_1 + 0x14c) = param_2 & 1;
  if (0.0 < *(float *)(param_1 + 0x70)) {
    Dino_BusSand_View_GameView__EndFever_23a3288(param_1);
  }
  puVar2 = PTR_DAT_04cad568;
  if ((param_2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__StageClear_2383f04(**(long **)(lVar3 + 0xb8),0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(4);
    uVar1 = _UNK_00e20390;
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x270);
    uVar4 = Dino_BusSand_View_GameView__HitStop_23a9460(_UNK_00e20590,uVar1,param_1);
    UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar4,0);
    if (*(long *)(param_1 + 0x230) != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*(long *)(param_1 + 0x230),0);
    }
    uVar4 = Dino_BusSand_View_GameView__Finale_23a94e8(param_1);
    uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar4,0);
    *(undefined8 *)(param_1 + 0x230) = uVar4;
    thunk_FUN_02134474(param_1 + 0x230,uVar4);
    if (*(long *)(param_1 + 0x30) != 0) {
      Dino_BusSand_View_StageLayout__BoardPoint_23e89d4
                (0x3f000000,0x3f000000,_UNK_00e207cc,*(long *)(param_1 + 0x30),0);
      if (*(long *)(param_1 + 0xb8) != 0) {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        Dino_BusSand_View_Fx__Stars_2392818(*(long *)(param_1 + 0xb8),10,&uStack_48);
        *(undefined4 *)(param_1 + 0x150) = 0;
        *(undefined1 *)(param_1 + 0x14d) = 1;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__StageFailed_2383fac(**(long **)(lVar3 + 0xb8),0);
  }
  if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Haptics__Play_2388ed8(5);
  fVar8 = *(float *)(param_1 + 0x11c);
  if (fVar8 < 0.5) {
    fVar9 = (float)UnityEngine_Random__get_value_43b6570(0);
    fVar8 = *(float *)(param_1 + 0x11c);
    *(float *)(param_1 + 0x134) = fVar9 * 100.0;
  }
  if (fVar8 <= 0.5) {
    fVar8 = 0.5;
  }
  *(undefined4 *)(param_1 + 0x148) = 0x3f19999a;
  *(float *)(param_1 + 0x11c) = fVar8;
  lVar3 = Dino_BusSand_View_GameView__JamRipple_23a95ac(param_1);
  if (lVar3 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar6 = thunk_FUN_0216e89c();
    uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar6,uVar4,0);
  }
  else {
    uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar5 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 != 0) {
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
        }
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar7,lVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar6 = thunk_FUN_0216e89c();
    uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar6,uVar4,0);
  }
  uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar6,uVar4);
}

