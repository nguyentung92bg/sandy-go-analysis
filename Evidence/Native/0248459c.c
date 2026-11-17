/* IL2CPP: Dino.BusSand.GameAudio$$PaintBloom
void Dino_BusSand_GameAudio__PaintBloom (Dino_BusSand_GameAudio_o* __this, int32_t step, float pan, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio$$PaintBloom
   void Dino_BusSand_GameAudio__PaintBloom (Dino_BusSand_GameAudio_o* __this, int32_t step, float
   pan, const MethodInfo* method); */

void Dino_BusSand_GameAudio__PaintBloom_238459c(undefined4 param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  puVar3 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c85c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbb468);
    bRam0000000004f9c85c = 1;
  }
  puVar4 = PTR_DAT_04cbb468;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_GameAudio__Play_2382750(0x3f800000,0x3f800000,param_1,*(undefined8 *)puVar4);
  fVar11 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  fVar13 = *(float *)(param_2 + 0x134);
  uVar12 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  lVar5 = *(long *)puVar3;
  *(undefined4 *)(param_2 + 0x134) = uVar12;
  lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar9 != 0) {
    uVar10 = *(undefined8 *)(lVar9 + 0x18);
    if (fVar11 - fVar13 <= _UNK_00e20094) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        lVar5 = thunk_FUN_0218fdac();
        lVar9 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
        if (lVar9 == 0) goto LAB_024846dc;
      }
      iVar8 = *(int *)(lVar9 + 0x18) + -1;
      iVar1 = param_3;
      if (iVar8 <= param_3) {
        iVar1 = iVar8;
      }
      iVar8 = 0;
      if (-1 < param_3) {
        iVar8 = iVar1;
      }
    }
    else {
      iVar8 = 0;
    }
    iVar2 = (int)uVar10 + -1;
    iVar1 = param_3;
    if (iVar2 <= param_3) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    if (-1 < param_3) {
      iVar2 = iVar1;
    }
    lVar5 = Dino_BusSand_GameAudio__PaintChord_23846e0(param_1,lVar5,iVar2,iVar8);
    if (lVar5 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar7 = thunk_FUN_0216e89c();
      uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar7,uVar10,0);
    }
    else {
      uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar6 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (param_2 != 0) {
          lVar9 = *(long *)(param_2 + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_2,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar9,lVar5);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar7 = thunk_FUN_0216e89c();
      uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar7,uVar10,0);
    }
    uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,uVar10);
  }
LAB_024846dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

