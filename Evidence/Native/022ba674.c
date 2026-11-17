/* IL2CPP: Dino.BusSand.App.UI.RaceView$$.ctor
void Dino_BusSand_App_UI_RaceView___ctor (Dino_BusSand_App_UI_RaceView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RaceView$$.ctor
   void Dino_BusSand_App_UI_RaceView___ctor (Dino_BusSand_App_UI_RaceView_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_RaceView___ctor_21ba674(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bab9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf788);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bab9 = 1;
  }
  puVar2 = PTR_DAT_04caf788;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    uVar4 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(lVar3,0);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    thunk_FUN_02134474();
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

