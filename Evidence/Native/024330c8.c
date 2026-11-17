/* IL2CPP: Dino.BusSand.App.UI.RevealPanel.<>c__DisplayClass6_0$$<BuildStage>b__0
void Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0___BuildStage_b__0 (Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RevealPanel.<>c__DisplayClass6_0$$<BuildStage>b__0
   void Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0___BuildStage_b__0
   (Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0___BuildStage_b__0_23330c8
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c629 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c629 = 1;
  }
                    /* try { // try from 02433108 to 0253310f has its CatchHandler @ 02433460 */
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02433118 to 02533123 has its CatchHandler @ 0243345c */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
                    /* try { // try from 02433128 to 02533133 has its CatchHandler @ 02433454 */
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_2 + 0x10);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 02433148 to 02533153 has its CatchHandler @ 02433458 */
                    /* WARNING: Could not recover jumptable at 0x0243316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0243316c to 02533177 has its CatchHandler @ 02433440 */
      (**(code **)(*plVar3 + 0x2a8))
                (_UNK_00e20844,_UNK_00e20844,_UNK_00e20174,param_1 * _UNK_00e1ff30,plVar3,
                 *(undefined8 *)(*plVar3 + 0x2b0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

