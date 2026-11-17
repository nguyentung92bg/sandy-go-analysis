/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass5_0$$<OpenMain>b__0
void Dino_BusSand_App_UI_PassportUi___c__DisplayClass5_0___OpenMain_b__0 (Dino_BusSand_App_UI_PassportUi___c__DisplayClass5_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass5_0$$<OpenMain>b__0
   void Dino_BusSand_App_UI_PassportUi___c__DisplayClass5_0___OpenMain_b__0
   (Dino_BusSand_App_UI_PassportUi___c__DisplayClass5_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi___c__DisplayClass5_0___OpenMain_b__0_21dcebc(long param_1)

{
  long lVar1;
  
                    /* try { // try from 022dcec4 to 023dd01f has its CatchHandler @ 022dcec4
                       catch() { ... } // from try @ 022dcec4 with catch @ 022dcec4
                       catch() { ... } // from try @ 022dd200 with catch @ 022dcec4 */
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_Meta_PassportFeature__FinishPassport_2248f90(*(long *)(param_1 + 0x10),0);
  Dino_BusSand_App_UI_PassportUi__FlyBankCoins_21db764(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022dcef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

