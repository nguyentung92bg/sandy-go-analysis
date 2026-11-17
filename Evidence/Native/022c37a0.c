/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<PayWin>d__39$$System.IDisposable.Dispose
void Dino_BusSand_App_UI_StreakEventPanel__PayWin_d__39__System_IDisposable_Dispose (Dino_BusSand_App_UI_StreakEventPanel__PayWin_d__39_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<PayWin>d__39$$System.IDisposable.Dispose
   void Dino_BusSand_App_UI_StreakEventPanel__PayWin_d__39__System_IDisposable_Dispose
   (Dino_BusSand_App_UI_StreakEventPanel__PayWin_d__39_o* __this, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_UI_StreakEventPanel__PayWin_d__39__System_IDisposable_Dispose_21c37a0
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_04cafe10;
                    /* try { // try from 022c37a0 to 023c37a3 has its CatchHandler @ 022c37a4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c37a0 with catch @ 022c37a4
                        */
                    /* try { // try from 022c37a8 to 023c37ab has its CatchHandler @ 022c37b4 */
                    /* try { // try from 022c37ac to 023c37b7 has its CatchHandler @ 022c3688 */
  if (*(int *)(param_1 + 0x10) - 3U < 4 || *(int *)(param_1 + 0x10) == -3) {
    if ((bRam0000000004f9baf5 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cafe10);
      bRam0000000004f9baf5 = 1;
    }
    auVar3._8_8_ = *(undefined8 *)puVar1;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    auVar3._0_8_ = param_1 + 0x70;
    return auVar3;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}

