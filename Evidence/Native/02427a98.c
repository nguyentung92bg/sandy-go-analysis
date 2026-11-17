/* IL2CPP: Dino.BusSand.App.UI.ChestPanel.<>c__DisplayClass11_0$$<Shake>b__1
void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass11_0___Shake_b__1 (Dino_BusSand_App_UI_ChestPanel___c__DisplayClass11_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ChestPanel.<>c__DisplayClass11_0$$<Shake>b__1
   void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass11_0___Shake_b__1
   (Dino_BusSand_App_UI_ChestPanel___c__DisplayClass11_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass11_0___Shake_b__1_2327a98(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c5ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c5ef = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  pfVar3 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  fVar6 = pfVar3[1] * _UNK_00e20a74;
  fVar7 = pfVar3[2] * _UNK_00e20a74;
  fVar8 = _UNK_00e20a74;
  uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(*pfVar3 * _UNK_00e20a74,0,0);
  fStack_2c = fVar6;
  fStack_28 = fVar7;
  fStack_24 = fVar8;
  if ((bRam0000000004fa8b3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00);
    bRam0000000004fa8b3a = 1;
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      if (pcRam0000000004fa8bd0 == (code *)0x0) {
        pcRam0000000004fa8bd0 = (code *)FUN_02132f40(&UNK_00e520b7);
      }
      (*pcRam0000000004fa8bd0)(lVar4,&uStack_30);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

