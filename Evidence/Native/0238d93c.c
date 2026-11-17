/* IL2CPP: Dino.BusSand.App.UI.KitPulse$$Update
void Dino_BusSand_App_UI_KitPulse__Update (Dino_BusSand_App_UI_KitPulse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitPulse$$Update
   void Dino_BusSand_App_UI_KitPulse__Update (Dino_BusSand_App_UI_KitPulse_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitPulse__Update_228d93c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  fVar3 = *(float *)(param_1 + 0x24);
  lVar1 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  cosf((fVar2 * _UNK_00e2082c + fVar2 * _UNK_00e2082c) / fVar3);
  if ((bRam0000000004fa8b3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3e = 1;
  }
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000004fa8bf0 == (code *)0x0) {
        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
      }
      (*pcRam0000000004fa8bf0)(lVar1,&stack0xffffffffffffffd4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

