/* IL2CPP: Dino.BusSand.App.UI.KitBlink$$Update
void Dino_BusSand_App_UI_KitBlink__Update (Dino_BusSand_App_UI_KitBlink_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitBlink$$Update
   void Dino_BusSand_App_UI_KitBlink__Update (Dino_BusSand_App_UI_KitBlink_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitBlink__Update_2333350(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* try { // try from 02433350 to 0253339b has its CatchHandler @ 02432f58 */
  puVar1 = PTR_DAT_04cad4c0;
  if ((bRam0000000004f9c62d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c62d = 1;
  }
  fVar7 = *(float *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0243339c to 0253339f has its CatchHandler @ 02433450 */
                    /* try { // try from 024333a0 to 025333a3 has its CatchHandler @ 0243344c */
  fVar4 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
                    /* try { // try from 024333a4 to 025333ab has its CatchHandler @ 02433444 */
  fVar7 = fVar7 + fVar4;
  lVar3 = *(long *)(param_1 + 0x20);
                    /* try { // try from 024333ac to 025333af has its CatchHandler @ 0243343c */
  *(float *)(param_1 + 0x28) = fVar7;
                    /* try { // try from 024333b0 to 025333bf has its CatchHandler @ 02432f58 */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 0243334c with catch @ 024333b8 */
    fVar5 = (float)cosf(fVar7 * 3.5);
                    /* try { // try from 024333c0 to 025333c7 has its CatchHandler @ 0243349c */
                    /* try { // try from 024333c8 to 025333fb has its CatchHandler @ 02432f58 */
                    /* catch() { ... } // from try @ 0243309c with catch @ 024333cc */
                    /* catch() { ... } // from try @ 02433090 with catch @ 024333d0 */
    fVar7 = fVar7 / _UNK_00e207cc;
    fVar4 = 1.0;
    if (fVar7 <= 1.0) {
      fVar4 = fVar7;
    }
                    /* try { // try from 024333fc to 025333ff has its CatchHandler @ 0243342c */
                    /* try { // try from 02433400 to 0253341b has its CatchHandler @ 02432f58 */
    fVar6 = fVar5 * _UNK_00e20754 + _UNK_00e1fea8;
    fVar5 = 0.0;
    if (0.0 <= fVar7) {
      fVar5 = fVar4;
    }
    if ((bRam0000000004fac320 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04d09bf8,0);
      bRam0000000004fac320 = 1;
    }
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
      }
      if (pcRam0000000004fac330 == (code *)0x0) {
        pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
      }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fac330)(fVar5 * fVar6,lVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

