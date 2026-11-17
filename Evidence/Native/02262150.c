/* IL2CPP: Dino.BusSand.App.Tween.<>c__DisplayClass38_0$$<Scale>b__0
void Dino_BusSand_App_Tween___c__DisplayClass38_0___Scale_b__0 (Dino_BusSand_App_Tween___c__DisplayClass38_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tween.<>c__DisplayClass38_0$$<Scale>b__0
   void Dino_BusSand_App_Tween___c__DisplayClass38_0___Scale_b__0
   (Dino_BusSand_App_Tween___c__DisplayClass38_0_o* __this, float k, const MethodInfo* method); */

void Dino_BusSand_App_Tween___c__DisplayClass38_0___Scale_b__0_2162150
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_30;
  float fStack_28;
  float fStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_30 = param_1;
  if ((bRam0000000004f9b82f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b82f = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fVar5 = (float)*(undefined8 *)(param_2 + 0x18);
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  fVar7 = (float)uStack_30;
  uStack_30 = CONCAT44(fVar5 + ((float)*(undefined8 *)(param_2 + 0x24) - fVar5) * fVar7,fVar7);
  _fStack_28 = CONCAT44(*(float *)(param_2 + 0x20) +
                        (*(float *)(param_2 + 0x2c) - *(float *)(param_2 + 0x20)) * fVar7,
                        fVar6 + ((float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) - fVar6) *
                                fVar7);
  if ((bRam0000000004fa8b3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3e = 1;
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000004fa8bf0 == (code *)0x0) {
        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
      }
      (*pcRam0000000004fa8bf0)(lVar3,(long)&uStack_30 + 4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

