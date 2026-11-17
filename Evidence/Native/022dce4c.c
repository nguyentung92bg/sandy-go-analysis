/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass19_0$$<RunGuide>b__1
void Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0___RunGuide_b__1 (Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi.<>c__DisplayClass19_0$$<RunGuide>b__1
   void Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0___RunGuide_b__1
   (Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi___c__DisplayClass19_0___RunGuide_b__1_21dce4c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    Dino_BusSand_App_Meta_PassportFeature__StartPassport_2249b48(*(long *)(param_1 + 0x10),0);
    if (*(long *)(param_1 + 0x10) != 0) {
      Dino_BusSand_App_Meta_PassportFeature__SetPassportCommand_2249c54
                (*(long *)(param_1 + 0x10),0,0);
                    /* catch() { ... } // from try @ 022dcadc with catch @ 022dce80 */
      uVar1 = Dino_BusSand_App_UI_PassportUi__OpenMain_21daf00(*(undefined8 *)(param_1 + 0x18),1);
                    /* catch() { ... } // from try @ 022dcb58 with catch @ 022dce84 */
      if (((uVar1 & 1) == 0) && (lVar2 = *(long *)(param_1 + 0x18), lVar2 != 0)) {
                    /* catch() { ... } // from try @ 022dcc04 with catch @ 022dce98 */
                    /* catch() { ... } // from try @ 022dc9d0 with catch @ 022dce9c */
                    /* WARNING: Could not recover jumptable at 0x022dcea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 022dca28 with catch @ 022dcea0
                       catch() { ... } // from try @ 022dcd58 with catch @ 022dcea0
                       catch() { ... } // from try @ 022dcdd8 with catch @ 022dcea0 */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
                    /* catch() { ... } // from try @ 022dcda0 with catch @ 022dcea4 */
                    /* catch() { ... } // from try @ 022dcca4 with catch @ 022dcea8 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

