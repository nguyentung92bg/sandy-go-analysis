/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$AniCloseClip
System_String_o* Dino_BusSand_App_UI_ContinueBottomPanel__AniCloseClip (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$AniCloseClip
   System_String_o* Dino_BusSand_App_UI_ContinueBottomPanel__AniCloseClip (const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UI_ContinueBottomPanel__AniCloseClip_22bf830(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = Dino_BusSand_App_UI_ContinueBottomPanel__HaveContinueAniClose_22bf694(1);
  if ((bRam0000000004f9c349 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb65e0);
    FUN_02132f7c(PTR_DAT_04cb65e8);
    bRam0000000004f9c349 = 1;
  }
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)PTR_DAT_04cb65e8;
    if (iVar1 == 1) {
      puVar3 = (undefined8 *)PTR_DAT_04cb65e0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}

