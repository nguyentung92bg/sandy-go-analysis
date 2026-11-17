/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$SetLocalY
void Dino_BusSand_App_UI_YachtRacingPanel__SetLocalY (UnityEngine_Transform_o* t, UnityEngine_Vector3_o from, float toY, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$SetLocalY
   void Dino_BusSand_App_UI_YachtRacingPanel__SetLocalY (UnityEngine_Transform_o* t,
   UnityEngine_Vector3_o from, float toY, float k, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__SetLocalY_21edafc
               (undefined4 param_1,float param_2,undefined4 param_3,float param_4,float param_5,
               long param_6)

{
  long lVar1;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 022edb08 to 023edb0f has its CatchHandler @ 022edcf0 */
  fStack_28 = param_2 + (param_4 - param_2) * param_5;
  uStack_2c = param_1;
  uStack_24 = param_3;
                    /* try { // try from 022edb10 to 023edb5b has its CatchHandler @ 022eda4c */
  if ((bRam0000000004fa8b33 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b33 = 1;
  }
  if (param_6 != 0) {
    lVar1 = *(long *)(param_6 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000004fa8b98 == (code *)0x0) {
        pcRam0000000004fa8b98 = (code *)FUN_02132f40(&UNK_00e52061);
      }
      (*pcRam0000000004fa8b98)(lVar1,&uStack_2c);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

