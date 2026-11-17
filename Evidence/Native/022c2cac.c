/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<>c__DisplayClass31_0$$<Glide>b__0
void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass31_0___Glide_b__0 (Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass31_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<>c__DisplayClass31_0$$<Glide>b__0
   void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass31_0___Glide_b__0
   (Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass31_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_StreakEventPanel___c__DisplayClass31_0___Glide_b__0_21c2cac
               (float param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
                    /* try { // try from 022c2cb4 to 023c2df3 has its CatchHandler @ 022c2c1c */
  if ((bRam0000000004f9baed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9baed = 1;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x90);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_2 + 0x10) != 0) &&
       (plVar2 = *(long **)(*(long *)(param_2 + 0x10) + 0x90), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x047906f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x448))
                (*(float *)(param_2 + 0x18) +
                 (*(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x18)) * param_1,plVar2,1,
                 *(undefined8 *)(*plVar2 + 0x450));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

