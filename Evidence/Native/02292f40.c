/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnBack
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnBack (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnBack
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnBack
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnBack_2192f40(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9ad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9ad = 1;
  }
  plVar2 = (long *)Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay_2192fd0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02292fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

