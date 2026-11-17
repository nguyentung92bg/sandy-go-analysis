/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$Forward
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingTrackRow__Forward (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, float targetY, bool finish, bool playMoveSound, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$Forward
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingTrackRow__Forward
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, float targetY, bool finish, bool
   playMoveSound, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingTrackRow__Forward_21f6a6c
               (undefined4 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1748;
  if ((bRam0000000004f9bc38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1748);
    bRam0000000004f9bc38 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
  *(undefined4 *)(lVar2 + 0x2c) = param_1;
  *(byte *)(lVar2 + 0x28) = param_3 & 1;
  *(byte *)(lVar2 + 0x29) = param_4 & 1;
  return lVar2;
}

