/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<>c__DisplayClass44_0$$<SetupActivity>b__0
void Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass44_0___SetupActivity_b__0 (Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass44_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<>c__DisplayClass44_0$$<SetupActivity>b__0
   void Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass44_0___SetupActivity_b__0
   (Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass44_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel___c__DisplayClass44_0___SetupActivity_b__0_22fe9e4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9c4c4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    bRam0000000004f9c4c4 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,1);
  uStack_34 = *(undefined4 *)(param_1 + 0x18);
  lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
  if (plVar3 != (long *)0x0) {
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,0);
    }
    puVar2 = PTR_DAT_04cae520;
    puVar1 = PTR_DAT_04cab550;
    if ((int)plVar3[3] != 0) {
      plVar3[4] = lVar4;
      thunk_FUN_02134474(plVar3 + 4,lVar4);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_Lang__Get_215f9c0(uVar6,plVar3,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      Dino_BusSand_App_UI_MainHudPanel__ToastText_22fdec4(uVar6);
                    /* try { // try from 023feaf0 to 024feaf7 has its CatchHandler @ 023fedc8 */
                    /* try { // try from 023feaf8 to 024feddf has its CatchHandler @ 023fe9a0 */
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

