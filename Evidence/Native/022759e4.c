/* IL2CPP: Dino.BusSand.App.SimulatedAds.<>c__DisplayClass5_0$$<ShowRewarded>b__0
void Dino_BusSand_App_SimulatedAds___c__DisplayClass5_0___ShowRewarded_b__0 (Dino_BusSand_App_SimulatedAds___c__DisplayClass5_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SimulatedAds.<>c__DisplayClass5_0$$<ShowRewarded>b__0
   void Dino_BusSand_App_SimulatedAds___c__DisplayClass5_0___ShowRewarded_b__0
   (Dino_BusSand_App_SimulatedAds___c__DisplayClass5_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_SimulatedAds___c__DisplayClass5_0___ShowRewarded_b__0_21759e4(long param_1)

{
  long lVar1;
  
  if ((bRam0000000004f9b8d5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb28);
    bRam0000000004f9b8d5 = 1;
  }
  Dino_BusSand_App_SimulatedAds__Shown_21756d4();
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 02275a24 to 02375a2f has its CatchHandler @ 02275a7c */
                    /* WARNING: Could not recover jumptable at 0x02275a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),1,*(undefined8 *)PTR_DAT_04cabb28,
               *(undefined8 *)(lVar1 + 0x28));
    return;
  }
                    /* try { // try from 02275a44 to 02375a4f has its CatchHandler @ 02275a74 */
  return;
}

