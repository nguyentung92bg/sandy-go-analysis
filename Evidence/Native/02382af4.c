/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$TopPanel
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitPopup__TopPanel (Dino_BusSand_App_UI_KitWindow_o* w, float height, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$TopPanel
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitPopup__TopPanel
   (Dino_BusSand_App_UI_KitWindow_o* w, float height, System_String_o* name, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_KitPopup__TopPanel_2282af4(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((bRam0000000004f9c149 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf410);
    bRam0000000004f9c149 = 1;
  }
  puVar1 = PTR_DAT_04caf410;
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar2 = Dino_BusSand_App_UI_KitPopup__Panel_2282a2c
                      (_UNK_00e1feb4,param_1,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],uVar2,param_3);
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(param_1 * 0.5,0,uVar2,*(undefined8 *)puVar1)
    ;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

