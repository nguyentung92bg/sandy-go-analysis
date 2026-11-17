/* IL2CPP: Dino.BusSand.App.UI.FailPanel.<>c__DisplayClass19_1$$<BuildPeek>b__1
void Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_1___BuildPeek_b__1 (Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_1_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.FailPanel.<>c__DisplayClass19_1$$<BuildPeek>b__1
   void Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_1___BuildPeek_b__1
   (Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_1_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_1___BuildPeek_b__1_23183f0
               (float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000004f9c578 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c578 = 1;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar2 != 0)) {
      fVar8 = *(float *)(param_2 + 0x10);
      fVar7 = *(float *)(param_2 + 0x14);
      fVar5 = 1.0;
      if (param_1 <= 1.0) {
        fVar5 = param_1;
      }
      fVar6 = 0.0;
      if (0.0 <= param_1) {
        fVar6 = fVar5;
      }
      if ((bRam0000000004fac320 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04d09bf8,0);
        bRam0000000004fac320 = 1;
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
        }
        if (pcRam0000000004fac330 == (code *)0x0) {
          pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
        }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fac330)(fVar8 + fVar6 * (fVar7 - fVar8),lVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

