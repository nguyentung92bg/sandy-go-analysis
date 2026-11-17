/* IL2CPP: Dino.BusSand.View.GameView$$PanOf
float Dino_BusSand_View_GameView__PanOf (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector3_o world, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$PanOf
   float Dino_BusSand_View_GameView__PanOf (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector3_o world, const MethodInfo* method); */

float Dino_BusSand_View_GameView__PanOf_23a7184
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c932 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c932 = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  fVar4 = 0.0;
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    fVar4 = (float)UnityEngine_Camera__WorldToViewportPoint_435c574
                             (param_1,param_2,param_3,*(long *)(param_4 + 0x38),0);
    fVar5 = fVar4 + fVar4 + -1.0;
    fVar6 = 1.0;
    if (fVar5 <= 1.0) {
      fVar6 = fVar5;
    }
    fVar4 = _UNK_00e201f8;
    if (-1.0 <= fVar5) {
      fVar4 = fVar6 * _UNK_00e20094;
    }
  }
  return fVar4;
}

