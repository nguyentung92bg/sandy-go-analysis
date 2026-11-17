/* IL2CPP: Dino.BusSand.App.UI.WinStreakInfoPanel.<>c__DisplayClass1_0$$<OnOpen>b__0
void Dino_BusSand_App_UI_WinStreakInfoPanel___c__DisplayClass1_0___OnOpen_b__0 (Dino_BusSand_App_UI_WinStreakInfoPanel___c__DisplayClass1_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakInfoPanel.<>c__DisplayClass1_0$$<OnOpen>b__0
   void Dino_BusSand_App_UI_WinStreakInfoPanel___c__DisplayClass1_0___OnOpen_b__0
   (Dino_BusSand_App_UI_WinStreakInfoPanel___c__DisplayClass1_0_o* __this, float k, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakInfoPanel___c__DisplayClass1_0___OnOpen_b__0_2335b5c
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02435ab0 with catch @ 02435b5c
                        */
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02435b78 to 02535b7b has its CatchHandler @ 02435b9c */
                    /* try { // try from 02435b7c to 02535b9f has its CatchHandler @ 024359fc */
  if ((bRam0000000004f9c63c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c63c = 1;
  }
                    /* catch() { ... } // from try @ 02435b78 with catch @ 02435b9c */
  uVar4 = *(undefined8 *)(param_2 + 0x10);
                    /* try { // try from 02435ba0 to 02535ba7 has its CatchHandler @ 02435bb0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02435ba8 to 02535bb3 has its CatchHandler @ 024359fc */
    thunk_FUN_0218fdac();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02435ba0 with catch @ 02435bb0
                        */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_2 + 0x10);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02435c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2a8))
                (_UNK_00e20840,_UNK_00e20844,_UNK_00e20754,param_1 * _UNK_00e1fe38,plVar3,
                 *(undefined8 *)(*plVar3 + 0x2b0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

