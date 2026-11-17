/* IL2CPP: Dino.BusSand.App.UI.PaiziRewardTipsPanel$$SetChild
void Dino_BusSand_App_UI_PaiziRewardTipsPanel__SetChild (UnityEngine_Transform_o* t, System_String_o* name, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PaiziRewardTipsPanel$$SetChild
   void Dino_BusSand_App_UI_PaiziRewardTipsPanel__SetChild (UnityEngine_Transform_o* t,
   System_String_o* name, bool on, const MethodInfo* method); */

void Dino_BusSand_App_UI_PaiziRewardTipsPanel__SetChild_22c4a88
               (long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
                    /* try { // try from 023c4a94 to 024c4a9b has its CatchHandler @ 023c4c50 */
                    /* try { // try from 023c4aa8 to 024c4aaf has its CatchHandler @ 023c4c48 */
  if ((bRam0000000004f9c350 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c350 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
                    /* try { // try from 023c4ad8 to 024c4adb has its CatchHandler @ 023c4cb0 */
    lVar2 = UnityEngine_Transform__Find_43d4bec(param_1,param_2,0);
                    /* try { // try from 023c4adc to 024c4aff has its CatchHandler @ 023c4c60 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
                    /* try { // try from 023c4b18 to 024c4b37 has its CatchHandler @ 023c4c5c */
    if ((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(lVar2,0), lVar2 != 0)
       ) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,param_3 & 1,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar2 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
        }
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar4,param_3 & 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

